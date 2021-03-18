#include<iostream>
using namespace std;
int main()
{
	int salary,bonus;
	double grade;
	cout<<"Enter a value of salary:";
	cin>>salary;
	cout<<"Enter a value of grade:";
	cin>>grade;
	if(grade>20)
	bonus=salary*50/100;
	else
	bonus=salary*25/100;
	salary=salary+bonus;
	cout<<"Display salary:"<<salary;
	
}
