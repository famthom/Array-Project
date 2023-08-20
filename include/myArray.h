#ifndef MYARRAY_H
#define MYARRAY_H

#include <iostream>
#include <cassert>


template <class type>
class myArray
{
    public:
        myArray(int a, int b);
        myArray(int a);
        myArray();
        ~myArray();
        myArray(const myArray& other);

        type& operator=(const myArray& other);
        type operator=(const type t);

        type& operator[] (int num);

        const type& operator[] (int num) const;

    protected:

    private:
        type* index;
        int arLength;
        int inNumber, finNumber;
};

template <class type>
myArray<type>::myArray()
{
    index = new type [1];
    //ctor
}

template <class type>
myArray<type>::myArray(int length) {
    inNumber = 0;
    finNumber = length;
    index = new type[finNumber];
}

template <class type>
myArray<type>::myArray(int in, int fi) {
    int total;
    inNumber = in;
    finNumber = fi;
    if (inNumber < 0 && finNumber < 0) {
        in = in - in - in;
        fi = fi - fi - fi;
        total = in - fi;
    }
    if (inNumber < 0 && finNumber >= 0) {
        total = in - in - in;
        total += fi;
    }
    if (inNumber >= 0 && finNumber > 0) {
        total = fi - in;
    }

    arLength = total;
    index = new type [arLength];
}

template <class type>
myArray<type>::~myArray()
{
    delete [] index;
    //dtor
}

template <class type>
myArray<type>::myArray(const myArray& objType)
{
    //copy ctor
}
template <class type>
type& myArray<type>::operator=(const myArray& objType)
{
    if (this == &objType) return *this; // handle self assignment
    //assignment operator
    return *this;
}

template <class type>
type myArray<type>::operator=(const type ty) {
    return ty;
}


template <class type>
type& myArray<type>::operator[](int num) {
    int tempIn;
    assert(inNumber <= num && num < finNumber);
    tempIn = inNumber; // this doesn't do anything
    int temEn = inNumber;
    if(inNumber < 0 && num < 0) {
        temEn -= num;
        tempIn = temEn - temEn - temEn;
    }
    if(inNumber < 0 && num >= 0) {
        temEn += num;
        tempIn = temEn - temEn - temEn;
    }
    if(inNumber >= 0 && num > 0) {
        tempIn = num - inNumber;
    }

    return index[tempIn];
}

#endif // MYARRAY_H
