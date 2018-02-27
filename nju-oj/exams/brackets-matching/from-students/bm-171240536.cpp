//
// Created by hengxin on 18-1-13.
//

#include<iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    getchar();
    char a;

    int k,m1,n1,p1,m2,n2,p2,flag;
    for (int i = 0; i < n; ++i)
    {
        m1=n1=p1=m2=n2=p2=k= 0;
        flag = 1;
        while (a=getchar() && a != EOF)
        {

            if (a == '(')
                ++m1;
            if (a == ')')
                ++m2;
            if (m1 < m2)
            {
                cout << 0;
                flag = 0;
            }
            if (a == '[')
                ++n1;
            if (a == ']')
                ++n2;
            if (n1 < n2&&flag != 0)
            {
                cout << 0;
                flag = 0;
            }
            if (a == '{')
                ++p1;
            if (a == '}')
                ++p2;
            if (p1 < p2&&flag != 0)
            {
                cout << 0;
                flag=0;
            }
            k++;
        }
        if (m1 == m2 && n1 == n2 && p1 == p2&& flag != 0)
            cout << 1;

        cout << endl;
        getchar();
    }
}