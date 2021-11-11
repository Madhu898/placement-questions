/*
Sample Input 1:

11
1 2 3 4 5 4 3 2 1 3 4

Sample Output 1 :
3

Explanation 1 :

The different types of birds occur in the following frequencies:
(frequency of numbers in an array )
Type : 1  -> 2
Type : 2  -> 2
Type : 3  -> 3
Type : 4  -> 3
Type : 5  -> 1
Two types (3 and 4 ) have a frequency of 3, and the lower of those (3 and 4 ) is type 3.
*/
#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main()
{
    int n,min=9999,max=0,freq[10]={0};
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<n;i++)
    {
        freq[a[i]]++;
        max=(max>freq[a[i]])?max:freq[a[i]];
        
    }
    for(int i=0;i<10;i++)
    {
        if(freq[i]==max)
        {
            min=(min<i)?min:i;
        }
    }
    cout<<min<<endl;
    return 0;
}
