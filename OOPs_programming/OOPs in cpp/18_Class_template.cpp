#include <iostream>
using namespace std;
// syntax of the class creation

// template <class T>
// class ABC
// {
// public:
//         T var1, T var2, ...;
//         -- -- -- -
//         // code;
//         -- -- -- --
// };

template<class T>
class numbers{
        public:
        T x;
        numbers(T P){
                x = P;
        }
        void display(){
                cout<<"\n"<<x;
        }
};
int main(){
        numbers<int>b1(5);
        numbers<float>b2(6.5);
        numbers<char>b3('a');
        b1.display();
        b2.display();
        b3.display();
        return 0;
}