//============================================================================
// Name        : main.cpp
// Author      : WhoisThisBeast
// Version     :
// Copyright   : WhoisThisBeast 2016
// Description : Thread
//============================================================================


#include "Thread.h"
#include <stdio.h>

namespace thread{


Thread::Thread(){
	printf("Thread::Thread\n");
	CrateThread();

}

Thread::~Thread(){
	pthread_join(_thId,NULL);
}

void Thread::Run(){

}


bool Thread::CrateThread(){
	printf("Thread::CrateThread\n");
	// pthread Create Call..
	pthread_create(&_thId,NULL,&thread::Thread::ThreadCallBack,this);

}

void Thread::TerminateThread(){

	pthread_cancel(_thId);
}

void Thread::Join(){

	pthread_join(_thId,NULL);
}

void Thread::Exit(){

	pthread_exit(&_exitRet);
}


void* Thread::ThreadCallBack(void* object){
	printf("Thread::ThreadCallBack\n");
	((thread::Thread *)(object))->Run();
}


}
