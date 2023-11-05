//PROBLEM LINK -- https://www.codingninjas.com/studio/problems/fahrenheit-to-celsius_1115673?leftPanelTab=0

#include<iostream>
using namespace std;

int main() {
    int s, e, w; 
    int val;
    cin >> s >> e >> w;
    for (int i=s; i<=e;){
        val = (5*(i-32))/9;
        cout << i << " " << val;
         i = i + w;
         cout << endl;
    }
    return 0;
}