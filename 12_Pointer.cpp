#include<iostream>
using namespace std;

int main(){
        int a= 3;
        int* b = &a;
        cout<<b<<endl; 
        cout<<*b;
        // & ---> (Address of ) Operator
        // * ---> Dereference operator
        return 0;
}