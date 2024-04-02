class Solution {
public:
    int findMaxLength(vector<int>& nums) {
          int n=nums.size();
        int maxl=0;
        // int zc=0;
        // int oc=0;
        for(int i=0;i<n;i++){
              int zc=0;
        int oc=0;
            for(int j=i;j<n;j++){
        
                if(nums[j]==0){
                    zc++;
                }
                else{
                    oc++;
                }
                if(zc==oc){
                    maxl= max(maxl,j-i+1);
                }
            }
        }
        return maxl;
    }
};