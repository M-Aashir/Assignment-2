#include <iostream>

using namespace std;

int main()
{
    int num;
cout<< "Enter Number : ";
cin>>num;

if (num==2)
{
    cout<<"\n Entered Number is Prime ";
    goto exit;
}

for (int i=2;i<num;i++)
{
    if (num%i==0)
    {
    cout<<"\n Entered Number is NOT Prime ";
    goto exit;
    }
}


    cout<<"\nEntered number is Prime "<<endl;

exit:
return 0;
}
