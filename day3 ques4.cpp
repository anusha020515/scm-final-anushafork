#include <iostream>
using namespace std;
main()
{
	int num1;
	cout<<"enter your marks: ";
	cin>>num1;
	if(num1<25){
		cout<<"Grade F";
	}
	else if(num1>25 and num1<45){
		cout<<"Grade E";
	}
	else if(num1>45 and num1<50){
		cout<<"Grade D";
	}
	else if(num1>50 and num1<60){
		cout<<"Grade C";
	}
	else if(num1>60 and num1<80){
		cout<<"Grade B";
	}
	else if(num1>80){
		cout<<"Grade A";
	}
}
