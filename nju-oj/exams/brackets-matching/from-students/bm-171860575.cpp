/**
 * Created by hengxin on 18-1-13.
 */

#include <iostream>
#include <string.h>
#include <stdio.h>
#include <stack>
using namespace std;
int main() {
    // freopen("in.txt","r",stdin);
    int n;
    cin >> n;
    getchar();
    int fl = 0;
    while(n--) {
        int cnt1 = 0;//(
        int cnt2 = 0;//)
        int cnt3 = 0;//{
        int cnt4 = 0;//}
        int cnt5 = 0;//[
        int cnt6 = 0;//]
        char a[3002];

        int flag = 1;
        memset(a,0, sizeof(a));
        //while(scanf("%c",&ch)!=EOF && ch != '\n')
        if(fl)getchar();
        char ch2 = getchar();
        if(ch2 == '\n')
        {
            cout << "1" <<endl;
            fl = 0;
        }
        else {
            fl = 1;
            cin >> a;
            int le = strlen(a);
            if(ch2 == ')'||ch2 == ']'||ch2=='}')
            {
                cout << "0" << endl;
            }
            else {
                if (ch2 == '(') cnt1++;

                else if (ch2 == '{')cnt3++;

                else if (ch2 == '[')cnt5++;
                for (int i = 0; i < le; ++i) {
                    char ch = a[i];
                    if (ch == '(') cnt1++;
                    else if (ch == ')') cnt2++;
                    else if (ch == '{')cnt3++;
                    else if (ch == '}')cnt4++;
                    else if (ch == '[')cnt5++;
                    else if (ch == ']')cnt6++;
                    if (flag) {
                        if (cnt2 > cnt1) flag = 0;
                        if (cnt4 > cnt3) flag = 0;
                        if (cnt6 > cnt5) flag = 0;
                    }
                }
                if (cnt1 == cnt2 && cnt3 == cnt4 && cnt5 == cnt6 && flag) cout << "1" << endl;
                else cout << "0" << endl;

            }
        }
    }

    //std::stack<char> bracket;
    return 0;
}

