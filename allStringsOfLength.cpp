#include<iostream>
#include<bits/stdc++.h>
using namespace std;
 
void print(char set[], string prefix ,int n, int k) {
    if (k == 0) {
        cout << prefix << endl;
        return;
    }
    for (int i = 0; i < n; i++) {
        string newprefix;
        newprefix = prefix + set[i];
        print(set, newprefix ,n, k-1);
    }
}
 
int main(int argc, char const *argv[])
{
    char set[] = {'a', 'b'};
    print(set, "" ,2, 3);
 
    return 0;
}