#include<iostream>
using namespace std;
//void printName();

int multiplication(int a,int b,int c){
	int mul = a*b*c;
	return mul;
}

void printMyName(){
	for(int i=1; i<=10; i++){
		cout << "Sudhansu" << endl;
	}
}

void printNoTable(int num){
	for(int i=1; i<=10; i++){
		cout << num*i << endl;
	}
}

int converttoC(int F){
	int C = (F-32)*5/9;
	return C;
}

char converttoUpper(char ch){
	char ans = ch-'a'+'A';
	return ans;
}

int main(){
//	Function Call

//	printName();

//	int ans = multiplication(5,7,2);
//	cout << ans << endl;

//  printMyName();

//  printNoTable(15);

//    int far= 98;
//    int cel = converttoC(far);
//    cout << "In Celcius: " << cel << endl;

    char result = converttoUpper('h');
    cout << result << endl;

	return 0;
}
//Order is important. A function is always above the main function. If we want to overcome this problem 
//then we have to declare the function above main function.
//void printName(){
//	cout << "Sudhansu";
//}
