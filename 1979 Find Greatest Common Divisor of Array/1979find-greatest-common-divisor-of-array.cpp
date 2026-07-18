class Solution {
public:
    int findGCD(vector<int>& nums) {
        int mn = nums[0];
        int mx = nums[0];

        for (int i = 1; i < nums.size(); i++) {
            if (nums[i] < mn)
                mn = nums[i];
            if (nums[i] > mx)
                mx = nums[i];
        }

        return gcd(mn, mx);
    }
};