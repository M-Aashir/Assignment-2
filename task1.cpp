#include <iostream>

using namespace std;

int main()
{
    int num;
    int countt=0;
    cout<< "Enter number: ";
    cin>>num;

    while (num!=0)
    {   countt++;
        num=num/10;
    }
cout<< "Number of digits : "<<countt;



    return 0;
}
