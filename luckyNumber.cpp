#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{

    int t;
    cin >> t;
    while (t--)
    {
        vector<int> v;
        int n, bob, alice;
        cin >> n >> bob >> alice;
        for (int i = 0; i < n; i++)
        {
            int value;
            cin >> value;
            v.push_back(value);
        }

        for (int i = 0; i < v.size(); i++)
        {
            if (v[i] % bob == 0 && v[i] % alice == 0)
            {
                v.erase(v.begin() + i);
            }
        }

        for (int a : v)
        {
            cout << a << " ";
        }
        cout << endl;

        int sum = 0;
        int d = 0;
        int z = 0;

        do
        {
            if (z % 2 == 0)
            {
                d = alice;
            }
            else
            {
                d = bob;
            }

            sum = 0;
            int i = 0;
            while (sum == 0 && i < v.size())
            {

                if (v[i] % d == 0)
                {
                    sum++;
                    v.erase(v.begin() + i);
                }
                i++;
                cout << endl;
            }
            z++;
        } while (sum != 0);

        if (d == alice)
        {
            cout << "BOB" << endl;
        }
        else
        {
            cout << "ALICE" << endl;
        }
        v.clear();
    }
    return 0;
}