//PROBLEM LINK -- https://www.codingninjas.com/studio/problems/nth-fibonacci-number_74156

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, a = 0, b = 0, c = 1;
    cin >> n;
    if(n >= 0) b = 0;
    if(n >= 1) b = 1;

    for(int i = 2; i <= n; i++){
        c = a+b;
        a = b;
        b = c;
    }
    cout<<c<<endl;
}