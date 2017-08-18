#include <iostream>

using namespace std;

int main()
{
int num,rem=0;
cout<<"Enter number : ";
cin>> num;

while (num!=0)
{   rem=rem+(num%10);
    num=num/10;

}

cout<<"\nSum of All the digits of the entered number : " <<rem<<"\n";




return 0;
}
