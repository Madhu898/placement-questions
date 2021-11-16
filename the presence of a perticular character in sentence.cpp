/*
    PRESENCE OF CHARACTER ' A ' IN THE 2 POSITION OF A WORD IN A STRING
    input  : ja fds ia nsjnsj ua
    output : 3
*/


#include<bits/stdc++.h>
using namespace std;
int main()
{
    system("cls");
    string s;
    int i=0,res=0;
    getline(cin,s);
    while(s[i]!='\0')
    {
        int count =0;
        while(s[i]!=' ')
        {
            count++;
            if(count==2&&s[i]=='a')
            {
               res++;
            }  
            i++;       
        }
        i++;
    }
 cout<<res<<endl;
         
    return 0;
}
