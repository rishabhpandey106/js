class Solution {
public:
    string reverseWords(string s) {
        string str;
        vector<string> words;
        string answer;
        // split by spaces
        for(auto it : s)
        {
            if(it == ' ')
            {
                if(!str.empty())
                {
                    words.push_back(str);
                    str = "";
                }
            }
            else
            {
                str += it;
            }
        }
        
        if(!str.empty())
            words.push_back(str);
        // reverse string
        for(int i=0;i<words.size();i++)
        {
            if(i>0)
            {
                answer += ' ';
            }
            for(int j=words[i].size() - 1;j>=0;j--)
            {
                answer += words[i][j];
            }
        }
        
        return answer;
    }
};