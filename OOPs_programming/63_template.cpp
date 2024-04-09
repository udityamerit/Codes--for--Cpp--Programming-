#include<iostream>
#include<list>
#include<iterator>
#include<vector>
using namespace std;
int main(){
        // list<int> l = {1,3,4,56,7,2,6,78};
        // list<int> l = {1,2,3,4,5,6};
        vector<int> l = {1,2,3,4,5,6};
        vector<int>::iterator itr;
        for (itr = l.begin(); itr !=l.end()-1; itr++)
        {
                // if(*itr==6){
                //         continue;
                // }
                // else{
                //         cout<<*itr<<endl;
                // }
                cout<<*itr<<endl;
        }
        return 0;
        
}