//PROBLEM LINK -- https://www.codingninjas.com/studio/problems/number-pattern-1_893187

#include <bits/stdc++.h> 
using namespace std;

//function to print the pattern
//      1
//      11
//      111
//      1111

void printPattern(int n) {
	for (int i =0; i<n; i++){
		for (int j = 0; j<=i; j++){
			cout<<"1";
		}
		cout<<endl;
	}
}

int main (){
    int n;
    cin >> n;
    printPattern(n);

    return 0;
}