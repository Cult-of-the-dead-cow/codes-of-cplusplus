#include<iostream>
using namespace std;
using namespace std;
class sorting
{
    int i,j,n,beg=0,mid,num,end,a[100];
    public:
       void get()
        {
            cout<<"enter the numbers"<<endl;
            cin>>n;
            for(i=0;i<n;i++)
            {
                cin>>a[i];
            }
            cout<<"enter the number to be searched"<<endl;
            cin>>num;
            while(beg<=end)
            {
                mid=(beg+end)/2;
            
            if(a[mid]==num)
            {
                cout<<"it is excisted";break;
            }
            else if (a[mid]>num)
            end=mid-1;
            else 
            //end=mid-1;
            beg=mid+1;
            }
        }
};
int main()
{
    sorting obj;
    obj.get();
    return 0;
}
