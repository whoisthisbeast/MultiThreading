//============================================================================
// Name        : main.cpp
// Author      : WhoisThisBeast
// Version     :
// Copyright   : WhoisThisBeast 2016
// Description : Thread
//============================================================================

#ifndef _THREAD_H_
#define _THREAD_H_

#include <pthread.h>

namespace thread{

class Thread{

private:

	pthread_t _thId;
	int _exitRet;


public:
	Thread();
	virtual ~Thread();
	virtual void Run();
	virtual bool CrateThread();
	static void* ThreadCallBack(void* object);
	void TerminateThread();
	void Join();
	void Exit();
};

} //namespace
#endif
