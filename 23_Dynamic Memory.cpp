#include<iostream>
using namespace std;
int main(){
	
//	Memory Allocation
//	int *ptr = new int;
//	*ptr= 5;
//	cout << *ptr;
//	Memory De-allocation
//    delete ptr;

//  Using Array
//    int *ptr = new int[5];
//    ptr[0]=10;
//    ptr[1]=20;
//    *(ptr+2)=30;
//    *(ptr+3)=40;
//    *(ptr+4)=50;
//    for(int i=0; i<5; i++){
//    	cout << ptr[i] << "\t";
//	}
//    delete []ptr;

//  Double Pointer
    int a=5;
    int *ptr = &a;
    int **ctr = &ptr;
    int ***dtr = &ctr;
    cout << a << endl;  //5
    cout << &a << endl;  //address of a
//	cout << *a << endl;  //error
	cout << ptr << endl;  //address of a
	cout << &ptr << endl;  //address of ptr
	cout << *ptr << endl;  //5
	cout << ctr << endl;  //address of ptr
	cout << &ctr << endl;  //address of ctr
	cout << *ctr << endl;  //address of a
	cout << **ctr << endl;  //5
	cout << dtr << endl;  //address of ctr 
	cout << &dtr << endl;  //address of dtr
	cout << *dtr << endl;  //address of ptr
	cout << **dtr << endl;  //address of a
	cout << ***dtr << endl;  //5
	return 0;
}
