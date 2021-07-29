#include<iostream>
using namespace std;
int main(){
    int n,x;
    int sum=0;
    int def;
    cin>>n;
    if(n<0){
        x=n*(-1);
        def=x-1;
        for (int i = 0; i < def; i++){
            sum=sum+(x-i);
        }
        sum=sum*(-1);
        cout<<sum;
    }
    else{
        x=n;
        def=x-1;
        for (int i = 0; i < def; i++){
            sum=sum+(x-i);
        }
        cout<<sum;
    }
    return 0;
}