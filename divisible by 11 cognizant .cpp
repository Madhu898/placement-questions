/*                LARGEST NUMBER DIVISIBLE BY 11 (NOT USING MODULUS 

      input 1  = 3435346456547566345436457867978
     output 1  = 4
*/
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    system("cls");
    string s;
    cin>>s;
    int num=0,rem=0;
    for(int i=0;i<s.length();i++)
    {
        num=rem*10+(s[i]-'0');
        rem=num%11;
    }
    cout<<rem<<endl;

    return 0;
}
