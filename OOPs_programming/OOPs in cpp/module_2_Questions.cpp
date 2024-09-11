// #include<iostream>
// using namespace std;
// class A{
//         public:
//         int x;
//         A(){
//                 x = 5;
//         }
//         void operator ++(){
//                 x++;
//         }
// };
// int main(){
//         A ob1;
//         cout<<ob1.x;
//         ++ob1;
//         cout<<ob1.x;
//         ++ob1;
//         cout<<ob1.x;
//         return 0;
// }

// // Output: 567

// #include<iostream>
// using namespace std;
// class A{
//         public:
//         int x;
//         A(){
//                 x = 5;
//         }
//         A(int p){
//                 x = p;
//         }
//         int operator + (A ob2){
//                 int p;
//                 p = x + ob2.x;
//                 return (p);
//         }
// };

// int main(){
//         A ob1;
//         A ob2(6);
//         cout<<ob1+ob2;
//         return 0;
// }

// Output: 11

/*MODULE 2 QUESTIONS:*/

// #include<iostream>
// using namespace std;

// class employee_record{
//         public:
//         int employeeid;
//         int salary;
//         long int contact_No;
//         void input_data(){
//                 cout<<"Enter your Employeeid:";
//                 cin>>employeeid;
//                 cout<<"Enter your salary:";
//                 cin>>salary;
//                 cout<<"Enter your contact_No:";
//                 cin>>contact_No;
//         }

//         void display_data(){
//                 cout<<"Your Employeeid: "<<employeeid<<endl;
//                 cout<<"Your salary: "<<salary<<endl;
//                 cout<<"Your contact_No: " <<contact_No<<endl;
//         }
// } Amit,Ashok,anuj;

// int main(){
//         Amit.input_data();
//         Ashok.input_data();
//         anuj.input_data();
//         Amit.display_data();
//         Ashok.display_data();
//         anuj.display_data();
//         return 0;
// }

// #include<iostream>
// using namespace std;

// class employee_record
// {
//         public:
//         int employeeid;
//         int salary;
//         long int contact_No;
//         void input_data();
//         void display_data();

// };

// void employee_record::input_data()
// {
//                 cout<<"Enter your Employeeid:";
//                 cin>>employeeid;
//                 cout<<"Enter your salary:";
//                 cin>>salary;
//                 cout<<"Enter your contact_No:";
//                 cin>>contact_No;
// }

// void employee_record::display_data()
// {
//                 cout<<"Your Employeeid: "<<employeeid<<endl;

//                 cout<<"Your salary: "<<salary<<endl;

//                 cout<<"Your contact_No: " <<contact_No<<endl;

//         }

// int main()
// {
//         employee_record Amit,Ashok,anuj;
//         Amit.input_data();
//         Ashok.input_data();
//         anuj.input_data();
//         Amit.display_data();
//         Ashok.display_data();
//         anuj.display_data();
//         return 0;
// }

// #include<iostream>
// using namespace std;

// class abc{
//         public:
//         abc(){
//            cout<<"Default constructor\n";
//         }
// };

// int main(){
//         abc a,b,c,d;
//         return 0;
// }

// #include<iostream>
// using namespace std;

// int main(){
//     int x[15];
//     cout<<"Enter the elements of the array: \n ";
//     for (int i = 0; i <=14; i++)
//     {
//         cin>>x[i];
//     }
//     int sum=0;
//     for (int i = 0; i <=14; i++)
//     {
//         sum=sum+x[i];
//     }
//     cout<<"\n Sum of 15 numbers ="<<sum;
//     return (0);
// }

// #include<iostream>
// using namespace std;

// void polly(int i){
//      int n, num, digit, rev = 0;
//      n = i;
//      do
//      {
//          digit = i % 10;
//          rev = (rev * 10) + digit;
//          i = i / 10;
//      } while (i != 0);
//      if (n == rev)
//          cout << " The number is a palindrome."<<n<<endl;
// }
// int main(){
//     int arr[5];
//     cout<<"Enter the element of the array: ";
//     for (int i = 0; i <=4; i++)
//     {
//         cin>>arr[i];
//     }

//     for (int i = 0; i <=4; i++)
//     {
//         polly(arr[i]);
//     }

//     return 0;
// }

// #include<iostream>
// using namespace std;
// class vehicle{
//     public:
//     string vehicle_type,color,brand_name;
//     float price;
//     void input(){
//         cout<<"Enter data \n";
//         cin>>vehicle_type>>color>>brand_name>>price;
//     }
//     void display(){
//         cout<<vehicle_type<<color<<brand_name<<price;
//     }
// };
// int main(){
//     vehicle *ob1, *ob2;
//     ob1=new vehicle;
//     ob2=new vehicle;
//     ob1->input();
//     ob2->input();
//     ob1->display();
//     ob2->display();
//     delete ob1;
//     delete ob2;
//     return (0);
// }

