#include <iostream>
#include <bits/stdc++.h>
using namespace std;

pair<int, int> run(vector<vector<int>> arr)
{
    set<pair<int, pair<int, int>>> s;

    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = 0; j < arr[i].size(); j++)
        {
            bool zeroBetween = false;
            if (arr[i][j] == 1)
            {
                int k = i;
                int l = j;
                while (l < arr[i].size() && arr[i][l] != 0)
                {
                    l++;
                }
                while (k < arr.size() && arr[k][j] != 0)
                {
                    k++;
                }
                if (l == arr.size())
                {
                    --l;
                }
                if (k == arr.size())
                {
                    --k;
                }
                int a;
                k = k - i;
                l = l - j;
                if (k < l)
                {
                    l = k;
                }
                else
                {
                    k = l;
                }
                a = k;
                for (k; k < arr.size();k++)
                {
                    for (l; l < arr[k].size();l++)
                    {
                        if (arr[k][l] == 0)
                        {
                            if (l == 0)
                            {
                                if (k - 1 > l)
                                {
                                    s.insert({l*l, {i,j}});
                                }
                                else
                                {
                                    s.insert({k-1*k-1, {i,j}});
                                }
                            }
                            else
                            {
                                if (l - 1 > k)
                                {
                                    s.insert({k*k, {i,j}});
                                }
                                else
                                {
                                    s.insert({l-1*l-1, {i,j}});
                                }
                            }
                            zeroBetween = true;
                        }
                    }
                }
                if (!zeroBetween)
                {
                    s.insert({a*a, {i,j}});
                }
            }

        }
    }
    pair<int, pair<int,int>> p = *s.begin();
    return p.second;
}

int main(int argc, char const *argv[])
{

    vector<vector<int>> arr = 
    {
        {1,1,1,1},
        {0,1,1,1},
        {0,1,1,1},
        {1,1,1,1}
    };

    pair<int, int> p = run(arr);
    cout << p.first << " " << p.second;

    return 0;
}