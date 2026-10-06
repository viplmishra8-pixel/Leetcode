class Solution {
public:
    int minAddToMakeValid(string s) {
        stack<char> stck;

        for (char ch : s) {
            if (ch == '(') {
                stck.push(ch);
            }
            else {
                if (!stck.empty() && stck.top() == '(') {
                    stck.pop();
                }
                else {
                    stck.push(ch);
                }
            }
        }

        return stck.size();
    }
};