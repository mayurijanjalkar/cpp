#include<iostream>
#include<string.h>
using namespace std;
class one{
    public:
    char *name;
    one(char input[])
    {
        int len=strlen(input)+1;
        name= new char[len];
        strcpy(name,input);

    }
    void display(){
        cout<<name<<endl;
    }

~one(){
 delete name;
 cout<<"Destructor called:";

}
};
int main(){
    one ob1("Ram");
    ob1.display();
}