// #include<iostream>
// using namespace std;
// class First
// {
//   private:
//   int x,y;
//   public:
//    First ()
//    {x=5;
//     y = 6;
//    }
//    friend class second;
// };
// class Second
// {
//   public:
//   void display (First & f)
//   {
//    cout << f.x <<f.y;
//    }
// };
// int main()
// {
//  First f1;
//  Second S1;
//  S1.display(f1);
//  return (0);
// }

// #include<iostream>
// using namespace std;
// class first
// {private:
//  int x ,y;
//  public:
//  first ()
//    {x=5;
//     y=6;}
//  friend void second :: Display (first &);
// };

// class second
// {public:
//  int p;
//   void Display (first & f)
//   {
//   cout << f.x <<f.y;
//   }
//   void Show()
//   {p=6;
//   cout<<p;
//   }
// };
// int main()
// {
//   first f1;
//   second S1;
//   S1.Display(f1);
//   S1.Show() ;
//   return (0);
// }

// #include<iostream>
// using namespace std;

// inline void evenum(int i)
// {
//         if (i % 2 == 0)
//         {
//                 cout<<" is a even number"<< endl;
//         }
//         else
//         {
//                 cout<< i << "is odd number";
//         }
// }
// int main()
// {
//         int x;
//         cout<<" enter a number ";
//         cin>>x;
//         evenum(x);
//         return 0;
// }

// #include<iostream>
// using namespace std;

// class first 
//   { private:
//     int x, y;
//     public:
//       first()
//       {x = 5;
//        y = 6;}
//    friend void display (first &);
//  };
// void display (first & f1)
// {
//  cout << f1.x <<f1.y ;
// }
// int main()
// { first f1; 
//      display (f1); 
//      return (0);
// }

// #include <iostream>
// #include <string>
// using namespace std;
 
// class publisher{
//     public:
//     string name;
// };
// class branch:public publisher{
//     public:
//     string branch_name;
// };
 
// class subject:public branch{
//     public:
//     string sub_name;
// };
 
// class book: public subject{
//     public:
//     string book_name;
 
//     void input_data(){
//         cout<<"Please Enter the input data:\n";
//         cin>>name>>branch_name>>sub_name>>book_name;
//     }
//     void display_data(){
//         cout<<"Your output data is printed here:\n";
//         cout<<name<<endl<<branch_name<<endl<<sub_name<<endl<<book_name<<endl;
//     }
// };
 
// int main(){
//     book b[2];
//     for (int i=0; i<2; i++){
//         b[i].input_data();
//         cout<<"\n";
//     }
 
    
//     for (int i=0; i<2; i++){
//         b[i].display_data();
//         cout<<"\n";

//     }
//     return 0;
// }

// #include<iostream>
// using namespace std;

// class A{
//         public:
//         void greet1(){
//                 cout<<"Good Morning sir\n";
//         }
// };
// class B:public A{
//         public:
//         void greet2(){
//                 cout<<"Good Afternoon sir\n";
//         }
// };
// class C:public B{
//         public:
//         void greet3(){
//                 cout<<"Good Evening sir\n";
//         }
// };
// class D:public B{
//         public:
//         void greet4(){
//                 cout<<"Good Night sir\n";
//         }
// };
// int main(){
//         C c;
//         D d;
//         cout<<"Child C inherits the properties:\n ";
//         c.greet1();
//         c.greet2();
//         c.greet3();
//         cout<<"Child D inherits the properties:\n ";
//         d.greet1();
//         d.greet2();
//         d.greet4();
//         return 0;
// }

// #include<iostream>
// using namespace std;

// class A{
//         public:
//         void s(){
//                 cout<<"in A";
//         }
// };

// class B{
//         public:
//         void s(){
//                 cout<<"in B";
//         }
// };

// class C:public A, public B{
        
// };

// int main(){
//         C ob;
//         ob.s();
//         return 0;
// }


// code for the massage passing into the function:
#include<iostream>
#include<string>
using namespace std;
class pass_msg{
        public:
        void pass_fuc(string st){
                cout<<"your massage passing is: "<<st;
        }
};
int main(){
        pass_msg os;
        string pt;
        cout<<"Enter the massage: ";
        cin>>pt;
        os.pass_fuc(pt);
        return 0;
}