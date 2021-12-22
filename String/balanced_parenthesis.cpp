#include <bits/stdc++.h>
using namespace std;

bool isBalanced(string check)
{
    stack<int> st;

    for (int i = 0; i < check.size(); i++)
    {
        if (check[i] == '(' || check[i] == '{' || check[i] == '[')
        {
            st.push(check[i]);
        }
        else
        {
            if (check[i] == '}')
            {
                if (st.top() == '{')
                {
                    st.pop();
                    continue;
                }
                else
                    return false;
            }
            else if (check[i] == ']')
            {
                if (st.top() == '[')
                {
                    st.pop();
                    continue;
                }
                else
                    return false;
            }
            else if (check[i] == ')')
            {
                if (st.top() == '(')
                {
                    st.pop();
                    continue;
                }
                else
                    return false;
            }
        }
    }
    return (st.empty());
}

int main()
{
    string check;
    cin >> check;

    if (isBalanced(check))
        cout << "Balanced" << endl;
    else
        cout << "Not balanced" << endl;
    return 0;
}