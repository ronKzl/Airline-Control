
#ifndef ARRAY_H
#define ARRAY_H

#include <iostream>
#include <string>
#include <iomanip>
#include <cstdlib>
#include "defs.h"

using namespace std;

template <class T>
class Array {
	template <class V>
  friend ostream& operator<<(ostream&, const Array<V>&);

	public:
		//constructor
		Array();
		//destructor
		~Array();
		//other
		void add(T);
		//overloaded for the 2 print() funcs in airline
		const T& operator[](int) const;
		T& operator[](int);
		int getSize() const;
		bool isFull() const;

	private:
		int size;
		T elements[MAX_ARR]; //depends on the T can be Obj or a Obj* pointer but it is static

};

template <class T>
Array<T>::Array(){
	size = 0;
}
template <class T>
Array<T>::~Array(){
//nothing to delete the array holds pointers and should be deleted in airline
}
template <class T>
void Array<T>::add(T t){
	if (size >= MAX_ARR)   return;
  	elements[size++] = t;
}
template <class T>
int Array<T>::getSize() const{
	return size;
}
template <class T>
bool Array<T>::isFull() const{
	return size >= MAX_ARR;
}

template <class T>
const T& Array<T>::operator[](int index) const{
	if (index < 0 || index >=size){
    cout<< "ERROR: invalid index"<<endl;
    exit(1);
  }
  return elements[index];
}

template <class T>
T& Array<T>::operator[](int index){
	if (index < 0 || index >=size){
    cout<< "ERROR: invalid index"<<endl;
    exit(1);
  }
  return elements[index];
}

template <class T>
ostream& operator<<(ostream& out, const Array<T>& arr){
	for (int i = 0; i < arr.getSize(); ++i){
			out << arr[i] << endl;
	}
	return out;
}

#endif
