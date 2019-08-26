#include<iostream>
using namespace std;
int main()
{

int i,j,n;
char a[100][200];
cout<<"enter the total number of persons";
cin>>n;
for(i=1;i<=n;i++)
{
	for(j=1;j<=n;j++)
	{
		cin>>a[i][j];
	}
	
}

for(i=1;i<=n;i++)
{
	for(j=1;j<=n;j++)
	{
		cout<<a[i][j];
	}	
	cout<<"\n";
}
return 0;
}
