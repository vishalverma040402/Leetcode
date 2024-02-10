class Solution {
public:
    vector<int> findWordsContaining(vector<string>& words, char x) {
        vector<int> indx;
        string s;
        for(int i=0; i<words.size(); i++){
            s = words[i];
            for(int j=0; j<s.size();j++){
                if(s[j] == x){
                    indx.push_back(i);
                    break;
                }
                else{
                    continue;
                }
            }
        }
        return indx;
    }
};