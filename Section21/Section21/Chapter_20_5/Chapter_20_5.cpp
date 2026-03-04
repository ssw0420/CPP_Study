#include <ctime>
#include <iostream>
#include <string>
#include <boost/asio.hpp>

using boost::asio::ip::tcp;

int main()
{
	try
	{
		boost::asio::io_context io_context;

		tcp::endpoint endpoint(tcp::v4(), 13);
		tcp::acceptor acceptor(io_context, endpoint);

		std::cout << "Server started" << std::endl;

		for (;;) // while(true)
		{
			const std::string message_to_send = "Hello From Server";

			boost::asio::ip::tcp::iostream stream;

			// 어느 시점에 실행되는지 확인하기위한 출력 구문
			std::cout << "check 1" << std::endl;

			boost::system::error_code ec;
			acceptor.accept(stream.socket(), ec);

			std::cout << "check 2" << std::endl;

			if (!ec) // 클라이언트가 접속이 된 경우
			{
				// receive message from client
				std::string line;
				std::getline(stream, line);
				std::cout << line << std::endl;

				// send message to client
				stream << message_to_send;
				stream << std::endl; // send std::endl to end getline of client
			}
		}
	}
	catch (std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

	return 0;
}