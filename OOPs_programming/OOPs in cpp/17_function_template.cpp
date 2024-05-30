#include <iostream>
using namespace std;
template <typename T>
void sum(T var1, T var2)
{
        cout << "sum of variables is: " << var1 + var2 << endl;
}
int main()
{
        sum<int>(3, 4);
        sum<float>(3.4, 5.4);
        sum<char>('a', 'b');
        sum<string>("parth","mishra");
        return 0;
}