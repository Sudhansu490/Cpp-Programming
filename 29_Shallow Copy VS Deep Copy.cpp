#include<iostream>
using namespace std;

class abc{
	public:
	int x;
	int *y;
	abc(int _x,int _y):x(_x),y(new int(_y)) {}
	
	//Default dump copy constructor(Shallow Copy)
//	abc(const &obj){
//		x=obj.x;
//		y=obj.y;
//	}
	//Deep Copy
	abc(const abc &obj){
		x=obj.x;
		y=new int(*obj.y);
	}
	
	void print() const
	{
		cout << "X: " << x << endl;
		cout << "PTR Y: " << y << endl;
		cout << "Content of Y: " << *y << endl;
	}
};

int main(){
	abc a(1,2);
	cout << "Printing a---" << endl;
	a.print();
	cout << "Printing b---" << endl;
	abc b = a; //This calls a copy constructor
	b.print();
	cout << "printing b---" << endl;
	*b.y= 20;
	b.print();
	cout << "Printing a---" << endl;
	a.print();
	return 0;
}
