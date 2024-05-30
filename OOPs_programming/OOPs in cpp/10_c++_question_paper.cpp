#include<iostream>
using namespace std;
class xyz{
        public:
        string employee;
        string employee_men;
        string employee_female;
        void insurance();
};
void xyz::insurance(){
        float age;
        int status;
        cout<<"Enter the age of employee: ";
        cin>>age;
        cout<<"Ente your Married status: with y/n for y press 1 and n for 0: ";
        cin>>status;
        if (status==1)
        {
                cout<<"company claim the insourence:";

        }
        else if(status==0){
                cout<<"compan";
        }
        
}
// int main(){

// }

// function using call by value:
// void callvalue(int x,int y){
//         ++x,++y;
        
//         cout<<"value of a and b inside the function :"<<x<<y;
//         cout<<"\n";
// }

// call by refrence;

// void callref(int &x,int &y){
//         ++x,++y;
        
//         cout<<"value of a and b inside the function reference :"<<x<<y;
//         cout<<"\n";
// }
// //call by address
// void calladd(int *x,int *y){
//         int p,q;
//         p =*x;
//         q = *y;
//         ++(p),++(q);
        
//         cout<<"value of a and b inside the function of address :"<<p<<q;
//         cout<<"\n";
// }
// int main(){
//        int a,b;
//        a = 2;
//        b = 3;
       
//         // callvalue(a,b);
//         // callref(a,b);
//         calladd(&a,&b);
//         cout<<a<<b;
//         return 0;
// }
// #include<iostream>
// using namespace std;
// void abc(int &a,int &b)
// {
//  ++a;
//  ++b;
//  cout<<a<<b;
// }
// int main(){

//  int x=2,y=3;
//  cout<<++x<<y++;
//  abc(x,y);
//  cout<<x<<y;
//  abc(x,y);
//  cout<<x<<y;
//  return (0);
// }

// inline int abc (int a, int b= 2, int c = 6 )
// { 
//         cout<<(a+b+c);
//  return (a + b + c) ;
// }
// int main ()
// { int x=5 , y = 6 , z = 7;
//  cout << abc (x);
//  cout << abc (x,y);
//  cout << abc (x,y,z);
//  cout<< abc (z);
//  cout << abc (y, z) ;
//  return 0;
// }


// #include<iostream>
// using namespace std;
// class student{
//         public:
//         int roll;
//         char gr;
//         void input(){
//                 cout<<"roll no.";
//                 cin>>roll;
//                 cout<<"grade:";
//                 cin>>gr;
//                 cout<<"\n";
//         }
//         void display(){
//                 cout<<roll<<endl;
//                 cout<<gr<<endl;
//         }
// }a,b,c;
// int main(){
//         a.input();
//         b.input();
//         c.input();
//         cout<<"displaying the output\n";
//         a.display();
//         b.display();
//         c.display();
//         return 0;
// }

// class complex{
//         public:
//         int a,b;
//         void com1(int a,int b){
//                 cout<<"your complex no is: "<<a<<" + "<<b<<"i"<<endl;
//         }
//         void com2(int a,int b){
//                 cout<<"your complex no is: "<<a<<" + "<<b<<"i"<<endl;
//         }
//         void compsum(complex o1, complex o2){
//                 a = o1.a + o1.b;
//                 b = o2.a + o2.b;
//                 cout<<"your sum of two function is :"<<a<<"+"<<b<<"i"<<endl;
//         }

        
// };
// int main(){
//         complex c1,c2,c3;
//         c1.com1(2,3);
//         c2.com2(24,5);
//         c3.compsum(c1,c2);
//         return 0;
// }