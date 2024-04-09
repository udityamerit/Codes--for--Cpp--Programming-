#include<iostream>
// #include<string>
using namespace std;

int main(){

        char str1[50];
        char str2[50];
        int length = 0, j = 0;
        cout<<"Enter the String to check pollindrome or not: ";
        cin>>str1;
        //declration of length of the string:
        for ( int i =0 ;str1[i] != '\0'; i++)
        {
              length++;
        }
        //reversing the string
        for (int i = length-1; i>=0; i--)
        {
                str2[j]=str1[i];
                j++;      
        }
        // str2[j]='\0';
        //counting of the array legnth and compair:
        int c = 0;
        for (int i = 0; i < length; i++)
        {
                if (str1[i]==str2[i])
                {
                        c++;
                }        
        }
        if (c==length)
        {
                cout<<"string is polindrom \n";
        }
        else{
                cout<<"string is not polindrom \n";
        } 
        return 0;
}