#include<iostream>
using namespace std;

class Employee{
        int id;
        static int count; // this is static method  
        
        public:
         void setData(void){
                cout<<"Enter the id "<<endl;
                cin>>id;
                count++;
         }
         void getData(void){
                cout<<" The id of the Employee "<<count << " is "<< id << endl;
         }
};

// count is the static data member of the class Employee
int Employee :: count; // Default value is 0 


int main(){
        Employee anuj,aman;
        anuj.setData(); 
        anuj.getData();

        aman.setData(); 
        aman.getData(); 
        return 0;
}