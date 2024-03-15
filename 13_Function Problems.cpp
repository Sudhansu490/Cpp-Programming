//	Q.1->Write a function to print counting from 1 to 100.
//#include<iostream>
//using namespace std;
//void printNo(){
//	for(int i=1;i<=100;i++){
//		cout << i << "\t";
//	}
//}
//int main(){
//	printNo();
//	return 0;
//}	
	
//	Q.2->Write a function to find simple interest.
//#include<iostream>
//using namespace std;
//int printSI(float P,float T,float R){
//	return (P*T*R)/100;
//}
//int main(){
//	float P= 1000;
//	float T= 2;
//	float R= 15.5;
//	float SI = printSI(P,T,R);
//	cout << "Simple Interest: " << SI; 
//	return 0;
//}	
	
//	Q.3->Write a function to print prime numbers from 1 to 100.
//#include<iostream>
//using namespace std;
//int isPrime(int num){
//	if (num < 2){
//		return false;
//    }
//	for (int i=2; i*i <= num; i++){
//		if (num%i == 0){
//			return false;
//	    }
//	}
//	return true;
//}
//void printPrimeNumbers1to100(){
//	for (int i=2; i<=100; i++){
//		if (isPrime(i)){
//			cout << i << "\t";
//		}
//	}
//}
//int main(){
//	printPrimeNumbers1to100();
//	return 0;
//}
	
//	Q.4->Write a function check whether someone is eligible for voting or not.
//#include<iostream>
//using namespace std;
//bool isEligible(int age){
//	return age>=18;
//}
//int main(){
//	int age= 17;
//	if (isEligible(age)){
//		cout << "Eligible";
//	}
//	else{
//		cout << "Not eligible";
//	}
//	return 0;
//}	
	
//	Q.5->Write a SIP Calculator using function's concept.
#include<iostream>
#include<math.h>
using namespace std;
int sipCalculator(float val, float payments, float rate){
	float monthly_rate= (rate/1200);
	float fv = val*(1+monthly_rate)*((pow((1+monthly_rate),payments)-1)/monthly_rate);
	return fv;
}
int main(){
	float result = sipCalculator(32000,10,2.5);
	cout << "SIP: " << result;
	return 0;
}
