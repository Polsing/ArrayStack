/**
 * 
 * 
 * 64028780 พลสิงห์ ตาเละมัน
 *
 * 
*/
#include "ArrayStack.h"
#include <iostream>
using namespace std;

int main()
{
   int op;
   int l;
   
   
  cout<<"Enter set maximum List: ";
  cin>>l;

   ArrayStack obj(l);
   cout<<endl;
   
  do
   {
    cout<<endl;
    cout<<" Menu "<<endl;
    cout<<"1:SIZE 2:PUSH element 3:POP element"<<endl; 
    cout<<"4:TOP element 5:CLEAR 6:DISPLAY"<<endl;

    cout<<endl;
    cout<<" Enter Number of Menu: ";
    cin>>op;
  
  if(op==2) //ADD
  {
    int element;
    
      cout<<"Set Data List Is: ";
      cin>>element;
      obj.push(element);
    
      obj.display();
      cout<<endl;
  }

  else if(op==1) //SIZE
  {
    int k1 = obj.size();
    cout<<"The current data size List is: "<<k1<<endl;
    cout<<endl;
  }

  else if(op==3) // GET
  {
      cout<<""<<obj.pop()<<endl;
  }

  else if(op==4) //REMOVE
  {
      cout<<""<<obj.top()<<endl;

  }

  else if(op==5) //SET
  {
    obj.Clear();
  }

  else if(op==6) //Indexof
  {
    obj.display();
  }
 
  
 
   } while (op !=0);
   
   return 0;
   
 }
