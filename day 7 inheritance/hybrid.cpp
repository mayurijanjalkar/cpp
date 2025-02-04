#include<iostream>
using namespace std;
class student{
    public:
    char[20] name;
    int id;
    int roll no;
    void set()
    {
        name="khushi";
        id=100;
        roll no=30;

    }
    void display()
    {
        cout<<name;
        cout<<id;
        cout<<roll no;

    }
};

class exam:public student{
    public:
    int mark1;
    int mark2;
   

    
    void set()
    {
        mark1=20;
        mark2=30;
        mark3=50;

    }
    void display{
        cout<<"c-"<<mark1<<endl;
        cout<<"c++"<<mark2<<endl;
        cout<<"py"<<mark3<<endl;
    }
    };
class sport{
    public:
    int sport1;
    int sport2;
    void set(){
        sport1=40;
        sport2=60;
    }
    void display(){
        cout<<sport1<<endl;
        cout<<sport2<<endl;
    }
};
 
class result:public exam,sport{
    public:
    int result;
    int total;


};

int main()
{
    result obj;
    obj.set();
    obj.display();
}