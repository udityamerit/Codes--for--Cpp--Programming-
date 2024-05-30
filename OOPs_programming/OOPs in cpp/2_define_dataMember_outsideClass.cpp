#include<iostream>
using namespace std;
// declearing the member function outside of the class using scope oprerator(::)
class student{
        public:
        int student_id;
        int student_roll_no;
        void input_data();
        void display_data();
};

void student::input_data(){
        cout<<"Enter the Student id: ";
        cin>>student_id;
        cout<<"Enter the Student roll no: ";
        cin>>student_roll_no;
}

void student::display_data(){
        cout<<"Student id is: "<<student_id<<endl;
        cout<<"Student roll no is: "<<student_roll_no<<endl;

}

int main(){
        student aman, amit, rohit;
        cout<<"Enter the detail of the student:\n";
        aman.input_data();
        amit.input_data();
        rohit.input_data();
        cout<<" \n";
        cout<<"Displaying the details of the student:\n";
        aman.display_data();
        amit.display_data();
        rohit.display_data();
        return 0;
}
