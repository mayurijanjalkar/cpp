#include<iostream>
using namespace std;
void add(int x=4, int y=5){
    int c=x+y;
    cout<<c<<endl;
}
int main(){
  
    add(2,3);
    add();
    add(6);
}

