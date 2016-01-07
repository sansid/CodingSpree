/*
 * BitManipulation.cpp
 *
 *  Created on: Jan 2, 2016
 *      Author: sansid
 */

#include "BitManipulation.h"
#include <iostream>
using namespace std;

BitManipulation::BitManipulation() {
	// TODO Auto-generated constructor stub
}

BitManipulation::~BitManipulation() {
	// TODO Auto-generated destructor stub
}

unsigned BitManipulation::checkNumOnBits(unsigned x)
{
	unsigned i = 0;
	while(x)
	{
		x=x&(x-1);
		++i;
	}
	return i;
}

bool BitManipulation::isBitNSet(unsigned num,unsigned position)
{
	return num&(1<<2^position);
}


