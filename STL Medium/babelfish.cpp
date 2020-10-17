#include <iostream>
#include <string>
#include <map>
#include <set>
#include <vector>
#include <iterator>
#include <sstream>
using namespace std;
int main()
{
#ifndef ONLINE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w+", stdout);
#endif
    map<string, string> dic;
    string line;
    while (getline(cin, line))
    {
        if (line.length() != 0)
        {
            istringstream iss(line);
            vector<string> results((istream_iterator<string>(iss)),
                                   istream_iterator<string>());
            dic.insert({results[1], results[0]});
        }
        else
            break;
    }
    map<string, string>::iterator itr;
    vector<string> words;
    while (getline(cin, line))
    {
        words.push_back(line);
    }
    for (string s : words)
    {
        itr = dic.find(s);
        if (itr != dic.end())
        {

            cout << itr->second << endl;
        }
        else
            cout << "eh" << endl;
    }

    return 0;
}