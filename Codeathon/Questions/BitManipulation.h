/*
 * BitManipulation.h
 *
 *  Created on: Jan 2, 2016
 *      Author: sangeetha
 */

#ifndef BITMANIPULATION_H_
#define BITMANIPULATION_H_

class BitManipulation {

public:
	// Default constructor for the class
	// Does only shallow copy
	BitManipulation();

	// Copy constructor looks like the constructor with a reference passed for copy purpose
	// when we need deep copy we need a copy constructor
	// Note : Without const - it becomes pass by value that internally uses copy const ,
	//        calling the same copy constructor again - stack overflow !!! x-O-x

	BitManipulation(const BitManipulation &);

	// Operator overload for "=" , pass a const object to be used for deep copy
	// When an assignment is done using "=" this shall be called for this class
	// When we need the copy to use deep copy.
	// By declaring this copy constructor as private ,
	// we can prevent "pass by value" in creation of class objects.


	void solveAllBitProblems();

	// Destructor for the class
	// Declare it virtual when inheritance is used
	// ensure proper clean up when child class instance is assigned to base class object type

	virtual ~BitManipulation();

	unsigned checkNumOnBits(unsigned x);

	bool isBitNSet(unsigned num, unsigned position);
};

#endif /* BITMANIPULATION_H_ */
