#include<iostream>
using namespace std;

//class creation
class Student{
	public:
//		properties / data members
		int age;
		int weight;
		float height;
		string name;
		
//		constructor(default/no parameterized)
		Student(){
			cout << "I am inside No-Parameterized Constructor" << endl;
			this->age=0;
			this->weight=10;
			this->height=4.5;
			this->name= "Sunny";
		}
//		'this' is a keyword always points to current object		
		
//		parameterized constructor
		Student(int myAge,int myWeight,int myHeight,string myName):age(myAge),weight(myWeight),height(myHeight),name(myName){
			cout << "I am inside Parameterized Constructor" << endl;
		}
//		we can write like this also
		
//		behaviours / member functions
		void run(){
		cout << "I am Running" << endl;
		}
		void study(){
			cout << name << " is studying." << endl;
		}
		
//		Destructor
		~Student(){
			cout << "I am inside Destructor." << endl;
		}
		
};

int main(){
//	cout << sizeof(Student) << endl; //Size of an Empty class is 1 Byte.
	
//	object creation
//	static way
//	Student s1;
//	s1.age= 18;
//	s1.name = "Kappa";
//	s1.weight= 55;
//	s1.height= 5.8;
//	s1.run();
	
//	dynamic way
//	Student *s = new Student();
////	(*s).age=10;
//	s->age=10;
//	(*s).weight=60;
//	s->height=5.6;
//	(*s).run();
//	s->name = "Sonu Bhai";
//	s->study();
	
//	Student x;
//	Student y(25,62,5.7,"Sujan");
	
//	Student *p = new Student();
//	Student *q = new Student(15,50,5,"Kunal");
//	cout << q->age << endl;
//	cout << q->weight << endl;
//	cout << q->height << endl;
//	cout << q->name << endl;
	
	Student *a= new Student();
	delete a;
	
	return 0;
}
