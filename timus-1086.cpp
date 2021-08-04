#include <iostream>  
using namespace std;  
int main()  
{
	int inputN;
	cin>>inputN; //taking input of how many nth postion do we need
	int input[inputN];
	//taking input of the nth 
	for(int i=0;i<inputN;i++){
		cin>>input[i];
	} 
	for(int i=0;i<inputN;i++){
		cout<<input[i]<<" ";
	} 
	cout<<endl;
	int m=0;
	int primeNum[100];
	int t=0;
	//storing the prime numbers in an array called primeNum
	for(int i=2;i<100;i++){
		m=i/2;
		int flag=0; 
		for(int j=2;j<=m;j++){
			if(i%j == 0){
				flag=1;
				break;
			}
		}
		if(flag==0){
			primeNum[t]=i;
			t++;
		}
	}
	//printing the prime number of the nth position
	for(int y=0;y<inputN;y++){
		int temp = input[y];
		cout<<primeNum[temp-1]<<" ";
	}

  return 0;  
} 
