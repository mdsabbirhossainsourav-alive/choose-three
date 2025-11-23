#include <bits/stdc++.h>
using namespace std;
int main() 
{
    int t;
    cin >> t;
    for(int i=1; i<=t; i++) 
    {
        int n,s;
        cin >> n >> s;
        vector<int> a(n);
        for (int i=0; i<n; i++)
        {
            cin >> a[i];
        } 
        sort(a.begin(), a.end());
        bool possible = false;
        for (int i=0; i<n-2; i++)
        {
            int target = s-a[i];
            int left = i+1;
            int right = n-1;
            while (left < right) 
            {
                int sum = a[left] + a[right];
                if (sum == target)
                {
                    possible = true;
                    break;
                }
                else if (sum < target)
                {
                    left++;
                }
                else 
                {
                    right--;
                }
            }
        }
        if (possible)
        {
            cout << "YES" << endl;
        } 
        else 
        {
            cout << "NO" << endl;
        }
    }    
    return 0;
}