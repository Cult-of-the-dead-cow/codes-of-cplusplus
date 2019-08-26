#include<iostream>
using namespace std;

class Student
{
    private:
	    int roll;
	    float m1,m2,per;
	    char name[100];
    public:
        void set()
            {
                cout<<"\n\nenter the name of the student";
                cin>>name;
                cout<<"enter the roll of the student";
                cin>>roll;
                cout<<"enter the marks in sub1";
                cin>>m1;
                cout<<"enter the marks in sub2";
                cin>>m2;
            }
        void cal()
            {
                per=(m1+m2)/180*100;
            }
        void show()
            {
                cout<<"\n\nName: "<<name<<endl;
				cout<<"Roll: "<<roll<<endl;
				cout<<"marks in sub1 and sub2 resp :"<<m1<<" "<<m2<<endl<<"Per :"<<per<<endl;
            } 
};
int main()
{

    Student obj;
    obj.set();
    obj.cal();
    obj.show();
    
    Student s2;
    s2.set();
    s2.cal();
    s2.show();
    return 0;
}
