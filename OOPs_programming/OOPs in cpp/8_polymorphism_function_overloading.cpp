#include<iostream>
using namespace std;
void area(float radius){
        float ar = 3.14*radius*radius;
        cout<<"Area of circle is:"<<ar;
        cout<<"\n";
}

void area(float l, float b){
        float are = l*b;
        cout<<"Area of circle is:"<<are;
        cout<<"\n";
}
int main(){
        float r,l,b;
        cout<<"Enter the radius length and width : ";
        cin>>r>>l>>b;
        area(r);
        area(l,b);
        return 0;
}