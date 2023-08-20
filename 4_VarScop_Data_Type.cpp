#include<iostream>
using namespace std;
int sum = 34; // Global Variable;
void dgl(){
        int sum = 78; // Local Variable;
}
int main(){
        int sum = 3; // Local Variable;
        int  a = 3;
        int v = 23;
        cout<< a <<endl;
        cout<< v <<endl;
        cout<<"hello main"<<endl;
        cout<< sum <<endl;
        return 0;
}