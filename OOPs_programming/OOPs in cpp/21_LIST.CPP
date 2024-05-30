#include<iostream>
#include<list>
#include<iterator>
using namespace std;
int main(){
        list<int> l;
        int x = 10,y = 9;
        l.push_front(34);
        l.push_back(12);
        l.push_back(x++);
        l.push_front(++y);
        l.push_back(25);
        list<int>::iterator ltr1;
        // ltr1 = l.begin();
        // ltr2 = l.end();
        for (ltr1 = l.begin(); ltr1 != l.end(); ltr1++)
        {
                cout<<" element of the list is: " <<*ltr1<<endl;
        }
        return 0;
}