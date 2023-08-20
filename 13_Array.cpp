#include<iostream>
using namespace std;
int main(){
        int arr[5]= {34,23,12,4,32};
        int i = 0;
        cout<<" element of an array: "<<endl;
        // array using while loop;
        cout<<"array using while loop;"<<endl;
        while (i<5)
        {
              cout<<"arr"<<i<<"="<<arr[i]<<endl;
              i= i+1; 
        }
        //array using do-while loop;

        cout<<"dowhile loop:"<<endl;
        do
        {
              cout<<"arr"<<i<<"="<<arr[i]<<endl;
              i= i+1; 
        }while(i<5);

        // array using for loop;
        cout<<"array using for loop:"<<endl;
        for ( i = 0; i < 5; i++)
        {
                cout<<"arr"<<i<<"="<<arr[i]<<endl;
        }
        
       return 0; 
}