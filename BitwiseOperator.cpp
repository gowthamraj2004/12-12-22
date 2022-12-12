#include<iostream>
using namespace std;
int main(){
    unsigned int a,b,c,d,e,f,g,h;
    a=12;
    b=4;
    c=a&b;
    d=a|b;
    e=a^b;
    f=a<<1;
    g=a>>1;
    h=~4;
    cout<<c<<" "<<d<<" "<<e<<" "<<f<<" "<<g<<" "<<h;
}