#include <iostream>
#include <string>
using namespace std;

// pointers

int main(){

        int x = 90;
        int *ptr;
        ptr = &x;
        cout<<x<<"\n";
        cout <<ptr<<endl;
        cout<<*ptr<<endl;
        // cout<<++ptr<<endl;
        cout<<++(*ptr)<<endl;
        cout<<ptr;
        return 0;

}

// function
void parth(int p){
        cout<<p<<endl;
        cout<<"my name is parth";
}

int main(){
        parth(4);
        parth(4);
        return 0;

}

void odd_sum(){
        int x = 1;
        int y = 100;
        int sum =0;
        for(int i = x;i<=y;i = i+2){
                sum = sum+i;
        }
        cout<<sum;

}
void even_sum(){
        int x = 0;
        int y = 100;
        int sum =0;
        for(int i = x;i<=y;i = i+2){
                sum = sum+i;
        }
        cout<<sum;
}

int main(){
        cout<<"sum of even numbers b/w 1 to 100 is: "<<endl;
        even_sum();
        cout<<"sum of odd numbers b/w 1 to 100 is: "<<endl;
        odd_sum();
        return 0;
}

// function using parameters: call by value

int sum(int a,int b){
        int sum = 0;
        for (int i = a; i <=b; i++)
        {
                sum = sum+i;
        }
        cout<<sum;
        return 0;

}

int main(){
        // int i,j;
        // cin>>i>>j;
        sum(1,100);
        return 0;
}

// call by value:

void swap(int a, int b){
        cout<<a<<" "<<b<<endl;
        int t;
        t = a;
        a = b;
        b = t;
        cout<<"value after swapping :";
        cout<<a<<" "<<b<<endl;

}

int main(){
        // int u,v;
        // cin>>u>>v;
        int u = 10;
        int v = 12;
        swap(u,v);
        cout<<"after swapping the value of u and v"<<u<<" "<<v;
        return 0 ;
}

// swaping of two numbers using call by value:
int ABC(int x)
{
        ++x;
        cout<<x<<" ";
        return 0;
}
int main()
{
        int x = 5;
        cout<<x<<" ";
        ABC(x);
        ++x;
        cout<<x<<" ";
        ABC(x);
        cout<<x<<" ";
        return 0;
}

// swapping of two numbers using call by address:

void swap(int *i,int *j){
        cout<<"value of i and j "<<i<<" "<<j<<endl;
        cout<<"value of i and j in swapping function: ";
        cout<<*i<<" "<<*j<<endl;
        // int a = *i;
        int temp;
        temp = *i;
        *i = *j;
        *j = temp;
        cout<<"value of a and b using swapping function: "<<*i<<" "<<*j<<endl;

}

int main(){
        int a,b;
        cin>> a;
        cin>>b;
        swap(&a,&b);
        cout<<"value of  a and b after using swapping function: "<<a<<" "<<b<<endl;
        return 0;

}

// check prime number or not using pointer:
void prime(int *p){
        int counter= 1;
        for (int i = 2; i < *p; i++)
        {
                if(*p%i == 0){
                        counter +=1;
                }
        }
        if (counter>1){
                cout<<"number is not a prime number";
        }
        else{
                cout<<"number is prime number";
        }

}

int main(){
        int a ;
        cin>>a;
        prime(&a);
        return 0;
}

int main()
{
        int a, b;
        cout << "Enter a=";
        cin >> a;
        cout << "Enter b=";
        cin >> b;
        if (a < b)
        {
                cout << "Numbers in descending order" << endl;
                for (int i = b; i >= a; i--)
                {
                        cout << i << endl;
                }
        }
        else if (a == b)
        {
                cout << "Neither increment nor decrement";
        }
        else
        {
                cout << "Numbers in ascending order" << endl;
                for (int i = b; i <= a; i++)
                {
                        cout << i << endl;
                }
        }
        return (0);
}

// swapping of two numbers using call by reference:
int swap(int &a, int &b){
        int temp;
        temp = a;
        a = b;
        b = temp;
        cout<<a<<" "<<b;
        return 0;
}
int main(){
        int x, y;
        cin>>x>>y;
        swap(x,y);
        cout<<x<<" "<<y;
        return 0;
}

int x= 8;
int main(){
        // int x = 10;
        cout<<x;
        return 0;
}

void abc(int x)
{
        int y = x++;
}
int x = 5;
int main()
{
        int y;
        cout << x;
        ++x;
        abc(x);
        cout << y;
}

