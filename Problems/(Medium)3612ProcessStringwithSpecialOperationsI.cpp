class Solution {
public:
    string processStr(string s) {
        string res;
        int index = 0;
        for(char cha : s){
            if(cha == '*'){
                if(res.size() != 0)
                    res.pop_back();
            } else if(cha == '#'){
                res += res;
            } else if(cha == '%'){
                reverse(res.begin(), res.end());
            } else{
                res.push_back(cha);
                index++;
            }
        }
        return res;
    }
};
