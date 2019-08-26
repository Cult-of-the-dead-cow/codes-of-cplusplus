#include<iostream>
using namespace std;

class student
{
	private: 
	char name[100];
	 float marks,total;
	 float avg1;
	public:
		void setName()
		{
			cout<<"enter the name of the student"<<endl;
			cin>>name;
		}
		void setmarks()
		{
			
		    cout<<"enter the total marks"<<endl;
		    cin>>total;
			cout<<"enter the marks of the student"<<endl;
			cin>>marks;
			//cout<<"total marks"<<total;
			//cout<<"marks"<<marks;
		    avg1=(marks / total) * 100;
			cout<<"Average"<<avg1;
			if(avg1<50)
			{
				cout<<"fail";
			}
			else
			{
				cout<<"pass";
			}	
		}
		void Settotalnumber()
		{
			avg1=(marks/total)*100;
			cout<<"Average"<<avg1;
			if(avg1<50)
			{
				cout<<"fail";
			}
			else
			{
				cout<<"pass";
			}		
		}
			
};
int main()
{
	student obj;
	obj.setName();
	obj.setmarks();
	//obj.Settotalnumber();
	return 0;
}
