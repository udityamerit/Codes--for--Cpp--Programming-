// #include<iostream>
// using namespace std;
// int main(){
//         int x = 5;
//         int y = 0;
//         try{
//                 if( y != 0){
//                         cout<<x/y;
//                 }
//                 else
//                         throw y;
//         }
//         catch(int p){
//                 cout<<"y is not equal to "<<p;
//         }
//         return 0;

// }

// #include <iostream>
// using namespace std;
// int main()
// {
//         int x;
//         char ch;
//         cin >> x;
//         cin >> ch;
//         try
//         {
//                 if (x == 0)
//                         throw x;
//                 if (ch == 'a')
//                         throw ch;
//         }
//         catch (int p)
//         {
//                 cout << "do not enter x" << p;
//         }
//         catch (char q)
//         {
//                 cout << "do not enter ch" << q;
//         }
//         return 0;
// }

#include <iostream>
using namespace std;

void area(int x, int y)
{
        cout << "Area is : " << x * y;
}

int main()
{
        int a, b;
        cin >> a;
        cin >> b;
        try
        {
                if (a != 0 && b != 0)
                {
                        area(a, b);
                }
                else
                {
                        throw a;
                        throw b;
                }
        }
        // catch (int a)
        // {
        //         cout << "a invalid input\n";
        // }
        // catch (int b)
        // {
        //         cout << " b invalid input\n";
        // }
        catch (...)
        {
                cout << a << " " << b << " inputs are invalid";
        }
        return (0);
}