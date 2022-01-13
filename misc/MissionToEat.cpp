#include <bits/stdc++.h>
using namespace std;

int main()
{
    ifstream f("mission.in");
    int T;
    f >> T;
    while (T--)
    {
        int n, m, k, l;
        f >> n >> m >> k >> l;
        vector<vector<int>> grid(n, vector<int>(m, 0));
        vector<vector<int>> solution(n, vector<int>(m, 0));

        while (k--)
        {
            int i, j;
            f >> i >> j;
            grid[i - 1][j - 1] = 1;
        }

        if (l == 0)
        {
            if (grid[0][0] == 0)
            {
                solution[0][0] = 1;
            }
            for (int i = 1; i < n; i++)
            {
                if (grid[i][0] == 0)
                {
                    solution[i][0] = solution[i - 1][0];
                }
            }
            for (int j = 1; j < m; j++)
            {
                if (grid[0][j] == 0)
                {
                    solution[0][j] = solution[0][j - 1];
                }
            }
            for (int i = 1; i < n; i++)
            {
                for (int j = 1; j < m; j++)
                {
                    if (grid[i][j] == 0)
                        solution[i][j] = solution[i - 1][j] + solution[i][j - 1];
                }
            }
            cout << solution[n - 1][m - 1] << endl;
        }
        else
        {
            while (l--)
            {
                int i, j;
                f >> i >> j;
                grid[i - 1][j - 1] = 2;
            }
            if (grid[0][0] == 0 || grid[0][0] == 2)
            {
                solution[0][0] = 1;
            }
            for (int i = 1; i < n; i++)
            {
                if (grid[i][0] == 0 || grid[i][0] == 2)
                {
                    solution[i][0] = solution[i - 1][0];
                }
            }
            for (int j = 1; j < m; j++)
            {
                if (grid[0][j] == 0 || grid[0][j] == 2)
                {
                    solution[0][j] = solution[0][j - 1];
                }
            }
            for (int i = 1; i < n; i++)
            {
                for (int j = 1; j < m; j++)
                {
                    if (grid[i][j] == 0 || grid[0][0] == 2)
                        solution[i][j] = solution[i - 1][j] + solution[i][j - 1];
                }
            }
            cout << solution[n - 1][m - 1] << endl;
        }
    }
    return 0;
}