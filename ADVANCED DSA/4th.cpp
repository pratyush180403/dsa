#include<bits/stdc++.h>
using namespace std;
class Solution{	
	public:
		string longestCommonPrefix(vector<string>& str){
            if (str.empty()) return "";
			
            sort(str.begin() , str.end());
             string first = str[0];
             string last = str[str.size() - 1];

             int minLength = min( first.size() , last.size());
             string ans = "";

             for (int i = 0 ; i< minLength ; i++){
                if (first[i] != last[i]) return ans ; 
                 else ans += first[i];

             }

             return ans ;


		}
};
int main() {
    Solution solution;
    vector<string> input = {"flower", "flow", "flight"};
    string result = solution.longestCommonPrefix(input);
    cout << "Longest Common Prefix: " << result << endl; // Output: "fl"
    return 0;
}
