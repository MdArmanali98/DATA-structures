//c++ programe to demontrate array of string using 
//2D character array

#include<iostream>
using namespace std;
int main()
{
    //Initialize array of pointer

    const char *colour[4]={"yellow","red","orange","black"};
    //printing string stored 2D array

    for(int i=0;i<4;i++){
        cout<<colour[i]<<"\n";
    }
        return 0;
    }



