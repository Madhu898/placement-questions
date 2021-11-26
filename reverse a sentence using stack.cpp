/* 
                    input  :  
                              madhu is a good boy
                    output :  
                              boy good a is madhu
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    system("cls");
    stack <string>st;
    string s ;
    getline(cin,s);
    int i=0;
    while(s[i]!='\0'&&i<s.length())
    {
       string word="";
       while(s[i]!=' '&&i<s.length())
       {
           
          word=word+s[i];
          i++;
       }
       st.push(word);
       i++;
       
    }
   while(!st.empty())
   {
       cout<<st.top()<<" ";
       st.pop();
   }    
    return 0;
}
