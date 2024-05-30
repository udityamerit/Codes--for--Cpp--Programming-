// working with files in c++ 

/* The useful classes for working with files in c++ are: 
1. fstreambase
2. ofstream ---> derived from fsteambase:
3. ifsteram ---> derived from fstreambase:

There are two way to work with file opening:
1. using constructor
2. using memeber function open() of the class */

#include<iostream> 
#include<fstream>
#include<string>
using namespace std;

class vehicle{
        public:
        string name;
        string model;
        string company;
        string color;
        long price;
        vehicle(){
                cout<<"Enter the name of the vehicle: ";
                cin>>name;
                cout<<"Enter the model name of the vehicle: ";
                cin>>model;
                cout<<"Enter the name of the vehicle company: ";
                cin>>company;
                cout<<"Enter the color of the vehicle: ";
                cin>>color;
                cout<<"Enter the price of the vehicle: ";
                cin>>price;
                cout<<"\n";
        }
        
        vehicle(int p){
                cout<<"You are selecting the car type of vehicle:\n";
                cout<<"Name of the vehicle is: ";
                cin>>name;
                cout<<"Enter the model name of the vehicle: ";
                cin>>model;
                cout<<"Enter the name of the vehicle company: ";
                cin>>company;
                cout<<"Enter the color of the vehicle: ";
                cin>>color;
                cout<<"Enter the price of the vehicle: ";
                cin>>price;
                cout<<"\n";
        }

        vehicle(double j){
                cout<<"You are selecting the motorcycle type of vehicle:\n";
                cout<<"Name of the vehicle is: ";
                cin>>name;
                cout<<"Enter the model name of the vehicle: ";
                cin>>model;
                cout<<"Enter the name of the vehicle company: ";
                cin>>company;
                cout<<"Enter the color of the vehicle: ";
                cin>>color;
                cout<<"Enter the price of the vehicle: ";
                cin>>price;
                cout<<"\n";
        }

        void data_display(){
                cout<<"Name of the vehicle is: "<<name<<endl;
                cout<<"Model of the vehicle is: "<<model<<endl;
                cout<<"Name of the vehicle company is: "<<company<<endl;
                cout<<"color of the vehicle is: "<<color<<endl;
                cout<<"Price of the vehicle is: "<<price<<endl;
                cout<<"\n";
        }
};

int main(){
        
        ofstream outfile; // use for the insert the data in the file:
        outfile.open("25.1_file.txt",ios::out | ios::app);
        // ios::app means file is open in append mode
        int x;
        cout<<"Please select the vehicle option:\n 1 for truck\n 2 for cars\n 3 for motorcycle\n";
        cin>>x;
        if(x == 1){
              vehicle ob1;
              ob1.data_display();
              outfile <<"Name of the vehicle is: "<< ob1.name << " \n" <<"Model of the vehicle is: "<< ob1.model << " \n" <<"Name of the vehicle company is: "<< ob1.company << " \n" <<"color of the vehicle is: "<< ob1.color << " \n" <<"Price of the vehicle is: "<< ob1.price << "\n";
              cout<<"Data updated successfully in file:"<<endl;
        }
        else if(x == 2){
              vehicle ob2(4);
              ob2.data_display(); 
             outfile <<"Name of the vehicle is: "<< ob2.name << " \n" <<"Model of the vehicle is: "<< ob2.model << " \n" <<"Name of the vehicle company is: "<< ob2.company << " \n" <<"color of the vehicle is: "<< ob2.color << " \n" <<"Price of the vehicle is: "<< ob2.price << "\n";
              cout<<"Data updated successfully in file:"<<endl; 
        }
        else if(x == 3){
              vehicle ob3(4.56);
              ob3.data_display(); 
              outfile <<"Name of the vehicle is: "<< ob3.name << " \n" <<"Model of the vehicle is: "<< ob3.model << " \n" <<"Name of the vehicle company is: "<< ob3.company << " \n" <<"color of the vehicle is: "<< ob3.color << " \n" <<"Price of the vehicle is: "<< ob3.price << "\n";
              cout<<"Data updated successfully in file:"<<endl;  
        }
        outfile.close();

        ifstream infile; // use for the expract the data inside the file and display: 
        string st;
        infile.open("25.1_file.txt", ios::in);
        while (infile.eof() !=0) // eof() means "end of file"  is a inbuild function which is used read all the content in side the file:
        {
            getline(infile, st); 
            cout<<st<<endl;    
        }
        infile.close();
        
        return 0;
}