#include<iostream>
using namespace std;

float moneyReceived(int currentMoney, float factor = 1.04){
        return currentMoney*factor;
}
int main(){
        int money = 1000;
        cout<<"If you have "<<money<<" in bank,You receive "<<moneyReceived(money)<<" in one year:"<<endl;//Here we have give one aurgument in function at time of calling function and factor is the default value is taken:

        //if we give the both aurgument in the function then compilar is taken that arugument in the function and calulation is based on that argument:
        cout<<"For Vip: If you have "<<money<<" in bank,You receive "<<moneyReceived(money,10)<<" in one year:"<<endl;
        return 0;

}