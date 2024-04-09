#include<iostream>
using namespace std;
template < class T>
class interchange{
        public:
        T a;
        T b;
        T temp;
        void swap(T a, T b){
                temp = a;
                a = b;
                b = temp;
                cout<<"value after swapping: a = "<<a<<", b = "<<b<<endl;
        }
};
int main(){
        // int i,j;
        // float i1,j1;
        // char i2,j2;
        // cout<<"enter the two value of two integer: ";
        // cin>>i>>j;
        interchange <int>x;
        x.swap(2,3);
        // cout<<"enter the two value of two integer: ";
        // cin>>i>>j;
        interchange <float>y;
        y.swap(2.3, 4.5);
        // cout<<"enter the two value of two integer: ";
        // cin>>i>>j;
        interchange <char>z;
        z.swap('a','e');
        return 0;
}

