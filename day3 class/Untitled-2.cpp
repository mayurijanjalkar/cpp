#include<iostream>
using namespace std;
class check{
    int num,rev=0;
    public:
    void collect();
    void calculate();
    void display();
};
void check::collect(){
cout<<"Enter number";
cin>>num;
}
void check:: calculate(){
    for (; num > 0; num /= 10) {
            rev = rev * 10 + num % 10;
    }
    return rev;
}
void check:: display(){
    cout<<rev;
}
int main(){
    check obj;
    obj.collect();
    obj.calculate();
    obj.display();
}