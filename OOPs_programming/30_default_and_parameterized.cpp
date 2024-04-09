#include<iostream>
using namespace std;
class complex{
        public:
        int a,b;
        // defult consturctor:
        complex(){
                cout<<"Enter the real part of a complex number: ";
                cin>>a;
                cout<<"Enter the imaginary  part of the complex number: ";
                cin>>b;
                cout<<"Your complex number is: "<<a<<" + "<<b<<"i"<<endl;
        }

        // parameterized constructor:
        complex(int x, int y){
                cout<<"Your complex number is: "<<x<<" + "<<y<<"i"<<endl;
        }
};

int main(){
        complex a; // default constructor invoked
        complex c(20,30); // parameterized constructor invoked
        return 0;
}

/* create a function  which takes 2 point objects and computes the distance between those 2  points (hint : use friend function)*/
