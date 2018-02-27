//
// Created by hengxin on 18-1-13.
//

#include<iostream>
#include<string>
using namespace std;

int main() {
    int n,x,y,sum1,sum2,len;
    char st[2000];
    char ch;
    bool t;

    cin >> n;
    getchar();
    for (int i0 = 1; i0 <= n; i0++) {
        for (int i = 0; i <= 1999; i++) st[i] = ' ';
        ch = getchar(); len = 1;
        while (ch != '\n') {
            st[len] = ch;
            len++;
            ch = getchar();
        }
        if (len == 1) {
            cout << "1" << endl;
            continue;
        }
        //len = 0;
        //while (st[len] != '\0') len++; len--;
        len--;
        //cout << len;
        y = len;
        //t1 = true;
        while (y > 1) {
            while ((st[y] != ')') and (y > 2)) y--;
            //  if (st[y] == ')') st[y] = '0';
            x = y-1; if (x < 1) break;
            while ((st[x] != '(') and (x > 1)) x--;
            if ((st[x] == '(') and (st[y] == ')')) {
                st[x] = '0'; st[y] = '0';
            }
            y--;
        }

        y = len;
        //t1 = true;
        while (y > 1) {
            while ((st[y] != ']') and (y > 2)) y--;
            //  if (st[y] == ')') st[y] = '0';
            x = y-1; if (x < 1) break;
            while ((st[x] != '[') and (x > 1)) x--;
            if ((st[x] == '[') and (st[y] == ']')) {
                st[x] = '0'; st[y] = '0';
            }
            y--;
        }

        y = len;
        //t1 = true;
        while (y > 1) {
            while ((st[y] != '}') and (y > 2)) y--;
            //  if (st[y] == ')') st[y] = '0';
            x = y-1; if (x < 1) break;
            while ((st[x] != '{') and (x > 1)) x--;
            if ((st[x] == '{') and (st[y] == '}')) {
                st[x] = '0'; st[y] = '0';
            }
            y--;
        }


        t = true;
        for (int i = 1; i <= len; i++)
            if (st[i] != '0') t = false;

        //cout << st << endl;
        if (t) cout << "1" << endl;
        else cout << "0" << endl;
        //cout <<st[0] << endl;

    }


    return 0;
}