int solve(vector<int>nums)
    {
        int prev=nums[0];
        int prev2=0;
        for(int i=1;i<nums.size();i++)
        {
            int pck=nums[i];
            if(i>1)
            {
                pck+=prev2;
            }
            int np=prev;
            int curr=max(pck,np);
            prev2=prev;
            prev=curr;
        }
        return prev;
    }
    int rob(vector<int>& nums) {
        vector<int>v1,v2;
        if(nums.size()==1)
        {
            return nums[0];
        }
        for(int i=0;i<nums.size();i++)
        {
            if(i!=0)
            {
                v1.push_back(nums[i]);
            }
            if(i!=nums.size()-1)
            {
                v2.push_back(nums[i]);
            }
        }
        return max(solve(v1),solve(v2));
    }
