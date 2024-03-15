#include<iostream>
using namespace std;

#define PI 3.14159465
#define MAX(x,y)(x > y ? x : y)

float circleArea(float r){
	return PI*r*r;
}
float circlePerimeter(float r){
	return 2*PI*r;
}

int fun1(){
	int a=12;
	int b=25;
	return MAX(a,b);
}
int fun2(){
	int x=35;
	int y=40;
	return MAX(x,y);
}

int main(){
	
	cout << circleArea(7.7) << endl;
	cout << circlePerimeter(6.5) << endl;
	cout << fun1() << endl;
	cout << fun2() << endl;
	return 0;
}
