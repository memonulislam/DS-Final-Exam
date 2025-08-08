#include <bits/stdc++.h>
using namespace std;
int main()
{

    int T;
    cin >> T;
    cin.ignore();
    for (int tc = 0; tc < T; tc++)
    {
        string str;
        getline(cin, str);
        map<string, int> mp;
        stringstream ss(str);
        string word;

        string countWord;
        int countStirng = 0;

        while (ss >> word)
        {
            mp[word]++;
            if (mp[word] > countStirng)
            {
                countStirng = mp[word];
                countWord = word;
            }
        }

        cout << countWord << " " << countStirng << endl;
    }

    return 0;
}