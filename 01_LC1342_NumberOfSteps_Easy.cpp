
class Solution {
public:
    vector<string> printVertically(string s) {
        vector<string> words;
        stringstream ss(s);
        string word;

        while (ss >> word) {
            words.push_back(word);
        }

        int maxLen = 0;

        for (string w : words) {
            maxLen = max(maxLen, (int)w.size());
        }

        vector<string> ans;

        for (int i = 0; i < maxLen; i++) {
            string row = "";

            for (int j = 0; j < words.size(); j++) {
                if (i < words[j].size()) {
                    row += words[j][i];
                } 
                else {
                    row += ' ';
                }
            }

            while (row.back() == ' ') {
                row.pop_back();
            }

            ans.push_back(row);
        }

        return ans;
    }
};
