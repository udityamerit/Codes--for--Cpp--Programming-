#include<iostream>
using namespace std;

class student{
        public:
        //default constructor: It is invoke during the object creation it dose not contain any arguments:

        student(){
                cout<<"Default constructor:\n ";
        }

        // parametiraised constructor: This type of constructor contain the argument during the object creation such type of constructor known as parametrised constructor:
        int x;
        student(int p){
                x = p;
                cout<<x<<endl;
        };

};
int main(){
        student a,b,c; // call of default constrctor:
        //calling of parameteraised constructor
        student n(6);
        student m(9);
        return 0;
}