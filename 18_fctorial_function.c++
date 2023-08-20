//factorial using c++

//fib(n) = fib(n-2) + fib(n-1)

#include<iostream>
using  namespace std;

int factorial(int n){
        if (n<=1)
        {
                return 1;
        }
        return n * factorial(n-1);
}
int main(){
        int a;
        cout<<"Enter the number: ";
        cin>>a;
        cout<<"The value of factorial\
        "<<a<<" is: "<<factorial(a);
        return 0;
}