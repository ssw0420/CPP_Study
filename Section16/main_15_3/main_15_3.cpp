#include "Timer.h"
#include "AutoPtr.h"
#include "Resource.h"

using namespace std;

AutoPtr<Resource> GenerateResource()
{
	AutoPtr<Resource> res(new Resource(100000000));

	return res;
}

int main()
{
	streambuf* orig_buf = cout.rdbuf();
	//cout.rdbuf(NULL); // disconnect cout from buffer

	Timer timer;

	{
		AutoPtr<Resource> main_res;
		main_res = GenerateResource();
	}

	cout.rdbuf(orig_buf);
	timer.elapsed();

	return 0;
}