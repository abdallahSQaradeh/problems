#include <iostream>
#include <string>
#include <limits>
using namespace std;
void print(char **matrix, int size)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}
int main()
{

    int cases, N;
    char **matrix;

    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w+", stdout);
    cin >> cases;
    string line;
    cout << cases;
    while (cases--)
    {
        cin >> N;

        matrix = new char *[N];

        //read matrix values
        for (int i = 0; i < N; i++)
        {
            matrix[i] = new char[N + 1];
            getline(cin, line);
            int l = 0;
            for (; l < N; l++)
            {
                matrix[i][l] = line[l];
            }
            matrix[i][l] = '\0';
        }
        print(matrix, N);

        //cin.ignore(numeric_limits<streamsize>::max(), '\n'); //clear buffer before taking new
    }
}