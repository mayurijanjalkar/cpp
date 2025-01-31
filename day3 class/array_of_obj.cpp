#include<iostream>
using namespace std;
class emp{
    public:
    int id;
    char name[70];
    char phone[20];
    void collect(){
        cout<<"Enter id\n";
        cin>>id;
        cout<<"Enter name\n";
        cin>>name;
        cout<<"Enter phone number\n";
        cin>>phone;

    }
    void dis(){
        cout<<id<<" "<<name<<" "<<phone;
    }
};
    int main(){
         emp  obj[3];
        int i;
        for(i=0;i<3;i++){
            obj[i].collect();
        }
        for (i=0;i<3;i++){
            obj[3].dis();
        }
    }
