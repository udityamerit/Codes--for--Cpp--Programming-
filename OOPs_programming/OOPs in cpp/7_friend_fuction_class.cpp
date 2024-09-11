#include<iostream>
using namespace std;

class Sum{
        private:
        int x, y;
        public:
        void numset(int a, int b){
                x = a;
                y = b;
        }
        void printnum(){
                cout<<"number is "<<x<<" and "<<y<<endl;
        }
        friend Sum addition(Sum s1, Sum s2);

};

class add{
        int addition(Sum s1, Sum s2){
                return s1.x+s2.y;
        }
};

int main(){
        
}