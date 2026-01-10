#include <iostream>
#include <future>
#include <thread>

using namespace std;

int main(void)
{
	////multi-threading
	//{
	//	int result;
	//	std::thread t([&] {result = 1 + 2; });
	//	t.join();
	//	cout << result << endl; // 3
	//}

	////task-based parallelism
	//{
	//	// can use auto type
	//	std::future<int> fut = std::async([] {return 1 + 2; });
	//	cout << fut.get() << endl; // 3
	//}

	////future and promise
	//{
	//	std::promise<int> prom;
	//	auto fut = prom.get_future(); // auto -> std::promise<int>

	//	auto t = std::thread([](std::promise<int>&& prom)
	//		{
	//			prom.set_value(1 + 2);
	//		}, std::move(prom));

	//	cout << fut.get() << endl;
	//	t.join();
	//}

	//{
	//	auto f1 = std::async([] {
	//		cout << "async1 start" << endl;
	//		this_thread::sleep_for(chrono::seconds(2));
	//		cout << "async1 end" << endl;
	//		});

	//	auto f2 = std::async([] {
	//		cout << "async2 start" << endl;
	//		this_thread::sleep_for(chrono::seconds(1));
	//		cout << "async2 end" << endl;
	//		});

	//	std::cout << "Main Function" << endl;
	//}

	//{
	//	auto t1 = std::thread([] {
	//		cout << "async1 start" << endl;
	//		this_thread::sleep_for(chrono::seconds(2));
	//		cout << "async1 end" << endl;
	//		});

	//	auto t2 = std::thread([] {
	//		cout << "async2 start" << endl;
	//		this_thread::sleep_for(chrono::seconds(1));
	//		cout << "async2 end" << endl;
	//		});

	//	t1.join();
	//	t2.join();

	//	std::cout << "Main Function" << endl;
	//}

	{
		std::async([] {
			cout << "async1 start" << endl;
			this_thread::sleep_for(chrono::seconds(2));
			cout << "async1 end" << endl;
			});

		std::async([] {
			cout << "async2 start" << endl;
			this_thread::sleep_for(chrono::seconds(1));
			cout << "async2 end" << endl;
			});

		std::cout << "Main Function" << endl;
	}

	return 0;
}