// 1+(2+3)+(4+5+6)+.......nth term
//i found only 4th term

#include <iostream>
using namespace std;
int main(){
    int sum=0,sum1=0,total;
    int temp;
    int temp2=0;
    for (int i = 0; i < 3; i++){
        temp=temp2+1;
        sum+=temp;
        temp2=temp2+1;
        cout<<"("<<temp;
        for (int j = 0; j < i; j++){
           temp2=temp2+1;
           sum1+=temp2;
           cout<<"+"<<temp2;
        }
        cout<<")+";
        total=sum+sum1;
    }
    cout<<endl<<total;
    return 0;
}