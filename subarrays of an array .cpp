/*
input = 
        6
        9 2 7 6 8 1
output =
        [ 9 ] 
        [ 9 ] [ 2 ] 
        [ 9 ] [ 2 ] [ 7 ] 
        [ 9 ] [ 2 ] [ 7 ] [ 6 ]       
        [ 9 ] [ 2 ] [ 7 ] [ 6 ] [ 8 ] 

        [ 2 ] 
        [ 2 ] [ 7 ]
        [ 2 ] [ 7 ] [ 6 ]
        [ 2 ] [ 7 ] [ 6 ] [ 8 ]

        [ 7 ]
        [ 7 ] [ 6 ]
        [ 7 ] [ 6 ] [ 8 ]

        [ 6 ]
        [ 6 ] [ 8 ] 

        [ 8 ]
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    system("cls");
    int n;
    cin>>n;
    int a[n];
   for(int i=0;i<n;i++)
   {
       cin>>a[i];
   }
  for(int i=0;i<n;i++)
   {
      for(int j=i;j<n;j++)
   {
        for(int k=i;k<j;k++)
   {
       
       cout<<"[ "<<a[k]<<" ] ";
   }
       cout<<endl;

   }
   }

   

    return 0;
}
