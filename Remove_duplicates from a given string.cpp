                                                  /*Remove duplicates in strings 
                                                  
                                                  input  =  mmmaaddhusudhhh
                                                  output =  madhus
                                                  */



#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s,result="";
    cin>>s;
    int hash[256]={0};
    for(int i=0;i<s.length();i++)
    {
        if(hash[s[i]]==0)
        {
            hash[s[i]]=1;
            result=result+s[i];
        }

    }
    cout<<result<<endl;
return 0;
}
