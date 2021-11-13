/*
      input 1 :
        33445
      output 1 :
       3 2
       4 2
       5 1
      input 2 :
        7712553
      output 2 :
        7 2
        1 1
        2 1
        5 2
        3 1
*/





#include<iostream>
using namespace std;
int main()
{
    system("cls");
    int n,temp,rev=0;
    cin>>n;
    temp=n;
    int f[10]={0};
    while(n>0)
    {
        int rem=n%10;
        f[rem]++;
        rev=rev*10+rem;
        n=n/10;
    }
    while(rev>0)
    {
        int rem=rev%10;
        if(f[rem]!=0)
        {
       cout<<rem<<" "<<f[rem]<<endl;
       f[rem]=0;
        }
        rev=rev/10;
    }

}
