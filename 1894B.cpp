#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> arr(n);
        int i = 0;
        while (n--)
        {
            cin >> arr[i];
            i++;
        }
        map<int, int> fq;
        for (auto x : arr)
            fq[x]++;

        vector<int> sol;
        for (auto i : fq)
        {
            if (i.second > 1)
                sol.push_back(i.first);
        }
        if (sol.size() < 2)
        {
            cout << "-1" << endl;
            continue;
        }

        for (auto i : arr)
        {
            if (i == sol[0])
            {
                sol[0] = -1;
                cout << "2 ";
            }
            else if (i == sol[1])
            {
                sol[1] = -1;
                cout << "3 ";
            }
            else
            {
                cout << "1 ";
            }
        }
        cout << endl;
    }
}