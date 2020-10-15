#include <iostream>
#include <string>
using namespace std;
int main()
{
    string input;
    char searchfor = ' ';
    bool flag = 0;
    int cases = 1, queries, begin, end;
    while (cin >> input)
    {
        cases = 1;
        cin >> queries;
        while (queries--)
        {
            cin >> begin >> end;
            if (begin > end)
            {
                begin = begin + end;
                end = begin - end;
                begin = begin - end;
            }
            flag = 0;
            searchfor = input[begin];
            for (int i = begin; i <= end; i++)
            {
                if (input[i] == searchfor)
                    continue;
                flag = 1;
                break;
            }
            cout << "Case " << cases++ << ":" << endl;
            if (flag == 0)
                cout << "Yes" << endl;
            else
            {
                cout << "No" << endl;
            }
        }
    }

    return 0;
}