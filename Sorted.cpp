#include <bits/stdc++.h>
using namespace std;
int main()
{

    int T;
    cin >> T;
    for (int tc = 0; tc < T; tc++)
    {
        int n;
        cin >> n;
        set<int> sorted;
        int index = 0;
        while (index < n)
        {
            int num;
            cin >> num;
            sorted.insert(num);
            ++index;
        }

        for (int value : sorted)
        {
            cout << value << " ";
        }
        cout << endl;
    }

    return 0;
}