#include<iostream>
using namespace std;
class one{
    private:
    int a, b;
    public:
    void set(int x, int y){
        a=x;
        b=y;
    }
    void dis(){

        cout<<a<<" "<<b;
    }
};

int main(){
    one object;
    object.set(25,50);
    object.dis();
    
}