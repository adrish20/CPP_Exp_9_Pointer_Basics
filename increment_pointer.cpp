//Adrish Purkayastha
//EnTC A
//PRN:23070123011
//C++ program to increment a pointer address
#include<iostream>
using namespace std;
int main(){
    int *aptr,a=10;
       aptr = &a;
       cout<<aptr<<endl;
       aptr++;
       cout<<aptr<<endl;
}
/*
OUTPUT:
0x61ff08
0x61ff0c
*/
    
