#include<iostream>
#include<algorithm>
using namespace std;

template <class T>
class pagal{
        public:
        T a,b;
        void sum (T x, T y){
                cout<<x+y;
        }
};
int main(){
        pagal<int> pg;
        pg.sum(2,3);
        return 0;

}

#include <iostream>
using namespace std;

template <typename T>
class name
{
public:
        T largestnum(T x, T y, T z)
        {
                if (x > y && x > z)
                {
                        cout << x << " is the largest one \n";
                        //     return x;
                }
                else if (y > x && y > z)
                {
                        cout << y << " is the largest one \n";
                        //     return y;
                }
                else
                {
                        cout << z << " is the largest one \n";
                        //     return z;
                }
        }

};

int main()
{
        name<int> ob;
        ob.largestnum(2,3,4);
        name<float> og;
        og.largestnum(2.4,4.5,3.5);
        return 0;
}


// code 0
#include <iostream>
using namespace std;

template <typename T>
T largestnum(T x, T y, T z)
{
    if (x > y && x > z)
    {cout << x << " is the largest one \n";
    return x;
    }
    else if (y > x && y > z)
    {cout << y << " is the largest one \n";
    return y;
    }
    else
    {cout << z << " is the largest one \n";
    return z;
    }
}

int main()
{
    cout << largestnum<int>(5, 6, 7)<<endl;
    cout << largestnum<float>(2.4, 5.6, 2.1)<<endl;
    return 0;
}

#include<iostream>
using namespace std;
template< class T>
class base{
        public:
        T a,b;
        void sum(T x, T y){
                // cin>>a>>b;
                cout<<x+y;
        }
        // friend derived;
};

template<class T>
class derived: public base <T>{
        public:
        void sum1(T x, T y){
                // cout<<a+b;
                cout<<x+y;
        }
};
int main(){

        derived <int> ob;
        ob.sum(2,3);
        ob.sum1(2,3);
           return 0;
}


// code 1
#include <iostream>
#include <stack>
using namespace std;
int main()
{
        stack<int> s;
        int j=1;
        for(int i = 1; i<=5;i++){
                s.push(i);
                s.push(j++);
        }
        s.push(++i);
        s.push(++j);
        s.push(i * j);                                                          
        while (!s.empty())
        {
                cout << s.top() << " ";
                s.pop();
        }
        return (5);
}

void dum(int &a, int c)
{
        cout << ++a <<" "<< ++c << endl;
        ++c;
        ++a;
}
void mmm(int b, int &c)
{
        cout << --b <<" "<< c << endl;
        --c;
}
int main()
{
        int i, j = 4, k = 6;
        for (i = 0; i <= 4; i++)
        {
                dum(j, k);
                cout << i <<" "<< ++j <<" "<< ++k << endl;
        }
        for (int c = 0; c <= 4; c++)
        {
                mmm(j, k);
                cout << --i <<" "<< --j <<" "<< k << endl;
        }
        cout << ++i <<" "<< ++j <<" "<< ++k << endl;
        return (2);
}

int main()
{
        int i, j = 4, k = 6;
        for (i = 0; i <= 4; i++)
        {
                ++j;
                ++k;
                cout << i <<" "<< ++j <<" "<< ++k << endl;
        }
        for (int c = 0; c <= 4; c++)
        {
                cout <<" "<< ++j <<" "<< k << endl;
        }
        cout << ++i <<" "<< ++j <<" "<< ++k << ++c << endl;
        return (2);
}
#include<iostream>
using namespace std;
int main()
{
        int i, j = 4, k = 6;
        for (i = 0; i <= 4; i++)
        {
                ++j;
                ++k;
                cout << i <<" "<< ++j <<" "<< ++k << endl;
        }
        cout << ++i * ++k <<" "<< ++j << endl;
        return (2);
}


// another code 2
// file operator overloading
#include<iostream>
#include<fstream>
using namespace std;
class test{
        int x;
        public:
        
        friend ostream& operator << (ostream& output, test& ob1);
        friend istream& operator >> (istream& input, test& ob1); 
};
istream& operator >> (istream& input, test& ob1){
        input>> ob1.x;
        return input;
}
ostream& operator << (ostream& output, test& ob1){
        output<< ob1.x;
        return output;
}
int main(){
        test t;
        cin>>t;
        cout<<t;
        return 0;
}

// code 3
#include<iostream>
// #include<fstream>
using namespace std;
class test{
        int real;
        int img;
        public:
        test(int r = 0, int i=0){
                real = r;
                img = i;
        }
        friend ostream& operator << (ostream& out , test& ob);
        friend istream& operator >> (istream& in, test& ob);
};

istream& operator >>(istream& in , test& ob){
        cout<<"Enter the real value: ";
        in>>ob.real;
        cout<<"Enter the imag part: ";
        in>>ob.img;
        return in;
}

ostream& operator << (ostream& out, test ob){
        out<<ob.real;
        out<<ob.img<<endl;
        return out;
}

int main(){
        test t;
        cin>>t;
        cout<<t;
        return 0;
}


//code 4

#include<iostream>
#include<string>
#include<fstream>
using namespace std;
class st{
        public:
        string name;
        int age;
        void set(){
                cout<<"Enter the name and age: ";
                cin>>name>>age;
        }
        void get(){
                cout<<"name is: "<<name<<" and age is "<<age;

        }
};
int main(){
        st s;
        ofstream file;
        file.open("aa.txt",ios:: out);
        if(!file){
                cout<<"error";
                return 0;
        }
        cout<<"file is open sucessful;";
        s.set();
        file.write((char*)&s, sizeof(s));
        file.close();
        cout<<"writing sucessfull";

        ifstream file1;
        file1.open("aa.txt", ios::in);
        if(!file1){
                cout<<"error";
                return 0;
        }
        cout<<"open";
        file1.read((char*)&s, sizeof(s));
        cout<<"read sucessfull";
        file1.close();
        s.get();
        return 0;
}

// file reading and writing in c++
// code 5

#include<iostream>
#include<fstream>
#include<string>
using namespace std;
class st{
        public:
        string name;
        int age;
        void set(){
                cin>>name>>age;
        }
        void get(){
                cout<<name<<age;
        }
};
int main(){
        st s;
        ofstream file;
        file.open("aa.txt",ios::out);
        if(!file){
                cout<<"error";
        }
        else{
                cout<<"file open";
        }
        s.set();
        file.write((char*)&s, sizeof(s));
        cout<<"file write";
        file.close();

        ifstream file1;
        file1.open("aa.txt",ios:: in);
        if(!file){
                cout<<"error";
        }
        else{
                cout<<"open";
        }
        file1.read((char*)&s,sizeof(s));
        cout<<"reading file";
        file1.close();
        s.get();
        return 0;
}

// Oprerator Overloading << and >>
// code 6

#include<iostream>
#include<fstream>
using namespace std;
class test{
        int x;
        public:
        friend ostream& operator <<(ostream& out, test &ob);
        friend istream& operator >>(istream& in, test &ob);
};

istream& operator >> (istream& in, test &ob){
        in>>ob.x;
        return in;
}
ostream& operator <<(ostream& out, test &ob){
        out<<ob.x;
        return out;
}
int main(){
        test t;
        cin>>t;
        cout<<t;
        return 0;
}
