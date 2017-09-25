// Collection.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Collection.h"
#include <iostream>
using namespace std;

int main()
{
	collection<double> double_Collection(10);
	collection<int> int_Collection(16);

	double a(12.3), b(12.234), c(120.341);
	int a_(126), b_(15), c_(236);
	cout << double_Collection.insert(a) << endl;
	cout << double_Collection.insert(b) << endl;
	cout << double_Collection.insert(c) << endl;

	cout << int_Collection.insert(a_) << endl;
	cout << int_Collection.insert(b_) << endl;
	cout << int_Collection.insert(c_) << endl;

	int check_DBC = double_Collection.isEmpty();
	cout << check_DBC << endl;
	int check_ITC = int_Collection.isEmpty();
	cout << check_ITC << endl;

	cout << double_Collection.isFull() << endl;
	cout << int_Collection.isFull() << endl;

	cout << double_Collection.remove(b) << endl;
	cout << int_Collection.remove(a_) << endl;

	cout << double_Collection.removeRand() << endl;
	cout << int_Collection.removeRand() << endl;

	double test(12.45);
	int test_(129);
	cout << double_Collection.notContained(test) << endl;
	cout << int_Collection.notContained(test_) << endl;

	double_Collection.makeEmpty();
	int_Collection.makeEmpty();

	int check_DBC = double_Collection.isEmpty();
	cout << check_DBC << endl;
	int check_ITC = int_Collection.isEmpty();
	cout << check_ITC << endl;

	return 0;
}

