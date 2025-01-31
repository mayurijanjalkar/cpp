#include<iostream>
using namespace std;

    class one{
        int a,b,c;
        public:
        void collect();
        void calculate();
        void display();


    };
        void one ::collect(){
            cout<<"Enter a & b";
            cin>>a>>b;

        }
        void one :: calculate(){
            
            c=a+b;
        }
        void one:: display(){
            cout<<c;
        }
    
int main(){
    one obj;
    obj.collect();
    obj.calculate();
    obj.display();
}