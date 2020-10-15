#include <iostream>
#include <iterator>
#include <sstream>
#include <string>
#include <set>
#include <vector>
using namespace std;
void converToSmall(set<string> dic)
{
    set<string>::iterator dic_it;
    dic_it = dic.begin();
    string temp;
    char *t;
    while (dic_it != dic.end())
    {
        temp = *dic_it;
        t = new char[temp.length()];
        int j = 0;
        for (int i = 0, j = 0; temp[i]; i++)
        {
            if (temp[i] >= 'A' && temp[i] <= 'Z')
            {
                temp[i] = temp[i] + 32;
                t[j] = temp[i];
                j++;
            }
            else if (temp[i] >= 'a' && temp[i] <= 'z')
            {
                t[j] = temp[i];
                j++;
            }

            else
            {
                continue;
            }
            dic_it++;

            // cout << t << endl;
        }
        t[++j] = '\0';
    }
}
int main()
{

    freopen("output.txt", "w+", stdout);
    if (freopen("input.txt", "r", stdin) != NULL)
    {

        string line;
        set<string> dic_results;
        while (cin >> line)
        {

            if (line[0] != '\n')
            {

                istringstream iss(line);
                vector<string> results(istream_iterator<string>{iss},
                                       istream_iterator<string>());
                int k = 0;
                while (k < results.size())
                {
                    dic_results.insert(results[k]);
                    // cout << results[k] << endl;
                    k++;
                }
            }
        }
        cout << dic_results.size() << endl;
        converToSmall(dic_results);
        set<string>::iterator dic_it = dic_results.begin();
        while (dic_it != dic_results.end())
        {
            cout << *dic_it << endl;
            dic_it++;
        }
    }
    else
    {
        cout << "not able to open" << endl;
    }

    return 0;
}