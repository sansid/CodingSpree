//============================================================================
// Name        : Codeathon
// Author      : sansid
// Version     : 1.0
// Copyright   : 
// Description : Contains code
//============================================================================

#include <iostream>
#include "../Questions/ArrayProblems.h"

using namespace std;

int main() {
	cout << "********** [ Begin Test ] *********** \n" << endl;
	ArrayProblems* arrProbHandler = new ArrayProblems();

	//Question 01
	//Test array
	//int arr[4] = {1,2,-10,-5};
	int arr[4] = { -100 , 200 , 5 , 10};
	cout <<"Question 01 : Max Product of three numbers in an integer array \n" <<endl;
	int output = arrProbHandler->findMaxProductofThreeGreedy(arr , (sizeof(arr)/sizeof(arr[0])));
	cout << "Max product of three numbers is \n" << (int) output <<endl;

	//Question 02

	//*************************************************************************
	cout <<"\n****************************************\n"<<endl;
	return 0;
}
