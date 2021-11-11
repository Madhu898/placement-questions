/*Remove duplicates in strings 
     input  =  mmmaaddhusudhhh
     output =  madhus
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    
    system("cls");
    string s;
    cin>>s;
    int hash[256]={0};
    for(int i=0;i<s.length();i++)
    {
        if(hash[s[i]]==0)
        {
            cout<<s[i];
            hash[s[i]]=1;
            
        }

    }
    
return 0;
}
