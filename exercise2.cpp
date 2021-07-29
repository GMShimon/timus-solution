// 1-2+3-4+5.....nth term
#include<iostream>
using namespace std;
int main(){
    int temp=0;
    int sum=0;
    for (int i = 0; i < 5; i++){
       temp=0;
        temp=i+1;
        if(temp%2==0){
            temp=(-1)*temp;
            sum+=temp;
        }
        else{
            sum+=temp;
        }
    }
    cout<<sum;
    return 0;
}