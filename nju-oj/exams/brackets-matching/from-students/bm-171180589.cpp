//
// Created by hengxin on 18-1-13.
//

#include <iostream>
using namespace std;
int main(){
    char a[1000][1000];
    int n;
    int q[1000];
    cin>>n;
    int p = 0, m = 0,time = 0;
    int n1 = 0,n2 = 0,n3 = 0,n4 = 0,n5 = 0,n6 = 0;
    for (int i = 0; i < n; ++i) {
        q[i]=0;
        while(cin>>a[i][p]&&(&a[i][p]!="\n")){
            q[i]++;
            p++;
        }
        p = 0;
    }

    for (int i = 0; i < n; ++i) {
        n1 = 0,n2 = 0,n3 = 0,n4 = 0,n5 = 0,n6 = 0;
        time = 0;
        for (int j = 0; j < q[i]; ++j) {
            if(&a[i][j]=="("){
                n1++;
            }
            else if(&a[i][j]==")"){
                n2++;
            }
            else if(&a[i][j]=="["){
                n3++;
            }
            else if(&a[i][j]=="]"){
                n4++;
            }
            else if(&a[i][j]=="{"){
                n5++;
            }
            else if(&a[i][j]=="}"){
                n6++;
            }
        }
        if(n1!=n2||n3!=n4||n5!=n6){
            cout<<0<<endl;
        }
        else
            for (int j = 1; j < q[i]; ++j) {
                if(&a[i][j]=="("){
                    for (int k = 0; k < j; ++k) {
                        if(&a[i][k]==")"){
                            break;
                        }
                        else m++;
                    }
                    if(m!=j){
                        m = 0;
                        break;
                    }
                    else time++;
                    m = 0;
                }
                if(&a[i][j]=="["){
                    for (int k = 0; k < j; ++k) {
                        if(&a[i][k]=="]"){
                            break;
                        }
                        else m++;
                    }
                    if(m!=j){
                        m = 0;
                        break;
                    }
                    else time++;
                    m = 0;
                }
                if(&a[i][j]=="{"){
                    for (int k = 0; k < j; ++k) {
                        if(&a[i][k]=="}"){
                            break;
                        }
                    }
                    if(m!=j){
                        m = 0;
                        break;
                    }
                    else time++;
                    m = 0;
                }
            }
        if(time==q[i]){
            cout<<1<<endl;
        }
        else cout<<0<<endl;
    }
}
