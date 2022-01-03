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
        int arr[n];
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        sort(arr, arr + n);
        if (arr[0] <= 2 || arr[n - 1] != 5)
            cout << "No" << endl;
        else
        {
            float m = 0;
            for (int j = 0; j < n; j++)
                m = m + arr[j];
            if (m / n >= 4.0)
                cout << "Yes" << endl;
            else
                cout << "No" << endl;
        }
    }
    return 0;
}