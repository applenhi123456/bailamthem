#include <iostream.h>
#include <stack.h>
#include <cstring.h>
using namespace std;

bool isBalanced(string s) {
    stack<char> st;
    for (int i = 0; i < s.length(); i++) {
        char c = s[i];
        if (c == '(' || c == '[' || c == '{') {
            st.push(c);
        } else if (c == ')' || c == ']' || c == '}') {
            if (st.empty()) {
                return false;
            }
            char top = st.top();
            st.pop();
            if ((c == ')' && top != '(') || (c == ']' && top != '[') || (c == '}' && top != '{')) {
                return false;
            }
        }
    }
    return st.empty();
}

int main() {
    string s;
    cout << "Nhap xau: ";
    getline(cin, s);
    if (isBalanced(s)) {
        cout << "xâu dã cho là xâu trích sai" << endl;
    } else {
        cout << "xâu dã cho là xâu trích sai" << endl;
    }
    return 0;
}

