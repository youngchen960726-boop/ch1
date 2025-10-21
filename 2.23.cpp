#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    int smallest,largest;
    cin>> a >> b >>c;
    smallest=a;
    largest=a;
    if(b>largest){
        largest=b;
    }
    if(c>largest){
        largest=c;
    }
    if(b<smallest){
        smallest=b;
    }
    if(c<smallest){
        smallest=c;
    }
    cout<<"最大的"<<largest<<endl;
    cout<<"最小的"<<smallest<<endl;
}