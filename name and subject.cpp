#include<iostream>
using namespace std;
class student
{
	private:
		char name{100};
		char a[100],b[100],c[100];
		int i,mark1,mark2,mark3,n;
	public:
		void setname()
		{
			cout<<"enter the name of the student"<<endl;
			cin>>name;
		}
		void setsubjects()
		{
			cout<<"enter the total number of subjects"<<endl;
			cin>>n;
			for(i=1;i<=3;i++)
			{
				cin>>a[i]>>b[i]>>c[i];
			}
			cout<<a[i]<<b[i]<<c[i];
		}
		void setmarks()
		{
			cout<<"enter marks of subject ="<<a[i]<<mark1 ;
			
			cout<<"enter marks of subject ="<<b[i]<<mark2;
			
			cout<<"enter marks of subject ="<<c[i]<<mark3;
		}
		
};
int main()
{
	student obj;
	obj.setname();
	obj.setsubjects();
	obj.setmarks();
	return 0;
}
