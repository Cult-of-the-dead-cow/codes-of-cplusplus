#include<iostream>
using namespace std;
 class student
 {
   char Name[10];
   int Rollno; 
   public:
    getName()
   {   
    //cout<<"calling GetName fucntion";
     int arrayLenght=getLenght();
     cout<<"Your name is ";
    for(int i=0;i<=arrayLenght;i++){
    		cout<<Name[i];
	}
    cout<<endl; 
	
	  
   }
   public: getRollNumber()
   {
   	cout<<"Your roll number is "<< Rollno;
   	
   }
   student()
   {
   	
   //	cout<<"This is constructor called";
    cin>>Name;
    Rollno=10;
  //cout<<"After Name";
   }
   int getLenght()
   {
   	   //cout<<"Calling Gat lenght";
   	    int a=0;   
   		while(Name[a]!='\0')
   		{
   				a ++;
		}
   	
//	cout<<a;

	return a;
   }
 	
 };



int main()
{
    student obj;  
	obj.getName();
	obj.getRollNumber();
    return 0;
}
