#include<iostream>
using namespace std;

int sum(int a, int b){
        return a+b;
}
int sum(int a, int b, int c){
        return a+b+c;
}

int main(){
        cout<<"sum of two number is: "<<sum(3,5)<<endl;
        cout<<"sum of three number is: "<<sum(4,5,3)<<endl;
        return 0;
}