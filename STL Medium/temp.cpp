#include "stdc++.h"
using namespace std;

int main()
{
#ifndef ONLINE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w+", stdout);
#endif
    string s, ss;
    char ch;
    int sl = 1;
    queue<string> q;
    map<string, int> mp;
    for (ch = 'a'; ch <= 'z'; ch++)
    {
        s = ch;
        q.push(s);
    }
    int t = 83700;
    while (t--)
    {
        ss = q.front();
        for (ch = ss[ss.size() - 1] + 1; ch <= 'z'; ch++)
        {
            s = ss;
            s += ch;
            q.push(s);
        }
        mp[ss] = sl;
        sl++;
        q.pop();
    }
    map<string, int>::iterator it;
    while (cin >> s)
    {
        it = mp.find(s);
        if (it != mp.end())
        {
            cout << mp[s] << endl;
        }
        else
            cout << 0 << endl;
    }
    return 0;
}