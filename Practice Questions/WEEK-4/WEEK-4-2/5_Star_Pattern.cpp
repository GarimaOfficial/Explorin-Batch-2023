//PROBLEM LINK -- https://www.codingninjas.com/studio/problems/star-pattern_893204

#include <iostream>
using namespace std;

//function to print the star pattern
/*
         *
        ***
       *****
*/
void printPattern(int n) {
	for (int i = 0; i<n; i++){
		for (int s = 1 ; s<n-i; s++){
			cout <<" ";
		}
		
		int num = 2*i+1;

		for (int j = 0; j<num; j++){
			cout << "*";
		}
		cout << endl;
	}

}

int main() {
    int n;
    cout << "Enter the size of pattern:" << endl;
    cin >> n;

    cout << "Generated pattern is:" << endl;
    printPattern(n);

    return 0;
}