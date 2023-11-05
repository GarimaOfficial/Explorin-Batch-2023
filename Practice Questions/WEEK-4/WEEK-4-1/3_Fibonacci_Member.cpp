//PROBLEM LINK -- https://www.codingninjas.com/studio/problems/fibonacci-number_1589?leftPanelTab=0


#include<iostream>
using namespace std;

//function to check whether the number is a member or not
bool checkMember(int n){
    int a = 0, b =1, c;

    if(n == 0 || n == 1 || n == 2)
        return true;

    for(int i = 2; i<=n; i++)
    {
        c = a+b;
        a = b;
        b = c;

        if (c == n)
        {
            return true;
        }    
    }
    return false;
}


int main(){

    int n; 
    cin >> n ;

    if(checkMember(n))
    {
        cout << "true" << endl;
    }
    else
    {
        cout << "false" << endl;
    }

}