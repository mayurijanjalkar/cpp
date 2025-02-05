#include<iostream>
using namespace std;
class bb;
class cc;
class aa{
     public:
    int a;
    
    void set(int x){
        a=x;
    }
    friend void fun(aa,bb,cc);
};
class bb{
     public:
     int b;
    
    void set(int y){
        b=y;
    }
    friend void fun(aa,bb,cc);

};
class cc{
     public:
     int c;
     
    void set(int z){
        c=z;
    }
    friend void fun(aa,bb,cc);

};

void fun(aa o1, bb o2 , cc o3){
    cout<<o1.a<<" "<<o2.b<<" "<<o3.c;

}
int main(){
    aa obj1;
    bb obj2;
    cc obj3;
    obj1.set(10);
    obj2.set(100);
    obj3.set(1000);
    fun(obj1,obj2,obj3);
}