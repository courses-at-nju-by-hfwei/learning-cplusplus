//
// Created by hengxin on 18-1-13.
//

#include<iostream>

using namespace std;


int main()
{
    int n;
    int res[100];
    cin >> n;
    for (int i = 1; i <= n; ++i)
    {
        char word[999];
        string ans;
        int n1 = 0, n2 = 0, n3 = 0;
        cin >> word;
        for (int i = 0; i <= 999; ++i)
        {
            if (word[i] == '(')
            {
                n1 = n1 + 1;
            }
            if (word[i] == ')')
            {
                n1 = n1 - 1;
            }
            if (word[i] == '[')
            {
                n2 = n2 + 1;
            }
            if (word[i] == ']')
            {
                n2 = n2 - 1;
            }
            if (word[i] == '{')
            {
                n3 = n3 + 1;
            }
            if (word[i] == '}')
            {
                n3 = n3 - 1;
            }
            if (word[i] == NULL)
            {
                break;
            }
        }
        if (word[0] == NULL)
        {
            res[i] = 1;
        }
        if (n1 == 0 & n2 == 0 & n3 == 0)
        {
            res[i] = 1;
        }
        else
        {
            res[i] = 0;
        }
    }
    for (int i = 1; i <= n; ++i)
    {
        cout << res[i] << endl;
    }
}