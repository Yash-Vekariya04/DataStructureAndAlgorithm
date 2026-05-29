class Solution {
public:
    int numberOfSpecialChars(string word) {
        vector<int> lower(26, -1);
        vector<int> upper(26, -1);
        int spe_word = 0;

        for(int i = 0; i < word.length(); i++){
            char ch = word[i];

            if(islower(ch)){
                lower[ch - 'a'] = i;
            } else if(isupper(ch) && upper[ch - 'A'] == -1){
                upper[ch - 'A'] = i;
            }
        }

        for (int i = 0; i < 26; i++) {           
            if (lower[i] != -1 && upper[i] != -1) {
                if (lower[i] < upper[i]) {
                    spe_word++;
                }
            }
        }

        return spe_word;
    }
};
