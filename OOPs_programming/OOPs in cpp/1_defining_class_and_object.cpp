#include<iostream>
using namespace std;
//difining the class and objects and difine the member fuction in side the class

class student{
        public:
        int rollno; // this is the  data member
        char grade;// this is the  data member

        // this the member function 
        void Input_data(){
                cout<<"Enter roll no: ";
                cin>>rollno;
                cout<<"Enter grade: ";
                cin>>grade;
        }
        // this is the member function
        void show_data(){
                cout<<"The roll no is: "<<rollno<<endl;
                cout<<"The grade is: "<<grade<<endl;
        }
};
int main(){
        student a,b,c; // creating the object
        // calling the member function
        a.Input_data(); 
        b.Input_data();
        c.Input_data();
        a.show_data();
        b.show_data();
        c.show_data();
        return 0;
}