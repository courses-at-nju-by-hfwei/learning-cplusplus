/*
 * File: brackets-matching.cpp
 * Created by hengxin on 18-1-2.
 *
 * 问题:
 *   判断给定字符串中的括号是否匹配。
 *
 *   输入格式:
 *   首行是正整数 (记为n)。
 *   接着是n行字符串。
 *
 *   每个字符串最多含有 '(', '[', '{', ')', ']', '}' 六种不同字符。
 *   每个字符串长度不大于1000。
 *   字符串可以为空。我们规定空字符串是"括号匹配的"。
 *
 * 　输出格式:
 *   如果某行字符串中的括号是匹配的, 则对应行输出1, 否则输出0。
 *
 * 提示: 可使用栈解决该问题。
 *   可自行设计栈数据结构 (比如使用数组)。
 *   也可使用 C++ STL 提供的 stack, 基本用法如下：
 *   std::stack<char> bracket_stack;  // 定义栈(对象), <char> 表示栈中只允许存放字符
 *   bracket_stack.empty()  // 判断栈是否为空
 *   bracket_stack.push('(') // 将字符'('压入栈中
 *   bracket_stack.pop()  // 删除栈顶字符
 *   bracket_stack.top()  // 查看(但不删除)栈顶字符
 *   注意：在使用　push, pop, top 操作时, 要考虑栈是否为空的情况。
 *
 *
 * 样例输入:
 *   5
 *   ()(){}{}[]
 *   )))(((
 *
 *   ((())]
 *   ({[][]}{})
 *
 * 样例输出 (注: 最后有一个空行):
 *   1
 *   0
 *   1
 *   0
 *   1
 *
 */

#include <iostream>
#include <stack>

using std::cin;
using std::cout;

bool is_matched(std::string brackets);
char get_left_bracket(char bracket);

int main() {
    int n = 0;
    cin >> n;
    cin.ignore();

    std::string brackets;
    for (int i = 0; i < n; ++i) {
        getline(cin, brackets);
        cout << is_matched(brackets) << std::endl;
    }

    return 0;
}

/**
 * @param brackets string contains only brackets
 * @return true, if the brackets in @param brackets are matched;
 *  false, otherwise.
 */
bool is_matched(std::string brackets) {
    std::stack<char> bracket_stack;

    for (auto bit = brackets.begin();
         bit < brackets.end(); ++bit) {
        if (*bit == '(' || *bit == '[' || *bit == '{') {  // left brackets
            bracket_stack.push(*bit);
        } else { // right brackets: ')', ']', '}'
            if (bracket_stack.empty())
                return false;
            if (bracket_stack.top() != get_left_bracket(*bit))
                return false;
            bracket_stack.pop();
        }
    }

    return bracket_stack.empty();
}

/**
 * @param bracket One of the right brackets: ')', ']', or '}'
 * @return the left corresponding bracket for @param bracket
 */
char get_left_bracket(char bracket) {
    switch (bracket) {
        case ')':
            return '(';
        case ']':
            return '[';
        case '}':
            return '{';
        default:
            return '*';  // no such a bracket
    }
}
