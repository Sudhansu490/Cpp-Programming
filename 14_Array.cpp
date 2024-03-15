#include<iostream>
using namespace std;

void printArr(int arr[],int size){
	for(int i=0; i<size; i++){
		cout << arr[i] << "\t";
	}
}

int main(){
	
//  Pass Array in Functions
    int arr[] = {100,200,300,400,500};
    int size = 5;
    printArr(arr,size);
	
//	Array Declaration(Always give the size inside square bracket.)
//    int kaurab[100];
    
//  Array Initialization
//    int arr[50] = {10,20,30,40,50};
//    int ar[] = {1,2,3,4};
    
//  Traversing of an Array
//    int multipleof2[10] = {2,4,6,8,10,12,14,16,18,20};
//    for (int i=0; i<10; i++){
//    	cout << multipleof2[i] << "\t";
//	}

//  Take input in Array
//    int arr[5];
//    for(int i=0; i<5; i++){
//    	cout << "Enter the value for arr["<<i<<"]:";
//    	cin >> arr[i];
//    	cout << endl;
//	}
//	for(int i=0; i<5; i++){
//		cout << arr[i] << "\t";
//	}
	
//	Find the sum of elements in an Array
//    int arr[5]={10,20,30,40,50};
//    int sum = 0;
//    for(int i=0; i<5; i++){
//    	sum = sum + arr[i];
//	}
//    cout << "Total: " << sum << endl;

	return 0;
}
