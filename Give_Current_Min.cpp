#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    priority_queue<int, vector<int>, greater<int>> current_Min(arr.begin(), arr.end());

    int query;
    cin >> query;
    cin.ignore();

    while (query--)
    {
        string str;
        getline(cin, str);
        stringstream ss(str);
        int command;
        ss >> command;
        if (command == 0)
        {
            int value;
            ss >> value;
            current_Min.push(value);
            cout << current_Min.top() << endl;
        }

        else if (command == 1)
        {
            if (current_Min.empty())
            {
                cout << "Empty" << endl;
            }
            else
            {
                cout << current_Min.top() << endl;
            }
        }

        else if (command == 2)
        {
            if (current_Min.empty())
            {
                cout << "Empty" << endl;
            }
            else
            {
                current_Min.pop();
                if (current_Min.empty())
                {
                    cout << "Empty" << endl;
                }
                else
                {
                    cout << current_Min.top() << endl;
                }
            }
        }
    }

    return 0;
}