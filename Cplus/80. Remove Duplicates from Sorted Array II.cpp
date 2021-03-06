#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if ( nums.size() <= 2 ) return nums.size();

        int index = 2;
        for(int i = 2 ; i < nums.size() ; i++)
        {
            if(nums[i]!=nums[index-2])//往前判断两位
                nums[index++] = nums[i];
        }
        return index ;
    }
};
int main()
{
    Solution so;
    vector<int> nums = {1,1,1,2,2,3,3,3,4,4,4};
    int len = so.removeDuplicates(nums);
    /***
    for (int i = 0; i < len; i++)
        cout<<nums[i]<< " " ;
    ***/
    cout<<len<<endl;
    return 0;
}
