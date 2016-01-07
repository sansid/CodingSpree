/*
 * ArrayProblems.h
 *
 *  Created on: Jan 2, 2016
 *      Author: sangeetha
 */

#ifndef ARRAYPROBLEMS_H_
#define ARRAYPROBLEMS_H_
#include <math.h>

class ArrayProblems {
public:
	ArrayProblems();
	virtual ~ArrayProblems();

	/*
	 * Question 01 :
	 * Method to find max product of three numbers in a given integer array
	 * integer => +ve and -ve numbers
	 * Array contains at least 3 elements
	 *
	 */
	int findMaxProductofThreeGreedy(const int inputArr[] , const int& size);

};

#endif /* ARRAYPROBLEMS_H_ */
