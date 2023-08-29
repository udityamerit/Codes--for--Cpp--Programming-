#include<iostream>
using namespace std;

class Complex{
        int a;
        int b;
        public:
        void setNumber(int n1,int n2){
                a = n1;
                b = n2;
        }
        friend Complex sumcomplex(Complex o1, Complex o2);
        void printNumber(){
                cout<<"Your number is "<<a<<" + "<<b<<"i "<<endl;

        }
};

class Calculator{
        public:
        int add(int a, int b){
                return(a + b);
        }
};
 
int main(){


        return 0;
}