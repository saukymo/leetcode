#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    bool isUgly(int num) {
        vector<int> prime = {2, 3, 5};
        for (int i = 0; i < 3; i++)
        {
        	while (num > 0 && num % prime[i] == 0)
        	{
        		num = num / prime[i];
        	}
        }

        return (num == 1);
    }
};


int main(){
	Solution s;
	cout << s.isUgly(6) << endl;
	cout << s.isUgly(8) << endl;
	cout << s.isUgly(14) << endl;
	return 0;
}