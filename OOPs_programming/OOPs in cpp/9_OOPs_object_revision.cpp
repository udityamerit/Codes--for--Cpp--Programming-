//  fucntions inside the class:

// #include<iostream>
// using namespace std;
// class student{
//         public:
//         int roll_no;
//         char grade;
//         void input_data(){
//                 cout<<"Enter the roll no ";
//                 cin>>roll_no;
//                 cout<<"Enter the grade ";
//                 cin>>grade;
//         }
//         void show_data(){
//                 cout<<"Roll no is: "<<roll_no<<endl;
//                 cout<<"Grade is: "<<grade<<endl;
//         }
// };
    

// int main(){
//         student A,B,C;
//         A.input_data();
//         B.input_data();
//         C.input_data();
//         cout<<"Dispalying data of student:\n ";
//         A.show_data();
//         B.show_data();
//         C.show_data();
//         return 0;

// }

  // function outside the class: 
// #include<iostream>
// using namespace std;
// class employee{
//         public:
//         int id;
//         int salary;
//         void input_data();
//         void show_data();
// };

// void employee::input_data(){
//         cout<<"Ente the id: \n";
//         cin>>id;
//         cout<<"Ente the salary: \n";
//         cin>>salary;
// }

// void employee::show_data(){
//         cout<<"id is: "<<id<<endl;
//         cout<<"salary is: "<<salary<<endl;
// }

// int main(){
//         employee o,c;
//         o.input_data();
//         c.input_data();
//         o.show_data();
//         c.show_data();
//         return 0;
// }

// CONSTRUCTORS: 

// #include<iostream>
// using namespace std;
// class abc{
//         public:
//         int a,b;
        // default constructor:
        // abc(){
        //         cout<<"hello world ";
        // }

        // parametirised constructor:
        // abc(int i, int j){
        //         a = i;
        //         b = j;
        //         cout<<a<<" "<<b<<endl;
        // }

        // copy constructor:
//         abc (int p,int q){
//                 a = p;
//                 b = q;
//                 cout<<a<<b;
//         }

//         abc (abc &x){
//                 a = x.a;
//                 b = x.b;
//                 cout<<a<<b;
//         }
        
// };
// int main(){
//         // abc m,n;  // default constructor:
//         // abc x(2,5), y(5,6);  // parametirised constructor:
//         abc h(3,2);
//         abc j(h);
//         return 0;
// }

// ARRAY:
// #include<iostream>
// using namespace std;
// int main(){
//         int n;
        // int sum = 0;
        // cout<<"Enter the size of the array: ";
        // cin>>n;
        // int arr[n];
        // cout<<"Enter the elements of array: ";
        // for (int i = 0; i < n; i++)
        // {
        //         cin>>arr[i];
        // }
        //sum of array:
        // for (int i = 0; i < n; i++)
        // {
        //        sum = sum+arr[i];
        // }
        // cout<<"sum of the "<<n<<" size of array is "<<sum;

        // chacking pollindrom of array:
//        for (int i = 0; i < n; i++)
//        {
//         int p = arr[i],r,rev = 0;
//         do
//         {
//                 r = arr[i]%10;
//                 rev = (rev*10)+r;
//                 arr[i] = arr[i]/10;
//         } while (arr[i] != 0);
        
//         if (p == rev)
//         {
//                 cout<<p<< " is pollindrome \n";
//         }
//         else{
//                 cout<<p<<" is  not pollindrome \n";
//         }
        
//        }
//         return 0; 
// }

// Dynamic object allocation:
#include<iostream>
using namespace std;
class a{
        public:
        int x;
        float y;
};
int main(){
        a *c;
        a *d;
        // d = new a;
        c = new a;
        cout<<"Enter the values of x and y: ";
        cin>>c->x>>c->y;
        cout<<c->x<<c->y;
        delete c;
        return 0;
        
}