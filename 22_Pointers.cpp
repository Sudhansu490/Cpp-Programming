#include<iostream>
using namespace std;
void fun(int *arr){  //Here it passes only starting address not entire array
	cout << "Inside fun: " << sizeof(arr) << endl;
}
int main(){
	
//	int num= 10;
//	cout << "Printing address of num: " << &num << endl;
//	int *ptr = &num;
//	
//	cout << num << endl;
//	cout << &num << endl;
//	cout << ptr << endl;
//	cout << &ptr << endl;
//	cout << *ptr << endl; //Value present at address stored in ptr.
//	(*ptr)++;
//	cout << num << endl;

//  NULL Pointer
//    int *ptr = '\0';
//    cout << *ptr;
    
    int arr[4]= {1,2,3,4};
    cout << "Inside main: " << sizeof(arr) << endl;
    fun(arr);
    
	return 0;
}
