    int rob(vector<int>& nums) {
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
