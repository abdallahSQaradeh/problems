#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
using namespace std;
int main()
{

    int no_station, station;

    set<int>::iterator s_it, s_it2;
    while (cin >> no_station && no_station != 0)
    {
        set<int> _stations;
        while (no_station--)
        {
            cin >> station;
            _stations.insert(station);
        }
        s_it = _stations.begin();
        int las_station;
        int flag = 0;

        s_it++;
        s_it2 = _stations.begin();

        for (; s_it != _stations.end(); s_it++, s_it2++)
        {
            if (*s_it - 200 <= *s_it2)
            {
                continue;
            }
            else
            {
                flag = 1;
                break;
            }
        }
        if (flag == 1)
            cout << "IMPOSSIBLE" << endl;
        else
        {
            s_it = --_stations.end();
            //cout << "last station " << *s_it << endl;
            if ((1422 - *s_it) < 100)
                cout << "POSSIBLE" << endl;
            else
            {
                cout << "IMPOSSIBLE" << endl;
            }
        }
    }

    return 0;
}