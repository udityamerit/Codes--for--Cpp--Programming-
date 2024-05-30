// #include<iostream>
// #include<stack>
// using namespace std;
// int main(){
//         stack<int> s;
//         s.push(32); // push() is used to insert the item in stack memory
//         s.push(12);
//         s.push(45);
//         s.push(67);
//         s.push(70);
//         s.pop(); // pop() is used to delete the item in stack
//         while (!s.empty())
//         {
//                 cout<<s.top()<<endl; // top() is used to display the top element of the stack 
//                 s.pop();
//         }
//         return 0;
// }



// Online C++ compiler to run C++ program online
#include <iostream>
#include<string>
using namespace std;
void reverse(char arr[50])
{
    // temp = s;
    char arr1[50];
    int l= 0,j = 0,sr = 0;
    for(int i = 0; arr[i]!='\0';i++){
        l = l+1;
    }
    // cout<<l;
    for(int i = l-1; i>=0; i--){
        arr1[j]=arr[i];
        j = j+1;
    }
    for(int i = 0 ; i<l; i++){
        if(arr[i]==arr1[i]){
            sr = sr+1;
        }
    }
    cout<<sr<<l;
    if(sr==l){
        cout<<"string is polindrome";
    }
    else{
        cout<<"string is not a polindrome";
    }
    cout<<arr1;
    
}
    
int main() {
    char arr[50];
    cin>>arr;
    reverse(arr);

    return 0;
}