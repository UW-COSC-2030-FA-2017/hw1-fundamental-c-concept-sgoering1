//Collection.h
//Sam Goering
//v1.3

#ifndef COLLECTION.H
#define COLLECTION.H

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

template <typename T>
class collection
{
public:
	collection(int len);
	~collection() { delete[] cPtr; }
	int insert(T&);
	void makeEmpty();
	int remove(T&);
	int removeRand();
	int notContained(T&);
	int isEmpty();
	int isFull();
private:
	int len;
	T* cPtr;
};

//Constuctor set the size of the array to a inputed lenght
//Set Lenght to a positive if a negagive value is inputed
//Set the the lenght to zero if zero
template <typename T>
collection<T>::collection(int len) {
	if (len < 0) {
		len = len * -1;
		cPtr = new T[len];
	}
	else if (len == 0) {
		cPtr = new T[0];
	}
	else {
		cPtr = T[len];
	}
	for (int i = 0; i < len; i++) {
		cPtr[i] = NULL;
	}
}

//Checks if cPtr is empty by looking if each value is NULL
//If all return NULL then the Collection is empty
template <typename T>
int collection<T>::isEmpty() {
	int n_Count(0);
	for (int i = 0; i < len; i++) {
		if (cPtr[i] == NULL) {
			n_Count++;
		}
	}
	if (n_Count == len) {
		return 1;  //Return 1 if true
	}
	else {
		return 0;  //Return 0 if flase
	}
}

//Check if cPtr is full by looking if each element is NULL
//If any is null returns false (0) else returns true (1)
template <typename T>
int collection<T>::isFull() {
	int n_Count(0);
	for (int i = 0; i < len; i++) {
		if (cPtr[i] == NULL) {
			n_Count++;
		}
	}
	if (n_Count == len) {
		return 0;  //Return 0 if false
	}
	else {
		return 1;  //Return 1 if true
	}
}

template <typename T>
int collection<T>::insert(T& item) {
	T* temp;
	if (!ifFull()) {
		for (int i = 0; i < len; i++) {
			if (cPtr[i] == NULL) {
				temp = cPtr[i];
				break;
			}
			temp = item;
			return 1; //Succeded in inserting object
		}
	}
	else {
		return 0; //Failed to insert becasue collection was full
	}
}

//Removes an element in the list with a specified 
//Location, if the element is not found then the function 
//Returns 0, else returns 1
template <typename T>
int collection<T> ::remove(T& item) {
	T *temp = item;
	int _temp;
	for (i = 0; i < len; i++) {
		if (cPtr[i] = temp) {
			cPtr[i] = NULL;
			_temp = 1;
			break;
		}
	}
	if (_temp != 1) {
		return 0; //Removal Failed
	}
	else {
		return 1; //Removal Beuno
	}
}

//Sets a random number (0 - len) and removes (sets NULL) if
//the position is found in the collection
template <typename T>
int collection<T>::removeRand() {
	srand(time(NULL));
	int return_i;
	int pos = rand() % len;
	for (int i = 0; i < len; i++) {
		if (i == pos) {
			cPtr[i] == NULL;
			return_i = 1;
		}
	}
	if (return_1 != 1) {
		return 0;
	}
	return 1;
}

//If the object "item" is equal to any of the elements in the collection return 1
template <typename T>
int collection<T>::notContained(T& item) {
	T* temp = item;
	int return_i;
	for (i = 0; i < len; i++) {
		if (cPtr[i] == temp) {
			return_i = 1;
		}
	}
	if (return_1 != 0) {
		return 0;
	}
	return return_1;
}

//Cylces through the collection and makes all elements nullptr
template <typename T>
void collection<T>::makeEmpty() {
	for (int i = 0; i < len; i++) {
		len[i] = NULL;
	}
}

#endif
