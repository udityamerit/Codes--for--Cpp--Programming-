#include<iostream>
#include<vector>
#include<iterator>
using namespace std;

int main(){
        vector<int> v = {7,8,1,2,3};
        // vector<int> v ;
        // int count;
        // cout<<"Enter the length of the vector: ";
        // cin>>count;
        // for (int i = 0; i < count; i++)
        // {
        //         cout<<"Enter the elements of the vector: ";
        //         cin>>v[i];
        // }
        
        vector<int>:: iterator ptr;
        int temp = v[0];
        float avg = 0 ;
        for ( ptr = v.begin(); ptr <v.end(); ptr++)
        {
               if(*ptr < temp)
               {
                        temp = *ptr;
               }
        }
        cout<<"smallest element of the vector is: "<<temp;
        cout<<"\n";
        int x;
        cout<<"Enter the value of the index which you want to access the value: ";
        cin>>x;
        cout<<"Value at given index is: "<<v[x]<<endl;
        for (ptr  = v.begin(); ptr < v.end(); ptr++)
        {
                avg = avg + *ptr;

        }
        cout<<"sum of the vector: "<<avg<<endl;
        int len = 0;
        for (ptr = v.begin(); ptr < v.end(); ptr++)
        {
                len++;
        }
        
        cout<<"length of the vector is: "<<len<<endl;
        cout<<"Average of the vector is: "<<avg/len<<endl;
        
        return 0;
        
}