#include<iostream>
using namespace std;

class Employee{
        int id;
        int salary;
        public:
        void setId(void){
                cout<<"Enter the id of the emplooye "<<endl;
                cin>>id;
        }
        void getId(void){
                cout<<"The id of the employye is "<<id<<endl;
        }       
};

class complex{

        int a;
        int b;
        public:

        void setData(int v1 ,int v2){
                a = v1;
                b = v2;
        }

        void setDataBySum(complex o1,complex o2){
                a = o1.a + o2.a;
                b = o1.b + o2.b;
        }

        void printnumber(){
                cout<< "Your complex number is "<<a<<" +" <<b<<"i"<<endl;
        }
};
int main(){
        Employee anuj[4];
        //for an array is use to the class
        for (int i = 0; i < 4; i++)
        {

                 anuj[i].setId();
                 anuj[i].getId();
                 
                
        }

        complex c1,c2,c3;
        c1.setData(1,2);
        c1.printnumber();
        c2.setData(3,4);
        c2.printnumber();
        c3.setDataBySum(c1,c2);
        c3.printnumber(); 
        return 0;
}