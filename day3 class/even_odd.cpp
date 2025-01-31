#include<iostream>
using namespace std;
class check{
    int a;
    public:
    void collect();
    void calculate();
    void display();
};
void check::collect(){
cout<<"Enter number";
cin>>a;
}
void check:: calculate(){
    if(a%2==0){
        cout<<"Even",a;
    }
    else{
        cout<<"odd";
    }
}
void check:: display(){
    cout<<a;
}
int main(){
    check obj;
    obj.collect();
    obj.calculate();
    obj.display();
}