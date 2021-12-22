#include <bits/stdc++.h>
using namespace std;

string prefix(string one, string two)
{
    string final;
    int n = one.size(), m = two.size();
    for (int i = 0, j = 0; i < n && j < m; i++, j++)
    {
        if (one[i] != two[i])
            break;
        else
        {
            final.push_back(one[i]);
        }
    }
    return final;
}

int main()
{
    int n;
    cin >> n;
    vector<string> ans(n);
    for (int i = 0; i < n; i++)
    {
        cin >> ans[i];
    }
    string compute = ans[0];
    for (int i = 1; i < n; i++)
    {
        compute = prefix(compute, ans[i]);
    }
    cout << compute << endl;
    return 0;
}