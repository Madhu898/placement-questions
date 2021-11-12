/*
 input 1 :
    enter an number 
    1221
output 1 :
    palindrome 
input 2 :
    enter an number 
    5656    
output 2 :
    not palindrome
*/  
#include<bits/stdc++.h>
#include<iostream>
#include<string>
using namespace std;
int main()
{
    system("cls");
    int n,temp=0,rem=0,rev=0;
    cout<<"enter an number "<<endl;
    cin>>n;
    temp=n;
    while (n!=0)   // to reverse the number 
    {
        rem=n%10;
        rev=rev*10+rem;
        n=n/10;
    }
    if(temp==rev)
    {
        cout<<"its an palindrome "<<endl;

    }
    else
    {
        cout<<"sorry its not an palindrome "<<endl;
               
    }
    
    return 0;

}