int abc(int a , int b, int c = 0)
{
        cout<<(a+b+c);
        return (a + b + c);
}

int main()
{
        int x = 5;
        int y = 7;
        int z = 6;
        // cout <<
        abc(x, y, z);
        cout << x;
        return 7;
}

// module 2;

class class name{
        access specifier:
        data members;
        member function ;

} object name;// object creation;

int main(){
        class name objenct name;
}

class Student{
        public:
        int roll_no;
        char grade;
        void input_data(){

                cin>>roll_no>>grade;
                cout<<"\n";
        };
        void show_data(){

                cout<<roll_no<<grade;
                cout<<"\n";
        };

};
int main(){
        Student A ,B, C;
        cout<<"Please input the required data: "<<endl;
        A.input_data();
        B.input_data();
        C.input_data();
        cout<<"display the data:"<<endl;
        A.show_data();
        B.show_data();
        C.show_data();
        return 0;

}

class Student{
        public:
        int roll_no;
        char grade;
        void input_data();
        void show_data();

};
void Student:: input_data(){
        cin>>roll_no>>grade;
        cout<<"\n";
}

void Student:: show_data(){
        cout<<roll_no<<grade;
        cout<<"\n";
}

int main(){
        Student A ,B, C;
        cout<<"Please input the required data: "<<endl;
        A.input_data();
        B.input_data();
        C.input_data();
        cout<<"display the data:"<<endl;
        A.show_data();
        B.show_data();
        C.show_data();
        return 0;

}

// default constructor
class abc{
        public:
        abc(){
                cout<<"using me \n";
        }
};
int main(){
        abc a,b,v,c;
        abc();
        return 0;
}

// parameterised constructor;
class abc{
        public:
        abc(int a,int b){
                cout<<a<<" "<<b<<endl;
                cout<<"using me \n";
        }
};

int main(){
        abc b(2,3);
        return 0;
}

// copy constructor;
class abc{
public:
        int x = 9;
        int y  = 10;
        abc(){
                cout<<"using me \n";
        }
        abc(int a){
                cout<<a;
                // cout<<"using me \n";
        }
        abc(abc &v){
                x = v.x;
                y = v.y;
                cout<<x<<" "<<y;
        }
};
int main(){
        // abc a;
        abc b(3);
        abc c(b);
        return 0;
}

// arrays
int x; // this the variable decleration
int x[10]; //  this is the array  decleration
int main(){

        int x[] = {1,3,4,5,6,7};
        cout<<x[3] ; // accessing the element of the array
        return 0;
}

write a cpp program to sum all the array of elements:
int main(){
        int n ;
        cout<<"Enter the size of the array which you want to create: ";
        cin>>n;
        int array[n];
        int sum = 0;
        cout<<"input:\n";
        for (int i = 0; i < n; i++)
        {
                cin>>array[i];
        }
        cout<<"output:\n";
        for (int i = 0; i < n; i++)
        {
                cout<<array[i]<<endl;
                sum = sum+array[i];

        }
        cout<<"sum of the array: "<<sum;
        return 0;
}

// // check the element of the array is polindrom or not:
void polindrom(int a){
        int r,rev = 0,p;
        p = a;
        do
        {
                r = a % 10;
                rev = (rev*10)+r;
                a = a/10;
        } while (a !=0 );

        if(p == rev ){
                cout<<p<<" is polindrom:\n ";
        }
        else{
                cout<<p<<" is not polindrom:\n";
        }
}
int main(){
        int n ;
        cout<<"enter the size of the array: ";
        cin>>n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
                cin>>arr[i];
        }
        for (int i = 0; i < n; i++)
        {
                polindrom(arr[i]);
        }

        return 0;
}

// dynamic mammory allocation;
class vehicle{
        public:
        string type,color,brand;
        float price;
        void input();
        void show_data();
};

void vehicle::input(){
        cin>>type>>color>>brand>>price;
}

void vehicle::show_data(){
        cout<<type<<color<<brand<<price;
}

int main(){
        vehicle *v ,*v1;
        v = new vehicle;
        v1 = new vehicle;
        v->input();
        v->show_data();
        v1->input();
        v1->show_data();
        delete v;
        delete v1;
        return 0;
}

// Destructor;
// ~  it is tilde  operator to make the destructor
class ABC
{
public:
        ABC(){
            cout << "Default constructor \n";
        }
        ABC(string x)
        {
                cout << x;
        }

        ~ABC()
        {
                cout << "Destructor Invoke\n";
        }
};
int main()
{
        ABC a;
        ABC b;
        ABC c (" parameterized constructor \n ");
        return (0);
}

