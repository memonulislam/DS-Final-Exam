#include <bits/stdc++.h>
using namespace std;

bool cmp(pair<string, int> left, pair<string, int> right)
{
    if (left.first == right.first)
    {
        return left.second > right.second;
    }

    return left.first < right.first;
};

int main()
{

    int n;
    cin >> n;

    vector<pair<string, int>> arr(n);

    for (int i = 0; i < n; i++)
    {
        string str;
        int value;
        cin >> str >> value;
        arr[i].first = str;
        arr[i].second = value;
    }

    sort(arr.begin(), arr.end(), cmp);

    int i = 0;
    while (i < n)
    {
        cout << arr[i].first << " " << arr[i].second << endl;
        i++;
    }

    return 0;
}