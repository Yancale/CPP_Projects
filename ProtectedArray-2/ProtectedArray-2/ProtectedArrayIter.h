#pragma once
template<class T>
class ProtectedArrayIter
{
public:
	ProtectedArrayIter<T>(T* Pt, ProtectedArray<T> *a) // c'tor that check if the pointer is valid for this array, if so create new iterator.
	{
		if (a->begin()>(Pt + sizeof(T)) || a->end()<(Pt + sizeof(T)))
			throw out_of_range("The index is invalid");
		p = Pt;
		arr = a;
	}
	~ProtectedArrayIter<T>(){} // d'tor
	T*  operator++() // prefix protected ++ operator, return the pointer after doing ++ to it
	{
		if (arr->begin()>(p + sizeof(T)) || arr->end()<(p + sizeof(T)))
			throw out_of_range("The index is invalid");
		p += sizeof(T);
		return p;
	}
	T* operator--() // prefix protected -- operator, return the pointer after doing ++ to it
	{
		if (arr->begin()>(p - sizeof(T)) || arr->end()<(p - sizeof(T)))
			throw out_of_range("The index is invalid");
		p -= sizeof(T);
		return p;
	}
	T*  operator++(int) // postfix protected ++ operator, return the pointer before doing ++ to it
	{
		if (arr->begin()>(p + sizeof(T)) || arr->end()<(p + sizeof(T)))
			throw out_of_range("The index is invalid");
		T  temp = *p;
		p += sizeof(T);
		return &temp;
	}
	T* operator--(int) // postfix protected -- operator,  return the pointer before doing ++ to it
	{
		if (arr->begin()>(p - sizeof(T)) || arr->end()<(p - sizeof(T)))
			throw out_of_range("The index is invalid");
		T  temp = *p;
		p -= sizeof(T);
		return &temp;
	}

private:
	T * p; //pointer to this index of the array
	ProtectedArray<T> *arr; // // ponter to the array itself
};


