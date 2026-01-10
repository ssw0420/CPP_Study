#include <iostream>
#include <thread>
#include <atomic>
#include <mutex>
#include <chrono>

using namespace std;

mutex mtx;

int main()
{
	//atomic<int> shared_memory(0);
	int shared_memory(0);
	auto count_func = [&]() {
		for (int i = 0; i < 100000; ++i)
		{
			//this_thread::sleep_for(chrono::milliseconds(1));
			//shared_memory++;

			//mtx.lock();
			//shared_memory.fetch_add(1);
			//std::lock_guard lock(mtx);
			//std::scoped_lock lock(mtx);
			shared_memory++;
			//cout << shared_memory << endl;
			//mtx.unlock();
		}
	};

	thread t1 = thread(count_func);
	thread t2 = thread(count_func);

	t1.join();
	t2.join();

	cout << "After" << endl;
	cout << shared_memory << endl;

	return 0;
}