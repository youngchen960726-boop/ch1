#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"請輸入數字:";
    cin>>a;
    if(a%2==0){
        cout<<a<<"為偶數";
    }else{
        cout<<a<<"為奇數";
    }
}