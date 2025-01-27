#include <iostream>
using namespace std;
int main() {
    float w1, w2, p1, p2, avg;

    cout<<"Enter weight of item 1: ";
    cin>>w1;
    cout<<"Enter purchase of item 1: ";
    cin>>p1;

    cout<<"Enter weight of item 2: ";
    cin>>w2;
    cout<<"Enter purchase of item 2: ";
    cin>>p2;

    avg = (w1 * p1 + w2 * p2) / (p1 + p2); 
    cout<<avg; 
}