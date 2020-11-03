#include <vector>
#include <algorithm>
#include <iostream>
#include <string>
#include <math.h>
using namespace std;
int main()
{
#ifndef ONLINE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w+", stdout);
#endif
    int N;
    int *numbers;

    while (cin >> N && N != 0)
    {
        numbers = new int[N];
        int i = 0;
        int temp_n = N;
        while (N--)
        {
            cin >> numbers[i];
            i++;
        }
        vector<string> added_number;
        string sum = "";
        sort(numbers, numbers + temp_n);
        do
        {
            sum = "";
            for (int k = 0; k < temp_n; k++)
            {
                sum += to_string(numbers[k]);
            }
            added_number.push_back(sum);
            // cout << sum << endl;
        } while (next_permutation(numbers, numbers + temp_n));
        string max = added_number[0];
        for (int u = 1; u < added_number.size(); u++)
        {
            if (max.compare(added_number[u]) < 0)
                max = added_number[u];
        }
        cout << max << endl;
    }
    return 0;
}