#include <bits/stdc++.h>

using namespace std;



int main()
{
   int n;
   
    // Write your code here
    
    string number[] = {"one","two","three","four","five","six","seven","eight","nine"};

    cin >>n;
    if (n>=1 && n<=9){
        cout << number[n-1];
    } else {
    cout << "Greater than 9";
    }


    return 0;
}

