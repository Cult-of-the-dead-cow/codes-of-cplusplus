#include<iostream>
using namespace std;
int fact(int n )	
{
	if(n==1)
	return 1;
	return n * fact(n-1);
}



int main()
{
	int number;
	cout<<"Please enter the numbe";
	cin>>number;
	int retNumber=fact(number);
     cout<<"the result is"<< retNumber;
    return 0;
}
