#include <iostream>
#include <vector>
#include <map>
#include <string>
using namespace std;

class Solution {
public:
    bool isIsomorphic(string s, string t) {
    	if (s.size() != t.size()) {
    		return false;
    	}
    	bool result = true;
    	map<char, int> l_char_count, r_char_count;
    	for (int i=0; i<s.size(); i++)
    	{
    		if (l_char_count.find(s[i]) == l_char_count.end()) l_char_count.insert(pair<char, int>(s[i], -1));
    		if (r_char_count.find(t[i]) == r_char_count.end()) r_char_count.insert(pair<char, int>(t[i], -1));
    		result &= l_char_count[s[i]] == r_char_count[t[i]];
    		l_char_count[s[i]] = i;
    		r_char_count[t[i]] = i;
    	}
    	// map<char, char> l_char_map, r_char_map;
    	// while (i < length) {
    	// 	if (l_char_map.find(s[i]) == l_char_map.end())
    	// 	{
    	// 		l_char_map.insert(pair<char, char>(s[i], t[i]));
    	// 	} 
    	// 	if (r_char_map.find(t[i]) == r_char_map.end())
    	// 	{
    	// 		r_char_map.insert(pair<char, char>(t[i], s[i]));
    	// 	}
    	// 	result &= l_char_map[s[i]] == t[i] & r_char_map[t[i]] == s[i];
    	// 	i++;
    	// }
        return result;
    }
};

int main(){
	Solution s;
	cout << s.isIsomorphic("egg", "add") << endl;
	cout << s.isIsomorphic("foo", "bar") << endl;
	cout << s.isIsomorphic("paper", "title") << endl;
	cout << s.isIsomorphic("ab", "aa") << endl;
	cout << s.isIsomorphic("aba", "baa") << endl;
	return 0;
}