/*
    input  = 
            cat
            tac

    output =
            anagrams

*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    system("cls");
    string s1,s2;    
    int f1[26]={0},f2[26]={0},flag=1;
    cin>>s1>>s2;
    if(s1.length()!=s2.length())
    {
        cout<<"NoT anagrams "<<endl;
        return 0;
    }
    else 
    {
        for(int i=0;i<s1.length();i++)
            {
                f1[s1[i]-'a']++;
            }
       for(int i=0;i<s2.length();i++)
            {
                f2[s2[i]-'a']++;
            }
            for(int i=0;i<26;i++)
            {
               if( f1[i]!=f2[i])
               {
                   flag=0;
                   break;
               }
            }
    }
    if(flag)
    {
        cout<<"anagrams "<<endl;
    }
    else
    {
        cout<<"not anagrams"<<endl;
    }

    return 0;
}
