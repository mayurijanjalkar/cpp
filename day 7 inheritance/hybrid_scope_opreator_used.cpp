#include <iostream>
#include <string.h>
using namespace std;

class student {
    public:
    char name[20];
    int id;
    int roll_no;

    void set() {
        strcpy(name, "mayuri");
        id = 100;
        roll_no = 30;
    }

    void display() {
        cout << name << endl;
        cout << id << endl;
        cout << roll_no << endl;
    }
};

class exam : public student {
    public:
    int mark1;
    int mark2;

    void set() {
        student::set(); 
        mark1 = 20;
        mark2 = 30;
    }

    void display() {
        student::display(); 
        cout << "c- " << mark1 << endl;
        cout << "c++ " << mark2 << endl;
    }
};

class sport {
    public:
    int sport1;
    int sport2;

    void set() {
        sport1 = 40;
        sport2 = 60;
    }

    void display() {
        cout <<"sport 1 marks show:"<< sport1 << endl;
        cout <<"sport 1 marks show:"<< sport2 << endl;
    }
};

class result : public exam, public sport {
    public:
    int total;

    void set() {
        exam::set(); 
        sport::set(); 
        total = mark1 + mark2 + sport1 + sport2;
    }

    void display() {
        exam::display(); 
        sport::display(); 
        cout << "Total: " << total << endl;
    }
};

int main() {
    result obj;
    obj.set();
    obj.display();
}