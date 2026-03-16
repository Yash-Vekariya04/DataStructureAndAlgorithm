class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        unordered_map<char, int> tbl;
        int counter = 0;

        for(char c : jewels){
            tbl[c] = 1;
        }

        for(char c : stones){
            if(tbl.count(c)){
                counter++;
            }
        }
        return counter;
    }
};