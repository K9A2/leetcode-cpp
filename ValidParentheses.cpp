#include <iostream>
#include <stack>
#include <string>

using namespace std;

/**
 * Solution for problem "20	Valid Parentheses"
 */
class Solution {
   public:
    bool isValid_if(string s) {
        stack<char> brackets;
        for (int i = 0; i < (int)s.size(); i++) {
            char c = s.at(i);
            if (c != '{' && c != '(' && c != '[' && c != '}' && c != ')' &&
                c != ']') {
                // not a bracket
                continue;
            }
            // push left brackets
            if (c == '{' || c == '(' || c == '[') {
                brackets.push(c);
                continue;
            }
            // is right brackets, but with an empty stack
            if (brackets.size() == 0) return false;
            // stack is non-empty, get right bracket
            char p = brackets.top();
            brackets.pop();
            // check it
            if (c == '}') {
                if (p != '{') return false;
                continue;
            }
            if (c == ')') {
                if (p != '(') return false;
                continue;
            }
            if (c == ']') {
                if (p != '[') return false;
                continue;
            }
        }
        return brackets.size() == 0 ? true : false;
    }

    bool isValid(string s) {
        stack<char> brackets;
        char c;
        for (int i = 0; i < (int)s.size(); i++) {
            c = s.at(i);
            switch (c) {
                // left brackets
                case '{':
                case '[':
                case '(': {
                    brackets.push(c);
                    break;
                }
                case '}': {
                    if (brackets.size() == 0 || brackets.top() != '{')
                        return false;
                    brackets.pop();
                    break;
                }
                case ']': {
                    if (brackets.size() == 0 || brackets.top() != '[')
                        return false;
                    brackets.pop();
                    break;
                }
                case ')': {
                    if (brackets.size() == 0 || brackets.top() != '(')
                        return false;
                    brackets.pop();
                    break;
                }
            }
        }
        return brackets.empty();
    }
};

int main() {
    Solution solution;

    cout << solution.isValid("]") << endl;

    return 0;
}
