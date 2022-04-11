//c++ program to demonrate array of string using 

#include<iostream>
using namespace std;
int main()
{
    //Initilaze array of pointer
    const char *colour[5]={"red","white","blue","black","yellow"};

// Printing string strored 2D array

for(int i=0;i<5;i++){
    cout<<colour[i]<<endl;
}
return 0;
}