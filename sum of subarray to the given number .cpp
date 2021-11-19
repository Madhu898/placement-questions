/*

input  = 
        enter the size of the array 
        6
        enter the array elements 
        2 5 8 6 2 4
        enter the sum 
        14
        the sum is  present in between the positions of  (2 3 )
        and the elements are
        8 6
    output =
        the sum is  present in between the positions of  (2 3 )
        and the elements are
        8 6



*/


#include<bits/stdc++.h>
using namespace std;
int main()
{
    system("cls");
    int n,s,sum=0,k,flag=0;
    cout<<"enter the size of the array "<<endl;
    cin>>n;
    cout<<"enter the array elements "<<endl;
    int a[n];
   for(int i=0;i<n;i++)
   {
       cin>>a[i];
   }
   cout<<"enter the sum "<<endl;
      cin>>k;
   for(int i=0;i<n;i++)
   {
       sum=0;
   for(int j=i;j<=n;j++)
   {
     if(k==sum)
     {
         flag = true;
         cout<<"the elements are present at ("<< i<<" "<<j-1<<" )"<<endl;
         for(int k=i;k<j;k++)
         {
             cout<<a[k]<<" ";
         }
         cout<<endl;
         break;
     }
     else if(sum>k)
     {
         break;
     }
     sum=sum+a[j];
   }

   }
   if(!flag)
   {
       cout<<"not found "<<endl;
   }

    return 0;
}
