#include<iostream>
using namespace std;
// function for number is polindrome:

void check_polly (int num){
        int p,rev=0, r;
        p =num;
        while (num!=0)
        {
                r = num%10;
                rev = (rev*10)+r;
                num = num/10;
        }
        if (p == rev)
        {
                cout<<" Number is polindrome\n";
        }
        else
        {
                cout<<"Number is not polndrome";
        }       
}

//function for array is polindrome of not:

void check_polly(int arr1[]){
        int length = 0, c = 0, j=0;
        int arr2[50];
        for (int i = 0;arr1[i] !='\0' ; i++)
        {
                length++;
        }
        for (int i = length-1;i>=0; i--)
        {
                arr2[j]= arr1[i];
                j++;
        }
        for (int i = 0; i < length; i++)
        {
                if (arr1[i]==arr2[i])
                {
                        c++;
                }
                
        }
        if (c==length)
        {
                cout<<"integer array is polindrom ";
        }
        else
        {
                cout<<"integer array is not polindrom";
        }
        cout<<"\n";
}

// string is  polindrome or not:

void check_polly(char str1[]){
        int length = 0, j=0, c=0;
        // char str1[50];
        char str2[50];
        for (int i = 0; str1[i]!='\0'; i++)
        {
                length++;
        }
        for (int i = length-1; i >= 0 ; i--)
        {
                str2[j]=str1[i];
                j++;
        }

        for (int i = 0; i < length; i++)
        {
                if(str1[i]==str2[i])
                {
                        c++;
                }
        }
        if (c==length)
        {
                cout<<"String is polindrom ";
        }
        else
        {
                cout<<"string is not polindrom ";
        }
        cout<<"\n";

}

int main(){
        int n,num;
        cout<<"Enter the number to check pollindrome: ";
        cin>>num;
        cout<<"Enter the size of array: ";
        cin>>n;
        int arr1[n];
        char str1[50];
        cout<<"Enter the integer array: ";
        for (int i = 0; i < n; i++)
        {
                cin>>arr1[i];
        }
        cout<<"Enter the string array: ";
        cin>>str1;
        check_polly(num);
        check_polly(arr1);
        check_polly(str1);
        return 0;
}