//PROBLEM LINK -- https://www.codingninjas.com/studio/problems/pattern-triangle-of-numbers_893293

#include <iostream>
#include <string>
#include <vector>
using namespace std;


//function to create this triangle pattern
/*
        1
       232
      34543
     4567654
*/
vector<string> TrianglePattern(int n)
{
    vector<string> arr;
    int k = 1;
    for (int i = 0; i < n; i++)
    { 
        string str = "";
        for (int s = 0; s < n-i-1; s++){
            str += " ";  
        }

        for (int j = 0; j <= i; j++){
            str += to_string(k+j);
        }
        k++;
       
        int p = i*2;
        for (int  j = 0; j < i; j++){
            str += to_string(p);
            p--;
        }

        arr.push_back(str);
    }

    return arr;
}

int main() {
    int n;
    
}

