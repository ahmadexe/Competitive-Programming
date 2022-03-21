#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void minimumCoins(int amount)
{
    vector<int> cash = {5,10,20,50,100,500,1000};
    vector<int> answer;
    if (amount < cash[0])
    {
        cout<<"Amount too small";
    }
    else
    {
        int i = 1;
        int j = 0;

        while (amount > 0)
        {
            while (i != cash.size() && (cash[i] <= amount))
            {
                i++;
                j++;
                //cout<<cash[i]<<endl;
            }

            amount = amount - cash[j];
            answer.push_back(cash[j]);
            i = 1;
            j = 0;
            
        }
        

        cout<<"Number of coins: "<<answer.size()<<endl;
    }
}

int main(int argc, char const *argv[])
{

    minimumCoins(10000);   

    return 0;
}