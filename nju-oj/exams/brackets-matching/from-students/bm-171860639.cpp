//
// Created by hengxin on 18-1-13.
//

#include<iostream>
#include<stack>
#include<string>
using namespace std;
int main()
{
    int num=0;
    cin>>num;
    char n;
    getchar();
    int* A=new int[num];
    for(int i=0;i<num;i++)
    {stack<char> p;
        string s;
        string t;
        n=getchar();
//        cout << n;
        if(n=='\n')
        {
            A[i]=1;
            continue;
        }
        else
        {
            s.push_back(n);
            cin>>t;
            s=s+t;
            getchar();
        }
        bool flag=1;
        int k=s.length();
        char temp;
        for(int j=0;j<k;j++)
        {
            if(s[j]=='('||s[j]=='{'||s[j]=='[')
                p.push(s[j]);
            else
            {
                if(p.empty())
                {
                    A[i]=0;
                    goto H1;
                }
                temp=p.top();
                switch(s[j])
                {
                    case ')':
                        if(temp!='(')
                        {
                            flag=0;
                            break;
                        }
                        else
                        {p.pop();
                            break;
                        }
                    case ']':
                        if(temp!='[')
                        {
                            flag=0;
                            break;
                        }
                        else
                        {p.pop();
                            break;
                        }
                    case '}':
                        if(temp!='{')
                        {
                            flag=0;
                            break;
                        }
                        else
                        {p.pop();
                            break;
                        }
                }
            }
            if(flag==0)break;
        }
        if(flag&&p.empty())A[i]=1;
        else A[i]=0;
        H1:;
    }
    for(int i=0;i<num;i++)
        cout<<A[i]<<"\n";

}

