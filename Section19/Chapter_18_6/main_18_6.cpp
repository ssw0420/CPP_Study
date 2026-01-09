#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib> // exit()
#include <sstream>

using namespace std;

int main()
{
	// writing
	if (true)
	{
		// ios::app, ios::binary
		ofstream ofs("my_first_file.dat", ios::app); // = ofs.open("my_first_file.dat");
		
		if (!ofs)
		{
			cerr << "Couldn't open file" << endl;
			exit(1);
		}

		//ASCII Format
		ofs << "Line 1" << endl;
		ofs << "Line 2" << endl;

		// Binary Format
		//const unsigned num_data = 10;
		//ofs.write((char*)&num_data, sizeof(num_data));

		//for (int i = 0; i < num_data; ++i)
		//{
		//	ofs.write((char*)&i, sizeof(i));
		//}

		ofs.close(); // not necessary
	}

	// reading
	if (true)
	{
		ifstream ifs("my_first_file.dat");

		if (!ifs)
		{
			cerr << "Cannot open file" << endl;
			exit(1);
		}

		// ASCII Format
		while (ifs)
		{
			std::string str;
			getline(ifs, str);
			
			std::cout << str << endl;
		}

		// Binary Format
		//unsigned num_data = 0;
		//ifs.read((char*)&num_data, sizeof(num_data));

		//for (unsigned i = 0; i < num_data; ++i)
		//{
		//	int num;
		//	ifs.read((char*)&num, sizeof(num));

		//	std::cout << num << " ";
		//}
	}
}