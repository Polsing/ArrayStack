#if !defined(_ARRAYSTACK_H)
#define _ARRAYSTACK_H
//#define DFFAULT_MAX_STACK_SIZE 5
#include "../Arraylist/Arraylist.h"

class ArrayStack : public Arraylist
{
    private:   

      int maxSize;

    public:

      ArrayStack(int maxSize );
      void push(int e);
      int pop();
      int top(); 
   


};


#endif // _MYCODE_H_
