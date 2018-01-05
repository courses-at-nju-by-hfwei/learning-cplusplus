//
// Created by hengxin on 18-1-4.
//

#include<iostream>
#include<cstring>
#include<stack>
using namespace std;

int main()
{
    int hangshu(0);
    cin >> hangshu;
    cin.ignore();
    for(int i(0);i < hangshu;i++) {
//        cin.clear();
//        cin.sync();
        /*
        */
        string shuru;
        getline(cin, shuru);
//        char shuru[1001] = {'\0'};
////        memset(shuru,'\0',sizeof(shuru));
//        for (int u(0);; u++) {
//            char term;
//            term = getchar();
//            if (term == '\n')
//                break;
//            shuru[u] = term;
//        }

        if (shuru[0] == '\0') {
            cout << 1;
            if (i != hangshu - 1)
                cout << "\n";
            continue;
        }

        stack<char> bracket_stack;
        for (int j(0); shuru[j] != '\0'; j++) {
            if (shuru[j] == '(' || shuru[j] == '[' || shuru[j] == '{') {
                bracket_stack.push(shuru[j]);
            }

            if (shuru[j] == ')' || shuru[j] == ']' || shuru[j] == '}') {
                int panduan(0);

                if (bracket_stack.empty() == true) {
                    cout << 0;
                    if (i != hangshu - 1)
                        cout << "\n";
                    break;
                }

                if (shuru[j] == ')' && bracket_stack.top() == '(') panduan++;
                if (shuru[j] == ']' && bracket_stack.top() == '[') panduan++;
                if (shuru[j] == '}' && bracket_stack.top() == '{') panduan++;

                if (panduan > 0) {
                    bracket_stack.pop();

                    if (shuru[j + 1] == '\0' && bracket_stack.empty() == true) {
                        cout << 1;
                        if (i != hangshu - 1)
                            cout << "\n";
                        break;
                    }

                    if (shuru[j + 1] == '\0' && bracket_stack.empty() == false) {
                        cout << 0;
                        if (i != hangshu - 1)
                            cout << "\n";
                        break;
                    }

                    continue;
                } else {
                    cout << 0;
                    if (i != hangshu - 1)
                        cout << "\n";
                    break;
                }


            }

            if (shuru[j + 1] == '\0' && bracket_stack.empty() == false) {
                cout << 0;
                if (i != hangshu - 1)
                    cout << "\n";
                break;
            }

        }


        /*
        if(shuru[j] == '(') xiao++;
        if(shuru[j] == ')') xiao--;

        if(shuru[j] == '[') zhong++;
        if(shuru[j] == ']') zhong--;

        if(shuru[j] == '{') da++;
        if(shuru[j] == '}') da--;

        if((xiao < 0 || zhong < 0 || da < 0))
        {
            cout << 0;
            if(i != hangshu-1)
                cout << "\n";
            break;
        }

        if(shuru[j+1] == '\0')
        {
            if(xiao == 0 && zhong == 0 && da == 0)
            {
                cout << 1;
                if(i != hangshu-1)
                    cout << "\n";
                break;
            }
            else
            {
                cout << 0;
                if(i != hangshu-1)
                    cout << "\n";
                break;
            }
        }

        cout << xiao << " " << zhong << " " << da << "\n";
         */
    }
}