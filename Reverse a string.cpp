#include<bits/stdc++.h>
#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s;
    int l;
    cout<<"enter an string "<<endl;
    getline(cin,s);
    l=s.length();
    for(int i=l;i>=0;i--)
    { 
        cout<<s[i]<<" ";
    }
    return 0;
}
