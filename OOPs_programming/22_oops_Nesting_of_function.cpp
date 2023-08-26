/*
OOPs = classes and objects

C++ = initially called as C with classes
Class = extation of structures (in c)
sturctures  had limitations
  -members are public
  -no methods
classes = structures+more 
classes = can have methods and properties
classes = can make few menbers as private & few as public
structure in c++ are typedefed
you can decleare objects along with the class declaration

*/

#include<iostream>
using namespace std;

class binary{
  string s;
  public:
  void read(void);
  void chk(void);
};

void binary::read(void){
  cout<<"Enter a binary number"<<endl;
  cin>>s;
}

void binary:: chk(void){
  for (int i = 0; i < s.length(); i++)
  {
    if (s.at(i)!='0' && s.at(i)!='1'){
      cout<<"Incorrect binary format"<<endl;
      exit(0);
    }
  }
  
}

int main(){
  binary b;
  b.read();
  b.chk();
  return 0;
}