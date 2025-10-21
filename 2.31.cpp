#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int number,square,cube;

    for(number=0;number<=10;number++)
    {
        square=number*number;
        cube=number*number*number;
        cout<<number<<"\t"<<square<<"\t"<<cube<<"\t"<<endl;
    }
}