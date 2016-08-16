#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
    	vector<int> res;
    	for (int i=0; i<nums.size(); i++)
    		for (int j=i+1; j<nums.size(); j++)
    		{
    			if (nums[i] + nums[j] == target) {
    				res.push_back(i);
    				res.push_back(j);
    				break;
    			}
    		}
    	return res;
    }
};

int main(){
	Solution s;
	vector<int> nums = {2, 7, 11, 15};
	int target = 9;
	vector<int> result = s.twoSum(nums, target);
	if (result.size() > 0)
	{
		cout << result[0] << " " << result[1] << endl;	
	}
	return 0;
}
