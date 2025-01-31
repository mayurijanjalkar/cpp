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
    if(a>=0){
        cout<<"Positive",a;
    }
    else{
        cout<<"negative";
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