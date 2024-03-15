#include<iostream>
using namespace std;

int x=2; //Global Variable
void fun(){
	int x=60;
	cout << x << endl;
	::x=8;
	cout << ::x << endl;
}

int main(){
	
	::x=4; //global x
	int x = 20; //local to main()
	cout << x << endl;
	cout << ::x << endl; //accessing Global Variable
	{
		int x = 50;
		cout << x << endl;
		cout << ::x << endl;
	}
	fun();
	
	
	return 0;
}
