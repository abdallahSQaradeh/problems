#include <iostream>
#include <vector>
using namespace std;
void checkParity(int **a, int sz)
{
    int x[2];
    int count_row = 0;
    int count_col = 0;
    for (int i = 0; i < sz; i++)
    {
        if (a[i][0] & 1)
        {
            count_row++;
            x[0] = i;
        }

        if (a[i][1] & 1)
        {
            count_col++;
            x[1] = i;
        }
    }
    if (count_row == 1 && count_col == 1)
    {
        cout << "Change bit (" << x[0] + 1 << "," << x[1] + 1 << ")" << endl;
    }
    else if (count_row > 1 || count_col > 1)
    {
        cout << "Corrupt" << endl;
    }
    else
    {
        cout << "OK" << endl;
    }
}
int main()
{
    int **summation;
    int **matrix;
    int n;
    int testcases;

    while (cin >> n && n != 0)
        if (n != 0)
        {
            matrix = new int *[n];
            summation = new int *[n];
            for (int i = 0; i < n; i++)
            {
                matrix[i] = new int[n];
                summation[i] = new int[2];
            }

            for (int k = 0; k < n; k++)
                for (int y = 0; y < n; y++)
                    cin >> matrix[k][y];
            int sum_r = 0, sum_c = 0;
            for (int i = 0, j = 0; i < n; i++, j++)
            {
                sum_r = 0;
                sum_c = 0;
                int r = i, c;
                for (c = 0; c < n; c++)
                {
                    sum_r += matrix[r][c];
                }
                c = j;
                for (r = 0; r < n; r++)
                {
                    sum_c += matrix[r][c];
                }
                summation[i][0] = sum_r;
                summation[i][1] = sum_c;
            }
            checkParity(summation, n);
        }

    return 0;
}