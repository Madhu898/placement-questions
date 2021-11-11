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
    int hash[26]={0};//making all the values in frequency arrar to 0
    for(int i=0;i<s.length();i++)
    {
        if(hash[s[i]-'a']==0)//checking the first occurace of the element
        {
            cout<<s[i];
            hash[s[i]-'a']=1;
            
        }

    }
    
return 0;
}
