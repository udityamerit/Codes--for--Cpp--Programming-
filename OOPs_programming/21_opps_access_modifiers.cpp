#include<iostream>
using namespace std;

class Employee{
        private:
        int a, b ,c;
        public:
        int d, e;
        void setData(int a1, int b1, int c1); //Declaration 
        void getData(){
              cout<<"Value of a is "<<a<<endl;  
              cout<<"Value of b is "<<b<<endl;  
              cout<<"Value of c is "<<c<<endl;  
              cout<<"Value of d is "<<d<<endl;  
              cout<<"Value of e is "<<e<<endl;  
        }

};

void Employee :: setData(int a1, int b1, int c1){
        a= a1;
        b = b1;
        c = c1;
}

int main(){
        Employee anuj;
        // access the public data
        anuj.d = 23;
        anuj.e = 34;
        // access the private data 
        anuj.setData(3,4,2);
        anuj.getData();
        return 0;
}