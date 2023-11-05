//PROBLEM LINK -- https://www.codingninjas.com/studio/problems/all-prime-numbers_624970


#include <iostream>
using namespace std;

//function to check prime
bool isPrime (int n){
    if (n == 1)
    {
        return false;
    }

    for(int i = 2; i*i <= n; i++){  
        if(n % i == 0){   
            return false;  
        } 
	}
}

int main()
{
	int n;
	cin >> n;
	int c = 2;
	while (c <= n)
	{
		if (isPrime(c))
		{
			cout << c << endl;
		}
		c++;
	}

    return 0;
}



