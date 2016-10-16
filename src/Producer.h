//============================================================================
// Name        : Producer.h
// Author      : WhoisThisBeast
// Version     :
// Copyright   : WhoisThisBeast 2016
// Description : Thread
//============================================================================


#ifndef _PRODUCER_H_
#define _PRODUCER_H_

#include "Thread.h"

class Producer : public thread::Thread{

public:
	Producer();
	~Producer();
	virtual void Run();
	void WriteToBuffer();
};

#endif
