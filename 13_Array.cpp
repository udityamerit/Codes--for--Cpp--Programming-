// #include<iostream>
// using namespace std;
// int main(){
//         int arr[5]= {34,23,12,4,32};
//         int i = 0;
//         cout<<" element of an array: "<<endl;
//         // array using while loop;
//         cout<<"array using while loop;"<<endl;
//         while (i<5)
//         {
//               cout<<"arr"<<i<<"="<<arr[i]<<endl;
//               i= i+1; 
//         }
//         //array using do-while loop;

//         cout<<"dowhile loop:"<<endl;
//         do
//         {
//               cout<<"arr"<<i<<"="<<arr[i]<<endl;
//               i= i+1; 
//         }while(i<5);

//         // array using for loop;
//         cout<<"array using for loop:"<<endl;
//         for ( i = 0; i < 5; i++)
//         {
//                 cout<<"arr"<<i<<"="<<arr[i]<<endl;
//         }
        
//        return 0; 
// }

// file reading and writing in c++
// code 5

#include<iostream>
#include<fstream>
#include<string>
using namespace std;
class st{
        public:
        string name;
        int age;
        void set(){
            
                cin>>name>>age;
        }
        void get(){
                cout<<name<<age;
        }
};
int main(){
        st s;
        ofstream file;
        file.open("aa.txt",ios::out);
        if(!file){
                cout<<"error";
        }
        else{
                cout<<"file open\n";
        }
        s.set();
        file.write((char*)&s, sizeof(s));
        cout<<"file write\n";
        file.close();

        ifstream file1;
        file1.open("aa.txt",ios:: in);
        if(!file){
                cout<<"error";
        }
        else{
                cout<<"open";
        }
        file1.read((char*)&s,sizeof(s));
        cout<<"reading file\n";
        file1.close();
        s.get();
        return 0;
}