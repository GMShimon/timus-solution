#include <bits/stdc++.h>
using namespace std;
int main(){

    for (int i = 0; i < 3; i++){
         for (int j = 0; j <= i; j++){
             cout << "*";
        }
         cout << endl;
    }
    cout<<endl<<endl;
    for (int i = 3; i > 0; i--){
        for (int j = 0; j <= i; j++){
             cout << "*";
        }
         cout << endl;
    }
     cout<<endl<<endl;
    
    /*
		..*..
		.***.
		*****
	*/
    int space, rows=3;
    int k=0;
	 for(int i = 1; i <= rows; ++i){
    	k=0;
        for(space = 1; space <= rows-i; ++space){
            cout <<" ";
        }

        while(k != 2*i-1){
            cout << "*";
            ++k;
        }
        cout << endl;
    } 
	cout<<endl<<endl;
	
	/*
		12321
		.121.
		..1..
	*/
	  for(int i=rows;i>=1;--i){
	  	k=0;
	  	for(space=1;space<=rows-i;space++){
	  		cout <<" ";
		  }
		  while(k != 2*i-1){
            cout << k+1;
            ++k;
        }
        cout << endl;
	  } 
    return 0;
}
