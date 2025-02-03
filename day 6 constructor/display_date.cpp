#include<iostream>

using namespace std;
class Date{
 public:
 int dd,mm,yy;
Date(){

    dd=27;
    mm=8;
    yy=2003;
    cout<<"Display a birthday date"<<endl;
    
}
void display(){
   cout<<dd<<"-"<<mm<<"-"<<yy;

}
};
int main(){
    Date obj1;
    obj1.display();
}