#include<iostream>
#include<stack>
using namespace std;
int check(char ch,char ch2);
int main()
{
    int n;
    cin>>n;
    char zt=getchar();
    int answer[100];
    int i=0;
    for(;i<n;i++)
    {
        std::stack<char> bracket_stack;
        char ch;
        ch=getchar();
        while(ch != '\n')
        {
            if (bracket_stack.empty()==1)   bracket_stack.push(ch);
            else
            {
                if (check(bracket_stack.top(),ch)==1) bracket_stack.pop();
                else bracket_stack.push(ch);
            }
            ch=getchar();
        }
        if (bracket_stack.empty()==1) answer[i]=1;
        else answer[i]=0;
    }

    for (int k=0;k<=i;k++)
        cout<<answer[k]<<endl;
    return 0;
}

int check(char ch,char ch2)//是否配对
{
    if (ch=='(' && ch2==')') return 1;
    if (ch=='[' && ch2==']') return 1;
    if (ch=='{' && ch2=='}') return 1;
    return 0;
}


