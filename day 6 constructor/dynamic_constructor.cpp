//dynamically store memory size.....

#include<iostream>
#include<string.h>
using namespace std;
class one{
     public:
     char *name;
    //  one(char input[])
    one(const char*input)
     {
        int len=strlen(input)+1;
        name=new char[len];
        strcpy(name,input);
     }
     void display(){
        cout<<name<<endl;
     }
};
int main(){
    one obj1("Jai shree ram");
    obj1.display();
}