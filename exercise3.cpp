//1+(2+3*4)+(5+6*7+8*9*10)+.....nth term 
#include<iostream>
using namespace std;
int main(){
    int temp=0;
    int temp2=0;
    int temp3=0;
    int temp4=0;
    int sum=0,sum2=0,sum3=0;
    for(int i=0;i<3;i++){
       temp=temp2+1;
       cout<<"("<<temp;
       sum+=temp;
       temp2=temp2+1;
        for(int y=0;y<i;y++){
            temp2=temp2+1;
            temp3=temp2;
            temp2=temp2+1;
            cout<<"+"<<temp3<<"*"<<temp2;
            sum2=temp3*temp2;
            
            for(int k=0;k<y;k++){
                temp4=temp2+1;
                cout<<"*"<<temp4;
                temp2=temp2+1;
                sum3=sum2*temp4;
            }
            sum+=sum3;
        }
       cout<<")+";
    }
    cout<<endl<<sum;
    return 0;
}