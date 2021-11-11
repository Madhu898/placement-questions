/* number of the distinct words in the strings
input 1   = mmaaaddhhuu
output 1 = 5 (madhu -> distinct words )

input 2  = geeksforgeeks
output 2 = 7 (geksfor -> distinct words )
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    
    system("cls");
    int count =0;
    string s;
    cin>>s;
    int hash[26]={0};
    for(int i=0;i<s.length();i++)
    {
        if(hash[s[i]-'a']==0)
        {
            count++;
            cout<<s[i];
            hash[s[i]-'a']=1;            
        }

    }
    cout<<count<<endl;
    
return 0;
}
