#include <iostream>
#include <stack>
using namespace std;

// 判断字符是不是左括号类型
bool isLeft(char c)
{
    return (c == '(' || c == '[' || c == '{');
}

// 判断右括号与左括号是否匹配
bool isMatch(char right, char left)
{
    if (right == ')')
    {
        return (left == '(');
    }

    if (right == ']')
    {
        return (left == '[');
    }

    if (right == '}')
    {
        return (left == '{');
    }
}

// 判断字符串是否匹配
bool matching(char* s)
{
    stack<char> cs;
    char c;
    while (*s)
    {
        c = *s;
        if (isLeft(c))
        {
            cs.push(c);
        }
        else
        {
            if (cs.empty() || !isMatch(c, cs.top()))
            {
                return false;
            }

            cs.pop();
        }
        ++s;
    }

    if (!cs.empty())
    {
        return false;
    }
    return true;
}

int main()
{
    char s[100] = "{}";
    int i, n;
    cin >> n;
    for(i = 0; i < n; i++)
    {
        cin >> s;
        if (matching(s))
        {
            cout << "1" << endl;
        }
        else
        {
            cout << "0" << endl;
        }
    }
    return 0;
}