#include<iostream>
using namespace std;
class complex{
        /*In case of constructor overloading we should use the same name but different in artuments or you can say the passing the different data types in arguments in the formal aurguments:*/
        int a,b;
        public:
        complex(){ //default constructor
                a =  0;
                b = 0;
        }

        complex(int x, int y){ // parameterized constructor
                a = x;
                b = y;
        }
 
        complex(int x){ // parameterized constructor
                a = x;
                b = 9;
        }

        void printnumber(){
                cout<<"Your complex number is: "<<a<<" + "<<b<<"i"<<endl;
        }
};

int main(){
        complex c;
        c.printnumber();

        complex c1(23,45);
        c1.printnumber();

        complex c2(5);
        c2.printnumber();
        return 0;
}