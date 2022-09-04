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

    vector<int> twoSum(vector<int> &nums, int target) {
	int n = nums.size();
        vector<int> v;
        
        // passing in multimap 
        multimap<int, int> mp;
        for(int i=0; i<n ;i++) {
            mp.insert(pair<int, int>(nums[i] , i));
        }
        
        // binary search 
        multimap<int, int> :: iterator it;
        multimap<int, int> :: iterator it2;

        it = mp.begin();
        it2 = mp.end(); it2--;
        cout << it->first << " " << it2->first << endl;
        while( it->first + it2->first != target) {
            if( it->first + it2->first > target) {
                it2--;
            }
            else {
                it++;
            }
        }
        // inserting the index of the two number whose sum is target
        v.push_back(it->second);
        v.push_back(it2->second);
        return v;	    
    }


//    Brute Force approach

    /*
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
    */
};
