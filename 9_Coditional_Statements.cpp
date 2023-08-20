// If else statements in c++:
#include<iostream>

using namespace std;
int main(){
        int age;
        cout<<"Enter your age:";
        cin>> age;
        if(age<18){
                cout<<"You can not drive a car"<<endl;
        }
        else if (age==18)
        {
                cout<<"First you have to pass the exam"<<endl;

        }
        else{
                cout<<"You can drive car";
        }

// Using Switch Case:

int age1;
cout<<"Tell me your age:";
cin>> age1;

switch (age1)
{
case 18:
        cout<<"You can make you id first";
        break;
case 10:
        cout<<"You can not vote in election";
        break;

default:
        cout<<"You can vote in election";
        break;
}

return 0 ;

        
}