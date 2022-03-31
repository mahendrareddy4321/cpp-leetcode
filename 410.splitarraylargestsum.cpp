class Solution {
public:
    bool find(vector<int> &nums,int m,int mid)
    {
        int i=0,sum=0,cnt=1,n=nums.size();
        while(i<n && cnt<=m)
        {
            if(sum+nums[i]<=mid)
            {
                sum+=nums[i];
            }
            else
            {
                cnt++;
                sum=nums[i];
            }
            i++;
        }
        return cnt<=m;
    }
    int splitArray(vector<int>& nums, int m) {
        int low=0,high=0;
        for(auto it:nums)
        {
            low=max(low,it);
            high+=it;
        }
        int ans=high;
        while(low<=high)
        {
            int mid=(low+high)/2;
            if(find(nums,m,mid))
            {
                ans=min(ans,mid);
                high=mid-1;
            }
            else
            {
                low=mid+1;
            }
        }
        return ans;
    }
};
