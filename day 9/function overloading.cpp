#include<iostream>
using namespace std;
class add{

    public:
    void sum(int a, int b){
        cout<<a+b<<endl;

    }
    void sum(int a, int b, int c){
        cout<<a+b+c<<endl;
    }
    void sum(int a, double b){
        cout<<a+b<<endl;
    }
};
int main(){
    add object;
    object.sum(2,6);
    object.sum(2,3,6);
    object.sum(2,2.5);
}