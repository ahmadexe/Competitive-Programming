#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int money(vector<int> v)
{
    sort(v.begin(), v.end());
    set<int> s(v.begin(), v.end());
    if (s.size() == v.size())
    {
        if (v.size() == 0)
        {
            return 0;
        }
        else if (v.size() == 1)
        {
            return 1;
        }
        else
        {
            int minimumMoney = INT_MAX;
            int currentMin = 1;
            int i = -1;
            int j = 0;
            while (j < v.size())
            {
                j++;
                i++;
                if (v[j] - v[i] != 1 || j == v.size())
                {
                    if (currentMin < minimumMoney)
                    {
                        minimumMoney = currentMin;
                        currentMin = 1;
                    }
                }
                else
                {
                    currentMin++;
                }
            }
            return minimumMoney;
        }
    }
    else
    {
        // cout<<"HEHE";
        vector<int> all;
        set<int> mainSet;

        for (int a = 0; a < v.size(); a++)
        {
            if (count(v.begin(), v.end(), v[a]) > 1)
            {
                mainSet.insert(v[a]);
            }
        }

        int minimumMoney = INT_MAX;
        int currentMin = 1;
        int i = -1;
        int j = 0;
        while (j < v.size())
        {
            j++;
            i++;
            if (v[j] - v[i] != 1 || j == v.size())
            {
                if (currentMin < minimumMoney)
                {
                    minimumMoney = currentMin;
                    currentMin = 1;
                }
            }
            else
            {
                currentMin++;
            }
        }
        //return minimumMoney;
        // Unsolved.

        for (int sx : mainSet)
        {
            int forIn = sx;
            int chonks = 0;
            for (int x = 0; x < v.size(); x++)
            {
                // cout<<"OKOK";
                if ((v[x] - forIn) == 1)
                {
                    chonks++;
                    forIn += 1;
                    cout<<"here "<<chonks<<endl;
                    cout<<"here "<<forIn<<endl;
                }
                else 
                {
                    cout<<"There "<<chonks<<endl;
                    cout<<"There "<<forIn<<endl;
                    all.push_back(chonks);
                    forIn = sx;
                    chonks = 0;
                }
            }
            all.push_back(chonks);
        }
        all.push_back(minimumMoney);
        return *(max_element(all.begin(),all.end()));
        // Unsolved for multiple same vals
    }
}

int main(int argc, char const *argv[])
{

    vector<int> v = {101, 102, 103, 103, 104, 104, 105, 106};
    cout << money(v);

    return 0;
}