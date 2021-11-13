//the lift will move in the pow 2 so minimum number of stops to reach his floor 
// for example his floor is 34 then 2^5+2^1=34(minimum number of the times )

#include<bits/stdc++.h>
using namespace std;
int main()
{
    system("cls");
    int n,b=0;
    cin>>n;
    int f[2]={0};
    while(n>0)
    {
        int rem=n%2;
        b=b*10+rem;
        n=n/2;
    }
    while (b>0)
    {
        int rem=b%10;
        f[rem]++;
        b=b/10;
    }
    cout<<f[1];
    
    return 0;
}
