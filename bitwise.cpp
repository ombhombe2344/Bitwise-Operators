#include <iostream>
using namespace std;
int main() {
    int a=5,b=3;
    int A=a&b;
    int O=a|b;
    int X=a^b;
    int N=~a;
    int LS=a<<2;
    int RS=a>>2;
    cout<<"AND:"<<A<<endl<<"OR:"<<O<<endl<<"XOR:"<<X<<endl<<"NOT:"<<N<<endl<<"LEFT SHIFT:"<<LS<<endl<<"RIGHT SHIFT:"<<RS;
    return 0;
}
/*
AND:1
OR:7
XOR:6
NOT:-6
LEFT SHIFT:20
RIGHT SHIFT:1*/
