/*
                                                  input= mmmaaddhhhzzqq
                                                  output =
                                                            m3
                                                            a2
                                                            d2
                                                            h3
                                                            z2
                                                            q2
*/




#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main()
{
    system("cls");
    string s;
    cin>>s;
    int freq[26]={0},l;
    l=s.length();
    for(int i=0;i<l;i++)
    {
        freq[s[i]-'a']++;
    }
    for(int i=0;i<l;i++)
    {
        if (freq[s[i]-'a']!=0)
        {
            cout<<s[i]<<freq[s[i]-'a']<<endl;
            freq[s[i]-'a']=0; // for repeating elements 
        }
    }

    
    return 0;
}
