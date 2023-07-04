#include<iostream>
#include<utility>

using namespace std;

int main()
{
    pair<int, char> p1;
    pair<int, char> p2(2, 'b');
    pair<int, char> p3(p2);
    pair<int, char> p4 = make_pair(4, 'd');
    pair<int, int> p5 = {1, 2};
    cout << p1.first << " " << p1.second << endl;
    cout << p2.first << " " << p2.second << endl;
    cout << p3.first << " " << p3.second << endl;
    cout << p4.first << " " << p4.second << endl;

    return 0;
}
