#include<iostream>
using namespace std;
// #include<string>
// class vehicle{
//         public:
//         string vehicle_type;
// }
class abc{
        public:
        abc(){
                cout<<"default cons\n";
        }
        abc(string x){
                cout<<x;
        }
        ~abc(){ // this is a distructor which is delete the objects while it complitecd
                cout<<"destructor cons\n";
        }
        
};
int main(){
        abc a;
        abc b;
        abc c("parametirised cons\n");
        return 0;
}