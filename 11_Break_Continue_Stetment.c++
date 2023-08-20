#include<iostream>
using namespace std;

int main(){
        for (int i = 0; i < 10; i++)
        {
                if (i==3){continue;}
                if (i==8){break;}

                cout<<i<<endl;
        }
        
}