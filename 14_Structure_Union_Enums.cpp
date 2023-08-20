#include<iostream>
using namespace std;
struct worker
{
        int id;
        float salary;
        char favchar;
};

int main(){
        struct worker Ramesh;
        Ramesh.id = 12;
        Ramesh.salary = 230;
        Ramesh.favchar = 'r';
        cout<<"Your id is "<<Ramesh.id<<endl;
        cout<<"Your salary is "<<Ramesh.salary<<endl;
        cout<<"Your favchar "<<Ramesh.favchar<<endl;
        return 0;
}
