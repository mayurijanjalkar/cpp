#include<iostream>
using namespace std;
int main(){
    int a;
    int b;
    int c;

    cout<<"Enter a number a";
    cin>>a;
    cout<<"Enter a number b";
    cin>>b;
    cout<<"Enter a number c";
    cin>>c;
    if (a>b){
        cout<<"a is grater then b"<<endl;
    }
    else if(b>c){
        cout<<"b is greter then c"<<endl;
    }
    else if (c>b){
        cout<<"c is greter then b"<<endl;
    }
    else (c>a);
    {
        cout<<"c is greter then a"<<endl;
    }
}