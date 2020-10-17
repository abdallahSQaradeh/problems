#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;
bool compareInterval(pair<int, int> p1, pair<int, int> p2)
{
    return (p1.first < p2.first);
}
int main()
{
#ifndef ONLINE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w+", stdout);
#endif

    int N, p, info;

    int *visited;

    while (cin >> N && N != 0)
    {

        bool flag = 0;
        int i = 1;
        visited = new int[N + 1]{0};
        vector<pair<int, int>> positions_before;
        vector<pair<int, int>> positions_after;
        positions_before.push_back(make_pair(0, 0));
        positions_after.push_back(make_pair(0, 0));
        while (N--)
        {
            cin >> p >> info;
            positions_before.push_back(make_pair(p, info));
        }
        int size = positions_before.size();
        int position;
        for (i = 1; i < positions_before.size(); i++)
        {
            position = i + positions_before[i].second; //index : current position , first : car ,  second : positions(won or lose )

            if ((position < 1) || (position > (size - 1)) || visited[position] != 0)
            {
                flag = 1;
                break;
            }
            else
            {
                /* code */
                positions_after.push_back(make_pair(position, positions_before[i].first));
                visited[i + positions_before[i].second] = 1;
            }
        }

        if (flag)
        {
            cout << -1 << endl;
        }
        else
        { //3 2 1 5 6 7 4
            sort(positions_after.begin(), positions_after.end());
            for (int y = 1; y < positions_after.size(); y++)
            {
                cout << positions_after[y].second;
                (y != positions_after.size() - 1) ? cout << " " : cout << endl;
            }
        }
    }

    return 0;
}