#include<iostream>
using namespace std;

int main(){
        int num,p,r,rev = 0;
        cout<<"Enter the number to check the pollindrome of a number: ";
        cin>>num;
        p = num;
        do
        {
                r = num % 10;
                rev = (rev*10)+r;
                num = num/10;
        }while(num!= 0);
        
        if(p == rev){
                cout<<p<<" is a pollindrome number:";
        }
        else{
                cout<<p<<"  is not a pollindrome number:";
        }
        return 0;
}