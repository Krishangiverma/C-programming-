#include<iostream>
#include<fstream>
using namespace std;
int main(){
    string st="krishangi verma ";
    ofstream out("file.txt");
    out<<st;
    return 0;
}
