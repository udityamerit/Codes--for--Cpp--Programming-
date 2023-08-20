// // 1.
// #include<iostream>
// using namespace std;

// int main(){
//         int num1,num2;
//         cout<<"Enter the num1: ";
//         cin>>num1;
//         cout<< "Enter the num2: ";
//         cin>>num2;
//         cout<<"sum of the num1 and num2: "<<num1+num2;
//         return 0;
// }

// // 2.
// // Operator in C++:
// #include<iostream>
// using namespace std;

// int main(){
//         int a=23,b=12;
//         cout<<"The value of of a+b is: "<<a+b<<endl;
//         cout<<"The value of of a-b is: "<<a-b<<endl;
//         cout<<"The value of of a*b is: "<<a*b<<endl;
//         cout<<"The value of of a/b is: "<<a/b<<endl;
//         cout<<"The value of of a%b is: "<<a%b<<endl;
// }

// // 3.
// // Use of  reference Variable
// #include<iostream>
// using namespace std;
// int main(){
//         // making a variable :
//         int a,b,c;
//         cout<<"Enter the value of a :";
//         cin>> a;
//         cout<<"Enter the value of b :";
//         cin>> b;
//         c = a+b;
//         cout<<"Value of c is:"<<c;
// }

//4.
// printing an array using for loop in c++
// #include<iostream>
// using namespace std;
// int main(){
//         int arr[5] = {23,45,321,234,54};
//         cout<<"Printing  the element of an array:"<<endl;
//         for (int i = 0; i < 5; i++)
//         {
//                 cout<<"arr"<<i<<"= "<<arr[i]<<endl;
//         }
//         return 0 ;
// }
// //5.
// // Printing of an array using 
// //while loop
// #include<iostream>
// using namespace std;
// int main(){
//         int arr[5] = {12,34,56,78,123};
//         cout<<"Element of an array while loop:"<<endl;
//         int i = 0;
//         while (i<5)
//         {
//                 cout<<"arr"<<i<<"= "<<arr[i]<<endl;
//                 i= i+1;
//         }
//         return 0 ;
// }

// //6.
// // do-while loop 
// //use to print arrays elements;
// #include<iostream>
// using namespace std;
// int main(){
//         int arr[5] = {12,34,67,54,32};
//         cout<<"do-while loop:"<<endl;
//         int i = 0;
//         do
//         {
//                cout<<"arr"<<i<<"= "<<arr[i]<<endl;
//                i = i+1;
//         } while (i<5);
//         return 0 ;
// }
// Stucture in c++
// #include<iostream>
// using namespace std;

// struct worker
// {
//         int id;
//         float salary;
//         char favchar;
// };
// int main(){
//         struct worker Ram;
//         Ram.id = 12;
//         Ram.salary = 239090;
//         Ram.favchar = 'u';
//         cout<<"Your id is: "<<Ram.id<<endl;
//         cout<<"Your salary is: "<<Ram.salary<<endl;
//         cout<<"Your favchar is: "<<Ram.favchar<<endl;
//         return 0;
// }
// Defining the function in c++
#include<iostream>
using namespace std;

// function defination 
int sum(int a , int b){
        int c = a + b;
        return c;
}

int main(){
        int num1,num2;
        cout<<"Enter the num1:";
        cin>>num1;
        cout<<"Enter the num2:";
        cin>>num2;
        cout<<"Sum of numbers is: "<<sum(num1,num2);
        return 0;
}