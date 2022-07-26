#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int greaterVal(int a, int b)
{
    if (a > b)
    {
        return a;
    }
    return b;
}

int solve(int a, int b, int n) {

    if (a == b) {
        return -1;
    }

    if (a % b == 0) {
        return -1;
    }

    n = greaterVal(a, n);

    for (int i = n; i < 1e9; i++) {
        if (i % a == 0 && i % b != 0) {
            return i;
        }
    }

    return -1;
}

int main(int argc, char const *argv[])
{

   int t;
   cin >> t;
   while (t--) {
         int a, b, n;
         cin >> a >> b >> n;
         cout << solve(a, b, n) << endl;
   }


    return 0;
}