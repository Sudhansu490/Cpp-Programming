#include<iostream>
using namespace std;
int main(){
	
//	For Loop
    for(int i=75 ; i<=100 ; i++){
    	cout << i << endl;
	}

//  While Loop
    int a = 1;
    while(a <= 10){
    	cout << a << " ";
    	a++;
	}
	
//	Do-While Loop
    int x = 1;
    do{
    	cout << x << " ";
    	x++;
	}
	while(x <= 10);
	
//	Nested Loops
    for(int p=1; p<6; p++){
    	for(int q=1; q<4 ; q++){
    		cout << " P=" << p << ", Q=" << q << endl;
		}
	}
    
	return 0;
}
