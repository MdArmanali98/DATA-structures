//Array of string in C++
//(5 Diffrent Ways to create)

//C++ program to demontrete array of string using
//2d charecter array

/*#include<iostream>
using namespace std;
int main(){
    //Initialize array of pointer
    const char *colour[4]={"blue","red","black","white"};
    //printing string strored 2D array

    for(int i=0;i<4;i++)
    cout<<colour[i]<<"\n";
    return 0;
}*/

//using 2D array
//c++ programe to demontrete array of string  using 2D characterarray

//using the string class
#include<iostream>
#include<string>
using namespace std;
int main()
{
    //Initilize string array

     
string color[4]={"blue","red","black","white"};
    //print stirng

    for(int i=0;i<4;i++)
    
       cout<<color[i]<<"\n";
        //return 0;
    }
