// Majority Element - Hashing Approach
// Better Approach
// TC: O(N) average
// SC: O(N)

#include <bits/stdc++.h>
using namespace std;

int majorityElement(vector<int>& nums)
{
    unordered_map<int, int> mp;
    int maj = nums.size() / 2;

    // Count frequency
    for(int i = 0; i < nums.size(); i++)
    {
        mp[nums[i]]++;
    }

    // Find majority element
    for(int i = 0; i < nums.size(); i++)
    {
        if(mp[nums[i]] > maj)
        {
            return nums[i];
        }
    }

    return -1;
}

int main()
{
    vector<int> nums = {2, 2, 1, 1, 1, 2, 2};

    int ans = majorityElement(nums);

    cout << "Majority Element: " << ans << endl;

    return 0;
}