/*
 *  ArrayProblems.cpp
 *
 *  Created on: Jan 2, 2016
 *  Author: sansid
 */

#include "ArrayProblems.h"
#include <iostream>

//in-line functions
#define max(a,b) (a>=b)?a:b
#define min(a,b) (a<=b)?a:b
#define maxOfThree(a,b,c) (a>=(max(b,c)))?a:max(b,c)
#define minOfThree(a,b,c) (a<=(min(b,c)))?a:min(b,c)


using namespace std;

ArrayProblems::ArrayProblems() {
	// TODO Auto-generated constructor stub

}

ArrayProblems::~ArrayProblems() {
	// TODO Auto-generated destructor stub
}

/*
 * Question 01 :
 * Solution is Greedy algorithm
 * Each iteration maintain
 * highestProductOfThree , highestProductOfTwo , highest, lowest , lowestProductOfTwo.
 * In the end of iteration return highestProductOfThree
 * Returns -1 in case of error / else the product.
 */

int ArrayProblems::findMaxProductofThreeGreedy(const int inputArr[], const int& size)
{
	int highestProductOfThree = -1;
	// check if array has at least three elements
	if(size<3)
		return highestProductOfThree;
	else if( size == 3)
		highestProductOfThree = inputArr[0] * inputArr[1] * inputArr[2];
	else
	{
		highestProductOfThree = inputArr[0] * inputArr[1] * inputArr[2];

		//initialize highest and lowest
		int highest = max(inputArr[0], inputArr[1]);
		int lowest = min(inputArr[0], inputArr[1]);
		int highestProductOfTwo = inputArr[0] * inputArr[1];
		int lowestProductOfTwo = inputArr[0] * inputArr[1];

		//traverse the array updating the 5 things we maintain.
		for(int i=2 ; i < size ;i++)
		{
			int current = inputArr[i];

				highestProductOfThree = maxOfThree(
				highestProductOfThree,
				current*highestProductOfTwo,
				current*lowestProductOfTwo);

			//last loop not needed - we have reached end of iteration.
			if(i!=size)
			{
				highestProductOfTwo = maxOfThree(
					highestProductOfTwo,
					current*highest,
					current*lowest);

				lowestProductOfTwo = minOfThree(
					lowestProductOfTwo,
					current*highest,
					current*lowest);

				highest = max(current , highest);

				lowest = min( current, lowest);
			}
		}
	}

	return highestProductOfThree;
}
