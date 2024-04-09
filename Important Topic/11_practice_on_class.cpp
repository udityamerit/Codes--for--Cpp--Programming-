// #include<iostream>
// using namespace std;
// class A{
//         public:
//         int x;
//         int y;
//         A(){
//                 x = 20;
                
//         }
//         A(int y){
//                 x = y;
//         }
//         int operator - (A ob2){
//                 int f;
//                 f = x-ob2.x;
//                 return f;
//         }
// };
// int main(){
//         A ob1;
//         A ob2(10);
//         cout<<ob1-ob2;
//         return 0;
// }

// #include<iostream>
// using namespace std;
// class A{
//         public:
//         int x;
//         A(){
//                 x = 20;
                
//         }
//         A(int y){
//                 x = y;
//         }
//         int operator * (A ob2){
//                 int f;
//                 f = x*ob2.x;
//                 return f;
//         }
// };
// int main(){
//         A ob1;
//         A ob2(100);
//         cout<<ob1*ob2;
//         return 0;
// }

#include<iostream>
using namespace std;
class complex{
        int x,y;
        public :
        void set_data(int p,int q){
                x = p;
                y = q;
        }
        void get_data(){
                
                cout<<"Your number is: "<<x<<" + "<<y<<"i"<<endl;
        }

};

int main(){
        int d,t,m,n;
        cout<<"Enter your real part of the first complex number is: ";
        cin>>d;
        cout<<"Enter your imagenary part of the first complex number: ";
        cin>>t;
        complex o1,o2;
        o1.set_data(d,t);
        o1.get_data();

        cout<<"Enter your real part of the second complex number is: ";
        cin>>d;
        cout<<"Enter your imagenary part of the second complex number: ";
        cin>>t;

        o2.set_data(d,t);
        o2.get_data();
        return 0;
}

// #include<iostream>
// using namespace std;

// void convert(int p){
//         int r = -(p);
//         cout<<"Your changing sign of integer is: "<<r<<endl;
// }
// void convert(float p){
//         int r = -(p);
//         cout<<"Your changing sign of float is: "<<r<<endl;
// }
// void convert(long p){
//         int r = (9/5)*p+32;
//         cout<<"Your Temperatrue in celsius to fahrenheit is: "<<r<<endl;
// }
// void convert(double p){
//         double f = p*12;
//         cout<<"Your foot in inches is: "<<f<<endl;
// }

// int main(){
//         int c;
//         float p;
//         long t;
//         double d;
//         cout<<"Enter your integer to chenge the sign is: ";
//         cin>>c;
//         convert(c);
//         cout<<"Enter your changing sign to float is: ";
//         cin>>p;
//         convert(p);
//         cout<<"Enter your Temperatrue in celsius to fahrenheit is: ";
//         cin>>t;
//         convert(t);
//         cout<<"Enter your foot in inches is: ";
//         cin>>d;
//         convert(d);
//         return 0;
// }
