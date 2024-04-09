/* An election is contested by 5 candidates. The candidates are numbered 1 
to 5 and the voting is done by marking the candidate number on the ballot 
paper. Write a C++ program to read the ballots and count the votes cast 
for each candidate using an array. In case, a number read is outside the 
range 1 to 5, the ballot should be considered as a ‘spoilt ballot’ and the 
program should also count the number of spoilt ballots.
*/
 
#include<iostream>
using  namespace std;
int main(){
                int x,p,i = 0;
                int c1 = 0 ,c2 = 0 ,c3 = 0 ,c4 = 0 ,c5 = 0 , d = 0;
                cout<<"please enter the total number of voter: ";
                cin>>p;

        while (i<p)
        {
          
                cout<<"Please chose the candidate to vote as given in menu: \n 1 for candidate1\n 2 for candidate2\n 3 for candidate3\n 4 for candidate4\n 5 for candidate5\n 0 for leaving the vote booth\n " ;
                cin>>x;
                if(x==0){
                        break;
                }
                switch(x){
                        case 1:
                        {
                                cout<<"You are vote for candidate 1:\n ";
                                c1++;
                                break;
                        }
                        case 2:
                        {
                                cout<<"You are vote for candidate 2:\n ";
                                c2++;
                                break;
                        }
                        case 3:
                        {
                                cout<<"You are vote for candidate 3:\n ";
                                c3++;
                                break;
                        }
                        case 4:
                        {
                                cout<<"You are vote for candidate 4:\n ";
                                c4++;
                                break;
                        }
                        case 5:
                        {
                                cout<<"You are vote for candidate 5:\n ";
                                c5++;
                                break;
                        }
                        default: 
                        {
                                cout<<"You dose not vote any of these candidates:\n ";
                                d++;
                                break;
                        }
                }
                i++;

        }
        cout<<"Total vote for candidate1 is: "<<c1<<endl;
        cout<<"Total vote for candidate2 is: "<<c2<<endl;
        cout<<"Total vote for candidate3 is: "<<c3<<endl;
        cout<<"Total vote for candidate4 is: "<<c4<<endl;
        cout<<"Total vote for candidate5 is: "<<c5<<endl;
        cout<<"Total spoilt ballots is: "<<d<<endl;
        return 0;

}
