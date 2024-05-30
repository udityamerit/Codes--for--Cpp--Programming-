#include<iostream>
using namespace std;

class library{
        public:
        string Book_name;
        string Book_id;
        string author_name;
        float price;
        string adition;
        string publisher;
        void input_data();
        void display_data();
};

void library::input_data(){
        // cout<<"Enter the deatails of the book:\n";
        cout<<"Enter Book name: ";
        cin>>Book_name;
        cout<<"Entre the Book id: ";
        cin>>Book_id;
        cout<<"Enter the name of author: ";
        cin>>author_name;
        cout<<"Enter the price of book: ";
        cin>>price;
        cout<<"Enter the adition of book: ";
        cin>>adition;
        cout<<"Enter the publisher of book: ";
        cin>>publisher;
        cout<<"\n";
}
void library::display_data(){
        cout<<"\n";
        // cout<<"Your book details:\n";
        cout<<"Book name is: "<<Book_name<<endl;
        cout<<"Book id is: "<<Book_id<<endl;
        cout<<"Author of Book is: "<<author_name<<endl;
        cout<<"Price of Book is: "<<price<<endl;
        cout<<"Adition of Book is: "<<adition<<endl;
        cout<<"Publisher of Book is: "<<publisher<<endl;
        cout<<"\n";
}

int main(){
        int n;
        cout<<"Enter the number of books or objects: ";
        cin>>n;
        library book[n];
        // library book,hook;
        
        for (int i = 0; i < n; i++)
        {
                cout<<"Enter the "<<i+1<<".Book detail:\n ";
                book[i].input_data();
        }

        for (int j = 0; j < n; j++)
        {
                cout<<"Display the "<<j+1<<".Book detail: \n";
                book[j].display_data();
        }
        // book.input_data();
        // book.display_data();
        
        return 0;
}