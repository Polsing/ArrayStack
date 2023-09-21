#include "ArrayStack.h"
#include <iostream>
using namespace std;

 ArrayStack::ArrayStack(int maxSize) : Arraylist(maxSize)
 {
    this->maxSize = maxSize;
 }

 void ArrayStack::push(int e)
 {
    add(size(),e);
 }

 int ArrayStack::pop()
 {
    return remove(size()-1);
 }

 int ArrayStack::top()
 {
    return get(size()-1);
 }
 