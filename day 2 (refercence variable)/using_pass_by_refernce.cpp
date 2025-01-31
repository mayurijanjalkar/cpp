#include<iostream>
using namespace std;
int fun(int &x,int &y){
    x=12;
    y=13;

}
int main(){
    int a=2;
    int b=3;
    cout<<a<<" "<<b<<endl;
    fun(a,b);
    cout<<a<<" "<<b<<endl;
}