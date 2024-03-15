#include<iostream>
using namespace std;
int main(){
//  Break Keyword
//    for(int i=1 ; i<=10 ; i++){
//    	cout << i << endl;
//    	if (i==5){
//    		break;
//		}
//	}

//    for(int i=1 ; i<=10 ; i++){
//   	    if (i==5){
//    		break;
//		}
//    	cout << i << endl;
//	}

//--------------------------------
//  Continue Keyword
//    for(int i=1 ; i<=10 ; i++){
//   	    if (i==5){
//    		continue;
//		}
//    	cout << i << endl;
//	} 

//  Here after print statement it skips.So all the numbers are printed.	
	for(int i=1 ; i<=10 ; i++){
    	cout << i << endl;
    	if (i==5){
    		continue;
		}
	}   
	return 0;
}
