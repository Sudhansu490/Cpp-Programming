#include<iostream>
using namespace std;

class abc{
	int x;
	int *y;
	const int z;
    public:
//    	abc(){
//    		x = 0;
//			y = new int(0);
//	    }

//      constructor: old style
//	    abc(int _x,int _y,int _z=0){ //here we can't reinitialize a constant(so use the new style)
//	    	x = _x;
//	    	y = new int(_y);
//	    	z = _z;
//		}
//		New Style(initialisation list)
		abc(int _x,int _y,int _z=0) : x(_x),y(new int(_y)),z(_z) 
		{
			cout << "In initialization list" << endl;
			*y = *y * 10;
//			z=10; //Here we can't change a constant value
		}
		
	    int getX() const
		{//we can't change the value.To change the value we can use mutable keyword with variable. 
//			x=25;
	    	return x;
		}
		void setX(int val){
			x = val;
		}
	    int getY() const
		{
//			int f=20;
//			y = &f;
	    	return *y;
		}
		void setY(int val){
			*y = val;
		}
		int getZ() const
		{
			return z;
		}		
};
void printABC(const abc &a) //This function only calls the const function.
{ 
	cout << a.getX() << " " << a.getY() << " " << a.getZ() << endl;
}

int main(){
	abc a(1,2,3);
	printABC(a);
	return 0;
}

int main2(){
	
//	const int x=5; //x is a constant.
//	x=10; //Initialization can be done but we can't reassigned a value.
//	cout << x << endl;

//------------------------------------------------------------------	
//	const with pointers

//  1.const data but non-const pointer
//	const int *a = new int(2);
//	int const *a = new int(2); //same as above line
////	*a= 2; //can't change the content of pointer
//	cout << *a << endl;
//	int b=5;
//	a= &b; //pointer itself can be reassigned
//	cout << *a << endl;
	
//	2.const pointer but non-const data
//	int *const a = new int(2);
//	cout << *a << endl;
//	*a = 20; //content of pointer can be reassigned
//	cout << *a << endl;
//	int b=5;
//	a= &b; //pointer can't be reassigned
	
//	3.const data and const pointer
	const int *const a = new int(2);
	cout << *a << endl;
//	*a = 20; //can't change the content of pointer
	int b = 5;
//	a= &b; //pointer can't be reassigned
	
	return 0;
}
