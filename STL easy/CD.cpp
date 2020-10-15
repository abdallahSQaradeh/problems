#include <iostream>
#include <set>
using namespace std;
int main()
{
    pair<set<int>::iterator, bool> flag;
    int count = 0;
    int M, N;
    int CD_copy;
    while (cin >> M >> N && M != 0 && N != 0)
    {
        count = 0;
        set<int> CDs;
        while (M--)
        {
            cin >> CD_copy;
            flag = CDs.insert(CD_copy);
            if (!flag.second)
            {
                count++;
            }
        }
        while (N--)
        {
            cin >> CD_copy;
            flag = CDs.insert(CD_copy);
            if (!flag.second)
            {
                count++;
            }
        }
        cout << count << endl;
    }

    return 0;
}