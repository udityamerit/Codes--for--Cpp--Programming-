#include<iostream>
using namespace std;
void swap(int a,int b){
        int temp;
        temp = a;
        a = b;
        b = temp;
        cout<<"Value of a is: "<<a<<endl;
        cout<<"Value of b is: "<<b<<endl;
}

void swap(float a,float b){
        float temp;
        temp = a;
        a = b;
        b = temp;
        cout<<"Value of a is: "<<a<<endl;
        cout<<"Value of b is: "<<b<<endl;
}
void swap(char a,char b){
        char temp;
        temp = a;
        a = b;
        b = temp;
        cout<<"Value of a is: "<<a<<endl;
        cout<<"Value of b is: "<<b<<endl;
}
int main(){
        int a,b;
        float c,d;
        char f,g;
        cout<<"Enter the two integer or two float of two char:";
        cin>>a>>b>>c>>d>>f>>g;
        
        swap(a,b);
        swap(c,d);
        swap(f,g);
        return 0;
}