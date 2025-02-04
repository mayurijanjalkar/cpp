#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"Enter angle  a";
    cin>>a;
    cout<<"Enter angle b";
    cin>>b;
    cout<<"Enter  angle c";
    cin>>c;
    if(a+b+c==180){
        cout<<"its a triangle";

    }
    else{
        cout<<"false";
    }
}