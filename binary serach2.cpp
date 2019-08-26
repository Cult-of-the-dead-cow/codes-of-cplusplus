#include<iostream>
using namespace std;
int a( int n )	
{
 int factorial=n;
 //cout<<n;
 while(n>1)
 {
  n--;
 factorial=factorial*n;


}
 cout<<factorial;
}
int main()
{
     a(5);
    return 0;
}
