class Solution {
public:
vector<vector<int>>final;
vector<int> fun(vector<int>nums,int idx)
{
    vector<int>r;
    for(int i=0;i<nums.size();i++)
    {
        if(i!=idx) r.push_back(nums[i]);
    }
    return r;
}
void f(vector<int>ans,vector<int> nums)
{
    if(nums.size()==0)
    {
        final.push_back(ans);
        return ;
    }
    for(int i=0;i<nums.size();i++)
    {
        vector<int>comb=fun(nums,i);
        ans.push_back(nums[i]);
        f(ans,comb);
        ans.pop_back();
    }

}
    vector<vector<int>> permute(vector<int>& nums) {
        vector<int>ans;
        f(ans,nums);
        return final;
        
    }
};
