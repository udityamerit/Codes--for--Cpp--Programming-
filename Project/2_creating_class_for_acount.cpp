#include <iostream>
#include <string>
using namespace std;
class Bank_account
{
public:
        string Name_of_the_depositor;
        long long Account_number;
        string Type_of_account;
        long long Balance_amount_in_the_account;
        Bank_account()     
        {
                cout<<"*****Welcome to the Bank created by C++ Programming language***** \n ";
                cout << "Enter your initial details\n \n";
                cout << "Enter the Name of depositor: ";
                cin >> Name_of_the_depositor;
                cout << "Enter the Account Number: ";
                cin >> Account_number;
                cout << "Enter the type of account: ";
                cin >> Type_of_account;
                cout << "Enter the Balance amount in the account: ";
                cin >> Balance_amount_in_the_account;
                cout << "\n";
        }

        void deposite_an_amount();
        void withdraw_an_amount_after_checking_balance();
        void display_the_name_and_balance();
};

void Bank_account::deposite_an_amount()
{
        long amount;
        cout << "Enter the amount to deposite ";
        cin >> amount;
        Balance_amount_in_the_account = Balance_amount_in_the_account + amount;
        
        cout << "\n";
}
void Bank_account::withdraw_an_amount_after_checking_balance()
{

        cout << "Your Banlance amount is: " << Balance_amount_in_the_account << endl;
        cout << "Do you want to withdraw an amount: Y or N ";
        char select;
        cin >> select;
        if (select == 'Y')
        {
                int withdraw;
                cout << "Please Enter the withdraw amount: ";
                cin >> withdraw;
                Balance_amount_in_the_account = Balance_amount_in_the_account - withdraw;
                cout << " Now your total amount in Bank is:  " << Balance_amount_in_the_account;
        }
        else
        {
                cout << "Your Balance amount is: " << Balance_amount_in_the_account;
        }
        cout << "\n";
}

void Bank_account::display_the_name_and_balance()
{
        cout << "Name of depositor is: " << Name_of_the_depositor << endl;
        cout << "Your total Balance in Bank is: " << Balance_amount_in_the_account;
        cout << "\n";
}

int main()
{
        Bank_account ba;
        
        while (true)
        {
                int ch;
                cout << "Enter your choice as given below:\n 1. for To deposit an amount \n 2. for withdraw an amount after checking balance \n 3. for display the name and balance:\n 0. for Exit the bank:\n\n ";
                cin >> ch;
                if (ch==1)
                {
                        ba.deposite_an_amount();
                        cout << "\n Thank You \n";
                }
                else if(ch==2){
                        ba.withdraw_an_amount_after_checking_balance();
                        cout << "\n Thank You \n";
                        }
                else if(ch==3){
                        ba.display_the_name_and_balance();
                        cout << "\n Thank You \n";
                        }
                else if(ch == 0){
                        cout<<"Quiting the bank \n ***** Have a Good day sir/ma'am *****";
                        break;
                        }
                else {
                        cout << "Please Enter the valid input as given in istruction: ";
                        cout << " Thank You \n";
                       
                }
        }
} 