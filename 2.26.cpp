#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"請輸入第一個數字:";
    cin>>a;
    cout<<"請輸入第二個數字:";
    cin>>b;
    if( a>b && a%b==0){
       cout<<"第一個數字為第二個的倍數";
    }else{
        cout<<"第一個數字不為第二個的倍數";
    }
}