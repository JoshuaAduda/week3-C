#include<iostream>
using namespace std;
int main(){
//Variable declaration
    int age;
    bool hasTicket;
    bool isMember;
    bool isBanned;
    bool hasParent;

//Getting user input
    cout<<"Enter age:";
    cin>>age;
    cout<<"Do you have a ticket?(1 for yes,0 for no):";
    cin>>hasTicket;
    cout<<"Are you s member?(1 for yes, 0 for no):";
    cin>>isMember;
    cout<<"Are you banned?(1 for yes, 0 for no):";
    cin>>isBanned;

//Applying logical operators
//Eligible if:age>=18 AND has ticket AND NOT banned
//OR: is a member AND NOT banned

    bool canEnter=(age>=18&&hasTicket&&!isBanned)||
        (isMember&&!isBanned);

    if (canEnter){
        cout<<"You can enter the event!"<<endl;
    }else{
        cout<<"Sorry,you cannot enter."<<endl;
    }

    return 0;
}