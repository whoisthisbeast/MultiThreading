//============================================================================
// Name        : Producer.cpp
// Author      : WhoisThisBeast
// Version     :
// Copyright   : WhoisThisBeast 2016
// Description : Thread
//============================================================================


#include "Producer.h"
#include <stdio.h>

Producer::Producer() :
		Thread() {

	printf("Producer::Producer\n");

}

Producer::~Producer() {

	printf("Producer::~Producer\n");
}

void Producer::Run() {
	printf("Producer::Run\n");

}

void Producer::WriteToBuffer() {
	printf("Producer::WriteToBuffer\n");

}
