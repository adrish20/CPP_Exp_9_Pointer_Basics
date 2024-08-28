//Adrish Purkayastha
//EnTC A
//PRN:23070123011
//C++ program to print address of variable, address of variable through pointer, value of variable through pointer
#include <iostream>
using namespace std;
int main(){
    int a = 10;
    int *aptr;
    aptr = &a;
    cout<<&a<<endl;
    cout<<aptr<<endl;
    cout<<*aptr<<endl;
}
/*
OUTPUT:
0x61ff08
0x61ff08
10
*/