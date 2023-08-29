# include<iostream>
using namespace std;

class Complex{
        int a;
        int b;
        public:
        void setNumber(int n1,int n2){
                a = n1;
                b = n2;
        }
        friend Complex sumcomplex(Complex o1, Complex o2);
        void printNumber(){
                cout<<"Your number is "<<a<<" + "<<b<<"i "<<endl;

        }
};

Complex sumcomplex(Complex o1,Complex o2){
        Complex o3;
        o3.setNumber((o1.a + o2.a),(o1.b + o2.b));
        return o3;
}

int main(){
        Complex c1,c2,c3,sum;
        c1.setNumber(1,3);
        c1.printNumber();

        c2.setNumber(3,5);
        c2.printNumber();

        sum = sumcomplex(c1,c2);
        sum.printNumber();
        return 0 ;
        /* Properties of friend functions
        1. not in the scope of class
        2. sicnce it is not in the scope of the class, it cannot be called from the object of that calss. c1.comComplex() == Invalid
        3. Can be invoked with out the help of any object
        4. Usually caontans the objects as arguments
        5. Can be declared inside the public or private section of the class
        6. It callnot access the menbers directly by their names and need object_name.member_name to access any member.
        
        */
         
}