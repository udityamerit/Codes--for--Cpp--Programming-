#include <iostream>
#include <string>
using namespace std;
class Bank
{
        public:
        string name_holder;
        long long account_number;
        long balance = 0;
        long withdraw = 0;
        int amount;
        void saving_account();
        void current_account();
        void deposite(){
                cout<<"Enter the amount to deposite: ";
                cin>>amount;
                cout<<"Your amount is deposited:"<<endl;
        };

        void display(){
                cout<<"Your balance amount in bank is: "<<balance + amount - withdraw<<endl;
        };
};

void Bank :: saving_account(){
        long int_rate;
        int h;
        cout<<"Enter saving account holder name: ";
        cin>>name_holder;
        cout<<"Enter the saving account number: ";
        cin>>account_number;
        cout<<"Enter the initial amount to deposite in the bank:";
        cin>>balance;
        cout<<"\n";

        while (true)
        {
                cout<<"\nPlease select the options to proceed further:\n 1 for amount deposit\n 2 for display the balance\n 3 for withdrawl the amount\n 4 for display the details of the account\n 0 for quit the account \n";
                cin>>h;
        
                if(h==1){
                        deposite();
                }
                else if(h==2){
                        display();

                }
                else if(h==3){
                        cout<<"Enter your amount to withdraw: ";
                        cin>>withdraw;
                        if(balance - withdraw <0){
                                cout<<"Sorry! Your balance amount is: "<<balance<<endl;
                        }
                        else{
                                cout<<"Withdraw sucssesful \n";
                        }
                        
                }
                else if(h==4){
                        cout<<"Your account is saving type \n ";
                        cout<<"Accout holder name is: "<<name_holder<<endl;
                        cout<<"Account No. is: "<<account_number<<endl;
                        display();
                }
                else if(h==0){
                        cout<<"Quitting the bank\n \t*** Thankyou for the visiting the bank ***\n\t Have a nice day ";
                        break;
                }
        }
}

void Bank :: current_account(){
        string check_book;
        char sel;
        int h;
        cout<<"Enter current account holder name: ";
        cin>>name_holder;
        cout<<"Enter the current account number: ";
        cin>>account_number;
        cout<<"Enter the initial amount to deposite in the bank:";
        cin>>balance;
        cout<<"Do you want check book: type y or n ";
        cin>>sel;
        cout<<"\n";
        if (sel == 'y')
        {
                cout<<"Your check book request is sent: \n";
        }
        
        while (true)
        {
                cout<<"\nPlease select the options to proceed further:\n 1 for amount deposit\n 2 for display the balance\n 3 for withdrawl the amount\n 4 for display the details of the account\n 0 for quit the account \n";
                cin>>h;
        
                if(h==1){
                        deposite();
                }
                else if(h==2){
                        display();

                }
                else if(h==3){
                                cout<<"Enter your amount to withdraw: ";
                                cin>>withdraw;
                        if (balance - withdraw<0)
                        {
                                cout<<"*Warning*==> your bank account contain only : "<<balance<<" rs "<<endl;
                        }
                        else
                        {
                                cout<<"amount Withdrawal is successful\n";
                        }

                        
                        
                }
                else if(h==4){
                        cout<<"Your account is saving type \n ";
                        cout<<"Accout holder name is: "<<name_holder<<endl;
                        cout<<"Account No. is: "<<account_number<<endl;
                        display();
                }
                else if(h==0){
                        cout<<"Quitting the bank\n \t*** Thankyou for the visiting the bank ***\n\t Have a nice day ";
                        break;
                }
        }

}

int main(){
        Bank b;
        int n;
        while (true)
        {
                cout<<"\nPlease enter you choice as given below:\n 1 for saving account\n 2 for current account\n 0 for quit the bank \n";
                cin>>n;
                if (n == 1){
                        cout<<"Saving account is opening:\n";
                        b.saving_account();

                }
                else if(n==2){
                        cout<<"Current account is opening:\n";
                        b.current_account();
                }
                else if(n==0){
                        cout<<"Quitting the bank: ";
                        break;
                }
                else{
                        cout<<"Enter the valid input:\n \t**thank you****\n";
                }
        }
        return 0;

}