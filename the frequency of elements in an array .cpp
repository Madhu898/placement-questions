/*
input 1 :
10  --> of elements in an array 
10 10 20 35 55 35 20 55 99 91  -->spaced array elments
output 1 :
10 2
20 2
35 2
55 2
99 1
91 1

input 2 :
6
10 20 10 20 40 40

output 2 :
          10 2
          20 2
          40 2
*/

#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int main()
{
    system("cls");
    int n;
    cin>>n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        if (a[i] == -1)
        {
            continue;
        }
        int count = 1;
        for (int j = i + 1; j < n; j++)
        {
            if (a[j] == a[i])
            {
                count++;
                a[j] = -1;
            }
        }
        cout << a[i] << " " << count << endl;
    }
    return 0;
}
