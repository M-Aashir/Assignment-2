
#include <iostream>

using namespace std;

int main()
{

    int num,a,b,c;
cout<<"enter number : ";
cin>>num;

a=1;
b=1;
cout<<a<<" , "<<b;

for( int i=0;i<num;i++)
{

    c=a+b;
   cout<<" , "<<c;

    a=b;
    b=c;





}



return 0;
}
