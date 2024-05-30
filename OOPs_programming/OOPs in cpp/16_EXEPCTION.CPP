#include <iostream>
using namespace std;
// int menu()
// {
//         cout << "1. Area of triangle" << endl;
//         cout << "2. Convert C to F" << endl;
//         cout << "3. Area of rectangle" << endl;
//         cout << "4. Area of circle" << endl;
//         int a;
//         cout << endl
//              << "ENTER YOUR CHOICE : ";
//         cin >> a;
//         return a;
// }

// void triangle()
// {
//         float base, height;
//         cout << "ENTER BASE , HEIGTH : ";
//         cin >> base >> height;
//         float area = 0.5 * (base * height);
//         cout << "AREA OF TRINAGE = " << area;
// }
// void temp()
// {
//         float c;
//         cout << "ENTER TEMP IN C : ";
//         cin >> c;
//         float f = ((9.0 / 5) * c) + 32.0;
//         cout << f;
// }
// void rectangle()
// {
//         float l, b;
//         cout << "ENTER LENGTH AND BREADTH : ";
//         cin >> l >> b;
//         cout << "AREA OF RECTANGLE = " << l * b;
// }
// void circle()
// {
//         float r;
//         cout << "ENTER RADIUS : ";
//         cin >> r;
//         cout << "AREA OF CIRCEL = " << 22.0 / 7 * r * r;
// }

// void do_menu(int a)
// {
//         if (a == 1)
//         {
//                 triangle();
//         }
//         if (a == 2)
//         {
//                 temp();
//         }
//         if (a == 3)
//         {
//                 rectangle();
//         }
//         if (a == 4)
//         {
//                 circle();
//         }
// }

// int main()
// {
//         int a = menu();
//         try
//         {
//                 if (a > 4 || a < 1)
//                 {
//                         throw a;
//                 }
//                 else
//                 {
//                         do_menu(a);
//                 }
//         }
//         catch (int a)
//         {
//                 cout << "THE CHOICE CAN'T be : " << a;
//         }

//         return 0;
// }
//syntax of try block
// try{
//         --------
//         --------
//         throw exception 1;
//         --------
//         --------
//         throw exception 2;
//         --------
//         --------
//         .
//         .
//         .
//         throw exception n;
//         --------
//         --------
// }
// catch(...){
//         --------
//         --------
// }
#include<iostream>
using namespace std;
int main(){
        int x ;
        char ch ;
        cin>>x;
        cin>>ch;
        try{
                if(x==0)
                        throw x;
                if(ch=='a')
                        throw ch;
        }
        catch(int p){
                cout<<"do not enter x"<<p;
        }
        catch(char q){
                cout<<"do not enter ch"<<q;
        }
        return 0;
}




// void area(int x, int y){
//         cout<<"Area is : "<<x*y;
// }
// // void area(float x, float y){
// //         cout<<"Area is : "<<x*y;
// // }
// int main(){
//         int a,b;
//         // float a,b;
//         cin>>a;
//         cin>>b;
//         try{
//                 if(a!=0 && b!=0){
//                         area(a,b);
//                 }
//                 else{
//                         // cout<<"a and b can't 0 ";
//                         throw a;
//                         throw b;
//                 }
//         }
//         catch(int a){
//                 cout<<"a invalid input\n";
//         }
//         catch(int b){
//                 cout<<" b invalid input\n";
        }
        // catch(...){
        //         cout<<a<<" "<<b<<" inputs are invalid";
        // }
        return(0);
}