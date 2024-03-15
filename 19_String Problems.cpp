//Q.1->Reverse a String.

//#include<iostream>
//#include<string.h>
//using namespace std;
//void reverseStr(string &str){
//	int i=0;
//	int j= str.length()-1;
//	while(i<=j){
//		swap(str[i],str[j]);
//		i++;
//		j--;
//	}
//}
//int main(){
//	string str= "sudhansu";
//	reverseStr(str);
//	cout << str;
//	return 0;
//}
//When we pass astring by reference(using '&'),any changes made to the string inside the function are
//reflected in the original string outside the function. If we passed the string by value(without '&'),
//the function would work on a copy of 'str' and the original string would remain unchanged.

//---------------------------------------------
//Q.2->Check for Palindrome.

//#include<iostream>
//#include<string.h>
//#include<algorithm>
//using namespace std;
//int main(){
//	string str= "abccba";
//	string temp= str;
//	reverse(str.begin(),str.end());
//	if(str == temp){
//		cout << "Palindrome";
//	}
//	else{
//		cout << "Not Palindrome";
//	}
//	return 0;
//}

//------------------------------------------------
//Q.3->Count number of vowels in String.

//#include<iostream>
//#include<string.h>
//#include<algorithm>
//using namespace std;
//int main(){
//	string str= "Sonu is a Good Boy";
//	int vowelCount= 0;
//	transform(str.begin(),str.end(),str.end(), ::tolower);
//	for(int i=0; i<str.length(); i++){
//		if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u'){
//			vowelCount++;
//		}
//	}
//	cout << "Number of Vowels: " << vowelCount;
//	return 0;
//}

//-----------------------------------------------------------------------
//Q.4->Valid anagram or not.(anagram of a string is another string that contains the same characters,
//only the order of characters can be different.)

//#include<iostream>
//#include<string.h>
//#include<algorithm>
//using namespace std;
//int main(){
//	string s1= "sudhansu";
//	string s2= "dhasuns";
//	sort(s1.begin(),s1.end());
//	sort(s2.begin(),s2.end());
//	if (s1==s2){
//		cout << "Anagram";
//	}
//	else{
//		cout << "Not Anagram";
//	}
//	return 0;
//}

//---------------------------------
//Q.5->Convert case of String.

//#include<iostream>
//#include<string.h>
//#include<algorithm>
//using namespace std;
//int main(){
//	string str= "Good Boy";
//	transform(str.begin(),str.end(),str.begin(),::tolower); //To Lowercase
//	cout << str << endl;
//	transform(str.begin(),str.end(),str.begin(),::toupper); //To Uppercase
//	cout << str << endl;
//	return 0;
//}

//-----------------------------------
//Q.6->Convert string to integer.

//#include<iostream>
//#include<string.h>
//#include<algorithm>
//using namespace std;
//int main(){
//	string st = "10.26";
//	cout << stoi(st);
//	return 0;
//}

