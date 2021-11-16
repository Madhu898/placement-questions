/*  TO REPLACE A PERTICULAR WORD  IN A SENTENCE 

    input  : 
             hey madhu how are you
             hey  (sub - > substring which has to be replaced in string )
             hi   (rep - > the replacing string )
    output : 
             hi madhu how are you
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    system("cls");
    string s,sub,rep;    
    getline(cin,s);
    cin>>sub>>rep;
    s.replace(s.find(sub),sub.length(),rep);
    cout<<s<<endl;    
    return 0;
}
