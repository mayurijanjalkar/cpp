#include<iostream>
using namespace std;
class two;                      //declare class two
class one{
     public:                    //access for value
    int a;

   
    void set(int x){               //set value
        a=x;
    }
    friend void fun(one,two);           //use friend function declare a class
};
class two{
    public:
    int b;
    
    void set(int y){
        b=y;
    }
    friend void fun(one,two);
};
void fun(one o1, two o2){               //call friend function object 
    cout<<o1.a+o2.b;
}
int main(){

    one obj1;                            //object class one
    two obj2;                            //object class two
    obj1.set(5);                            //value set obj1
    obj2.set(6);                            //value set obj 2
    fun(obj1,obj2);                         //call fun
}