// module 3 polymorphism

void area(int a,int b){
        cout<<"area of the rectangle is: "<<a*b<<endl;
}
void area(int a){
        cout<<"area of the circle is: "<<3.14*(a*a)<<endl;
}
int main(){
        int radius;
        int length;
        int width;
        cout<<"enter the values: ";
        cin>>radius;
        cin>>length;
        cin>>width;
        area(radius);
        area(length,width);
        return 0;

}

// operator overloading of unary operator

class a{
        public:
        int x =5;
        void operator ++ (){
                x++;
        }

};

int main(){
        a a1,a2;
        cout<<a1.x;
        ++a1;
        cout<<a1.x;
        // cout<<3+3;
        return 0;
}

// inheritanc single level:

class animal{
        void fly(){
                cout<<"i am flying";
        }
        public:
        void eat(){
                cout<<"i am eating";
        }
        void run(){
                cout<<"i am runing";
        }

};

class dog:public animal{
        public:
        void bark(){
                cout<<"dog can bark";
        }

};
class dog:private animal{
        public:
        void bark(){
                cout<<"dog can bark";
        }

};
int main(){
        dog d;
        d.eat();
        d.run();
        d.fly();
        d.bark();
        return 0;

}

// inheritance multilevel

class a{
        public:
        void ina(){
                cout<<" in class a;";

        }
};
class b: public a{
        public:
        void inb(){
                cout<<" in class b;";

        }
};
class c:public b{
        public:
        void inc(){
                cout<<" in class c;";

        }
};
class d:public c{
        public:
        void ind(){
                cout<<" in class d;";

        }
};
int main(){
        d d1;
        d1.ina();
        b b1;
        b1.inb();
        return 0;
}

// inheritance multiple

class a{ // parant class 1
        public:
        void ina(){
                cout<<" in class a;";

        }
};
class b{// parant class 2
        public:
        void inb(){
                cout<<" in class b;";

        }
};
class c:public a, public b{
        public:
        void inc(){
                cout<<" in class c;";

        }
};
class d:public c{
        public:
        void ind(){
                cout<<" in class d;";

        }
};
int main(){
        d d1;
        d1.ina();
        b b1;
        b1.inb();
        return 0;
}

int main(){
        int x,r,sum = 0;
        cout<<"enter the value of number:";
        cin>>x;
        do
        {
            r = x%10;
            if ( r % 2 ==0 ){
                sum = sum+r;
            }
            x = x/10;
        } while (x!=0);
        cout<<"sum of the even number is the digit is: "<<sum;
        return 0;

}

int main(){
        int j = 0, len = 0,c=0;
        char str[50]  ;
        char str1[50]  ;
        cout<<"enter the string to check the string is pollindrom or not: ";
        cin>>str;
        for (int i =0; str[i] !='\0'; i++){
                len++;
        }

        for (int i = len-1; i<=0; i--){
                str1[j]= str[i];
                j++;
        }

        for (int i = 0; i<len; i++){
                if (str[i]==str1[i])
                {
                        c++;
                }

        }
        if(c==len){
                cout<<"string is polindrom: ";
        }
        else{
                cout<<"string is not a polindrom: ";
        }
        return 0;
}

void swap(int *p, int*q){
        int temp;
        temp = *p;
        *p = *q;
        *q = temp;
        cout<<"value after swappint: "<<*p<<" "<<*q;
}
int main(){
        int x,y;
        cin>>x>>y;
        swap(&x,&y);
        return 0;
}

void swap(int &x,int &y){
        int temp;
        temp = x;
        x = y;
        y = temp;
        cout<<"value after swaping"<<x<<" "<<y;

}
int main(){
        int a= 9,b = 8;
        swap(a,b);
        return 0;
}

void prime(int *p){
        int c=0;
        for (int i = 2; i < *p; i++)
        {
                if (*p%i==0)
                {
                        c++;
                }

        }
        if (c>1){
                cout<<"number is not prime:";
        }
        else{
                cout<<"nu,ber is prime: ";
        }

}
int main(){
        int x;
        cin>>x;
        prime(&x);
        return 0;
}

void prime(int n){
        int c = 0;
        for(int i  = 2; i<n; i++){
                if (n%i==0){
                        c++;
                }
        }
        if(c==0){
                cout<<n<<" is a prime number\n";
        }
}

int main(){
        for (int i = 101;i<151;i++){
                prime(i);
        }
        return 0;
}

