#include <iostream>
#include <string>

using namespace std;

int main(int argc, char* argv[])
{
	for (int count = 0; count < argc; ++count)
	{
		cout << argc << endl;
		cout << argv[count] << endl; // .exe file location
	}

	for (int count = 0; count < argc; ++count)
	{
		std::string argv_single = argv[count];

		if (count == 2)
		{
			int input_number = std::stoi(argv_single); // "100" -> 100
			cout << input_number + 1 << endl; // 101
		}
		cout << argv_single << endl;
	}

	return 0;
}

//#include <fstream>
//#include <iostream>
//
//using namespace std;
//
//int main(int argc, char* argv[])
//{
//    if (argc != 2) // argc should be 2 for correct execution
//        // We print argv[0] assuming it is the program name
//        cout << "usage: " << argv[0] << " <filename>\n";
//    else {
//        // We assume argv[1] is a filename to open
//        ifstream the_file(argv[1]);
//        // Always check to see if file opening succeeded
//        if (!the_file.is_open())
//            cout << "Could not open file\n";
//        else {
//            char x;
//            // the_file.get ( x ) returns false if the end of the file
//            //  is reached or an error occurs
//            while (the_file.get(x))
//                cout << x;
//        }
//        // the_file is closed implicitly here
//    }
//}