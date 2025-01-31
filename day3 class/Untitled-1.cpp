#include<iostream>
using namespace std;
class one{
    int num;
    public:
    void set(int & x){
        x=num;
    }
    void passbyrefernce(one &obj1, one &obj2){
        obj1.num=100;
        obj2.num=200;
        obj1.dis();
        obj2.dis();
    }
    void dis(){
        cout<<num;
    }
};
 
 int main(){
    one obj1,obj2,obj3;
   
    obj2.set(20);
    cout<<obj1.set(10)<<"Before passing refernce"<<obj1.dis()<<endl;
    
    

    obj3.passbyrefernce(&obj1,&obj2);
    cout<<obj2.set(20)<<"After passing refernce"<<obj2.dis()<<endl;
    obj1.dis();
    obj2.dis();
}