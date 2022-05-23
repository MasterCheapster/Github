#include <iostream>

#include <bits/stdc++.h>

using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    return 0;
}
class Solution
{
public:
    vector<int> twoSum(vector<int> &nums, int target)
    {
        for (int i = 0; i < sizeof(nums) / sizeof(nums[0]); i++)
        {
            cin >> nums[i];
        }
        cin >> target;
        for (int i = 0; i < sizeof(nums) / sizeof(nums[0]); i++)
        {
            for (int j = i + 1; j < sizeof(nums) / sizeof(nums[0]); j++)
            {
                if (nums[i] + nums[j] == target)
                {
                    cout << "[" << i << "," << j << "]";
                }
            }
        }
    }
};