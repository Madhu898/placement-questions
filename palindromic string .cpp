/*
input 1 :
    enter the word  
    mam
output 1 :
    its an palindrome

input 2 :
    enter the word 
    jockey
output 2 :
    its not a palindrome 
*/ 
#include<iostream>
#include<string>
using namespace std;
int main()
{
   system("cls");
   string s;
   cout<<"enter the word ";
   getline(cin,s);
  int n=s.length(),check=1;
   for(int i=0;i<s.length();i++)
   {
       if(s[i]!=s[n-i-1])
       {
         check=0;
       }
   }
   if(check==1)
    {
        cout<<"palindrome "<<endl;
    }
    else
         {
              cout<<"not a palindrome "<<endl;
        }
   return 0;
}
