// use of the map STL container

// map is a kind of data sturcture which is stored the element in the form of key and value pairs.

// in the map keys are stored in the ordered or sorted manner.

// map dese not allowed the duplicate values in key value pair.

// map is not contain the contiguous memory allocation.

#include<iostream>
#include<map>
#include<string>
#include<iterator>
using namespace std;
int main(){
        map<string,int> Map;
        Map.insert({{"ram",45},{"shyam",56}});
        Map["rohan"] = 9; 
        Map["raju"] = 19; 
        Map["ramesh"] = 29; 
        Map["sohan"] = 39;
        Map.erase("sohan"); // it is erase the specific key value pair which you want.
        map<int, string> MAp;
        MAp[45] = "CPP";
        map<string,int>:: iterator itr;
        for (itr = Map.begin(); itr != Map.end(); itr++)
        {
                cout<<(*itr).first<<" "<<(*itr).second<<"\n";
        }
        Map.clear(); // use this to clear the map
        cout<<Map["rohan"]<<" "<<Map["raju"]<<"\n";
        cout<<MAp[45];

        return 0;

}