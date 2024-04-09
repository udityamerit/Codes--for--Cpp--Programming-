#include<iostream>
using namespace std;
class Complex{
        // constructor  is a special member function with the same    name as of the class. It is automatically invoked when object is created.
        int a,b;
        public:
        Complex(); // construcot decleration
        void printnumber(){
                cout<<"Your number is "<< a << " + " << b<<"i "<<endl;
        }

};
Complex:: Complex(){
        a = 10;
        b = 20;
}

int main(){
        Complex c;
        c.printnumber();        
        return 0;
}

/* Characteristics of Constructors
1. It should be declared in the public section of the class
2. They are automatically invoked whenever the object is created
3. They cannot return values and do not return types 
4. It can have default arguments
5. We cannot refer to their address
*/

