#include<iostream>
using  namespace std;
int main(){
    int year;
    cin >> year;
    if(year%400==0||year%100!=0&&year%4==0){
        cout<<"it is leap year";
    }
    else
        cout<<"it is not leap year";

    return 0;
}
