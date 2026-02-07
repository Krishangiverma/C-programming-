#include<iostream>
using namespace std;
//global variable 
int var=6;

int main(){
    //local variable
    int var=4;
    cout<<var<<endl;//prints the value of local variable 
    cout<<::var<<endl;//using scope resolution operator we can print the value of global variable
    return 0;
}
