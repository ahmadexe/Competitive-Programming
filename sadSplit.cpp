#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void sad(int number)
{
    int evenOrOdd = (number%10)%2;
    number = number/10;
    bool flag = false;
    while (number)
    {
        if ((number%10)%2 == evenOrOdd)
        {
            flag = true;
            break;
        }
        number = number / 10;
    }
    if (flag)
    {
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }
    
}

int main(int argc, char const *argv[])
{

    sad(431);


    return 0;
}