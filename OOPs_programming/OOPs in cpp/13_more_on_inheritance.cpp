// #include <iostream>
// #include<string>
// using namespace std;

// class animal{
//     public:
//     string Food_type, habitat;

// };

// class Dog:public animal{
//     public:
//     string breed;
//     void input_data(){
//         cin>>Food_type>>habitat>>breed;
//     }
//     void display_data(){
//         cout<<Food_type<<habitat<<breed<<endl;
//     }
// };

// int main(){
    
//     Dog d[2];
//     cout<<"input the data: ";
//     for ( int i=0; i<2;i++){
//         d[i].input_data();
//     }
//     cout<<"display the data: ";
//     for (int i=0; i<2;i++){
//         d[i].display_data();
//     }
//     return 0;

// }

#include <iostream>
using namespace std;

class A{
    public:
    void dis1(){
        cout<<"this is the top parent\n";
    }
};

class B:public A{
    public:
    void dis2(){
        cout<<"this is the intermidiate parent\n ";
    }
};

class C:public B{
    public:
    void disp3(){
        cout<<"this is the second intermidiate parent\n ";
    }
};

class D:public C{
    public:
    void dis4(){
        cout<<"this is the child\n ";
    }
};

int main(){
    D d;
    d.dis1();
    d.dis2();
    d.disp3();
    d.dis4();
    return 0;
}