#include<iostream>
using namespace std;
int main(){
	int age = 120;
	(age>=18) ? cout << "Can Vote." << endl : cout << "Cannot Vote." << endl;
	
	int x = 10;
	int y = 20;
	int result = (x > y) ? x : y;
	cout << "The larger value is " << result;
	return 0;
}
