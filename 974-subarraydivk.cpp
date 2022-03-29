class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        int res=0;
        vector<int>v(nums.size());
        v[0]=nums[0];
        for(int i=1;i<nums.size();i++)
        {
            v[i]=v[i-1]+nums[i];
        }
        unordered_map<int,int>mp;
        for(int i=0;i<v.size();i++)
        {
            int rem=v[i]%k;   
            if(rem==0)
            {
                res++;
            }
            if(rem<0)
            {
                rem+=k;
            }
            if(mp.find(rem)!=mp.end())
            {
                res+=mp[rem];
            }
            mp[rem]++;
        }
        return res;
    }
};
