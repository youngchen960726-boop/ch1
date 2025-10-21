#include<iostream>
using namespace std;
int main(){
    double total_miles;
    double cost_per_gallon;
    double average_miles;
    double daily_savings;
    double tolls;
    double parking_fees;
    double daily_driving_cost;
    cout<<"每日開車費用計算器"<<endl;
    cout<<"請輸入總里程:";
    cin>>total_miles;
    cout<<"請輸入每加侖汽油費用:";
    cin>>cost_per_gallon;
    cout<<"請輸入平均每加侖行駛的里程:";
    cin>>average_miles;
    cout<<"請輸入每日停車費";
    cin>>parking_fees;
    cout<<"請輸入每日過路費:";
    cin>>tolls;
    daily_driving_cost=(total_miles/average_miles)*cost_per_gallon+parking_fees+tolls;
    daily_savings=daily_driving_cost;
    cout<<"每日開車花費:"<<daily_driving_cost<<endl;
    cout<<"節省費用:"<<daily_savings;
}