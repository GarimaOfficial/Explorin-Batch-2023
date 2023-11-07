//PROBLEM LINK -- https://www.codingninjas.com/studio/problems/ninja-and-the-star-pattern-i_6581920

#include <iostream>
using namespace std;

//function to print the star pattern

// ****
// *  *
// ****

void getStarPattern(int n) {    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if ((i == 0 || i == n -1) || (j == 0 || j == n-1))
            cout << "*" ;
            else {
                cout << " " ;
            }
        }
        cout<<endl;
    }
}

int main() {
    int n ;
    cin >> n;
    getStarPattern(n);
}