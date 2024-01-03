#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int num;
    cin>>num;
    int flag{0};
    for(int i=2;i<=sqrt(num);i++)
    {
        if(num%2==0)
        flag=1;
    }

    if(flag==0)
    cout<<"PRIME"<<endl;
    else
    cout<<"NOT PRIME"<<endl;
}