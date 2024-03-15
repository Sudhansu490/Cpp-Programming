#include<iostream>
using namespace std;
int main(){
	
//	Same memory location can be used in different names.
	int a =5;
	int &temp =a;
	cout << temp << endl;
	temp--;
	cout << temp << endl;
	a = temp*10;
	cout << temp << endl;
	temp++;
	cout << a << endl;
	
	return 0;
}
