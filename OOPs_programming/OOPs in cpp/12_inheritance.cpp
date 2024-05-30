#include<iostream>
#include<string>
using namespace std;
class Animal{
        public:
        string food_type;
        string Habitant;
};
class Dog: public Animal{
        public:
        string bread;
        void input(){
                cin>>food_type>>Habitant>>bread;
        }
        void display(){
                cout<<food_type<<Habitant<<bread<<endl;
        }
};

int main(){
        Dog d[10];
        for (int i = 0; i<10; i++)
        {
                d[i].input();
        }        
        for (int i = 0; i<10; i++)
        {
                d[i].display();
        }
        return 0;        
}