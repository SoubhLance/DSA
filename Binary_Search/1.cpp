// Binary Search 


#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> arr = {1,5,8,8,4,5,9,2,36,4};

    sort(arr.begin(), arr.end());

    int low = 0, high = arr.size() - 1;
    int target = 9;

    for(auto x : arr)
    {
        cout << x << " ";
    }

    cout << "\n|||||||||||| Array printed successfully ||||||||||||\n";

    while(low <= high)
    {
        int mid = low + (high - low) / 2;

        if(arr[mid] == target)
        {
            cout << "Found at index: " << mid << endl;
            return 0;
        }
        else if(target > arr[mid])
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }

    cout << "Not found" << endl;

    return 0;
}