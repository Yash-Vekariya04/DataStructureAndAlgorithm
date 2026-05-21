// Topics: Senior, Arrays, Strings, Hash table

class Solution {
public:
    int longestCommonPrefix(vector<int>& arr1, vector<int>& arr2) {
        unordered_set<int> prefixSet;

        // Store the prefix
        for(int num : arr1){
            string s = to_string(num);
            string prefix = "";

            for(char ch : s){
                prefix += ch;
                prefixSet.insert(stoi(prefix));
            }
        }

        // Check for prefix in arr2
        int maxLen = 0;

        for(int num : arr2){
            string s = to_string(num);
            string prefix = "";

            for(char ch : s){
                prefix += ch;
                if(prefixSet.count(stoi(prefix))){
                    maxLen = max(maxLen, (int)prefix.length());
                }
            }
        }

        return maxLen;
    }
};
