#include <iostream>
#include <random>
using namespace std;

int main()
{
        srand(10);
        cout << "I have a number between 1 to 100." << endl;
        cout << "Can you gauss the number? " << endl;
        int num = rand() % 100;
        while (true)
        {
                int m;

                cout << "Enter the gussed number: ";
                cin >> m;
                if (m == num)
                {
                        cout << "Congrates! You gaussed the write number." << endl;
                        cout << " " << endl;
                        break;
                }
                else if (m > num)
                {
                        cout << "Please Enter the lower number." << endl;
                        cout << " " << endl;
                }
                else
                {
                        cout << "Please Enter the bigger number." << endl;
                        cout << " " << endl;
                }   
        }
        return 0;
}