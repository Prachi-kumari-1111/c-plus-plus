#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"Enter first number :";
    cin>>a;
    cout<<"Enter second number :";
    cin>>b;
    cout<<"Enter third number :";
    cin>>c;
    if (a+b>c){
        cout<<"valid triangle";
    }
    else{
        cout<<"invalid trianlge";
    }
}