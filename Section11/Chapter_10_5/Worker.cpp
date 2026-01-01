#include "Timer.h"
#include "Worker.h"

void Worker::DoSomething()
{
	Timer timer; // start timer

	// do some work here

	timer.elapsed(); // end timer and report elapsed time
}