#include<iostream>
using namespace std;
int main(){
    int a;
    cin>>a;
    if (a%2==0){
        cout<<"even";
        if(a>4){
            cout<<"given num is greater than 4";
        }
        else{
            cout<<"given num is less than 4";
        }
    }
    else{
        cout<<"odd";
    }
}