#include<iostream>
using namespace std;
class Base{
        private:
          int y;
        public:
        int x;
        Base(){
                x = 5;
                y = 6;
                cout<<x<<y;
        }
};
class derived:public Base{
        public: 
        derived(){
                x = 7;
                y = 7;
                cout<<x<<y;
        }
};
int main(){
        derived d;
        return 0;
}

#include<iostream>
using namespace std;
class Base{
        private:
          int y;
        public:
        int x;
        Base(){
                x = 5;
                y = 6;
                cout<<x<<y;
        }
};
class derived:private Base{
        public: 
        derived(){
                x = 7;
                y = 7;
                cout<<x<<y;
        }
};
int main(){
        derived d;
        return 0;
}