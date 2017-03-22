#include "stdafx.h"
#include <iostream>
template <class T>
class ProtectedArray
{
public:
	T operator[] (int index) const // [] operator : for r-value(return by value)
	{
		if (index > size - 1 || index < 0)
			throw std::out_of_range("The index is invalid");
		return ptr[index];
	}
	T& operator[] (int index) //  [] operator : for l-value(return by reference)
	{
		if (index > size - 1 || index < 0)
			throw std::out_of_range("The index is invalid");
		return ptr[index];
	}
	ProtectedArray<T>(int arraySize) // regular c'tor 
	{
		size = arraySize;
		ptr = new T[size];
		for (int i = 0; i < size; i++)
			ptr[i] = 0;
	}
	ProtectedArray<T>(const ProtectedArray  &ArrayToCopy) // copy c'tor
	{
		size = ArrayToCopy->getSize();
		ptr = new T[size];
		for (int i = 0; i < size; i++)
			ptr[i] = ArrayToCopy[i];
	}
	~ProtectedArray<T>() //d'tor
	{
		delete[] ptr;
	}
	int getSize() const // return the size of the array
	{
		return size;
	}
	T* begin() // return pointer to the first index of the array
	{
		return &(ptr[0]);
	}
	T* end() //return pointer to the last index of the array
	{
		return &(ptr[size - 1]);
	}
	T* getPtr(int index) // return pointer to this index
	{
		return &ptr[index];
	}
private:
	T* ptr;
	int size;

};

