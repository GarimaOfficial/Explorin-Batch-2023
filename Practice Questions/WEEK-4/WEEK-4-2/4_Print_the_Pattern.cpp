//PROBLEM LINK -- https://www.codingninjas.com/studio/problems/print-the-pattern_893299

#include <iostream>
#include<string>
#include<vector>
using namespace std;

//function to print the number pattern
/*
    1 2 3 3 4 5
    11 12 13 14 15
    21 22 23 24 25
    16 17 18 19 20
    6 7 8 9 10
*/
vector <string> printPattern(int n)
{
	vector<string>num ;
	int a = 1, s=0,  e=n-1;
	int arr[n][n];

	
	for (int i = 0; i<n; i++)
	{
		if (i%2 == 0){
			for (int j = 0; j<n; j++) {
				arr[s][j] = a;
				a++;
			}
			s++;

		}
		else{
			for (int j = 0; j<n; j++) {
				arr[e][j] = a;
				a++;
			}
			e--;
		}
		
	}

	for (int p = 0; p < n; p++)
	{
		string ans = "";
		for (int j = 0; j < n; j++)
		{
			ans = ans + to_string(arr[p][j]) + " ";
		}
		num.push_back(ans);
	}
	return num;
}


int main() {
    int  n;
    cout << "Enter the size of pattern :" << endl;
    cin >> n;

    vector <string> number = printPattern(n);;

    cout << "Generated pattern is:" << endl;
    for(auto row : number){
        cout << row << endl;
    }

    return 0;
}