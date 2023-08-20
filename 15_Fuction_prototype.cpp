#include<iostream>
using namespace std;

// IF  we sift the whole function in the last  OF  MAin function then to access the parameter of the sum function we have to declear the prototype of the function 

//prototype function
int sum(int a,int b);
// int sum (int a,int b){
//         int c = a + b;
//         return c;
// }
int main(){
        int num1,num2;
        cout<<"Enter the first number"<<endl;
        cin>>num1;
        cout<<"Enter the second number"<<endl;
        cin>>num2;
        cout<< "the sum of two number is "<<sum(num1,num2);
        return 0;
}
int sum (int a,int b){
        int c = a + b;
        return c;
}