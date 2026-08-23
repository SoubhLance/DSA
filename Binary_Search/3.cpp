// Upper Bound

#include <bits/stdc++.h>
using namespace std;

int lowerBound(vector<int>& arr, int n, int x)
{
    int low = 0;
    int high = n - 1;
    int ans = n;

    while(low <= high)
    {
        int mid = low + (high - low) / 2;

        if(arr[mid] > x)
        {
            ans = mid;
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }

    return ans;
}

int main()
{
    vector<int> arr = {1, 2, 4, 4, 5, 7, 9};

    int x = 4;

    int ans = lowerBound(arr, arr.size(), x);

    cout << "Lower Bound Index: " << ans << endl;

    return 0;
}