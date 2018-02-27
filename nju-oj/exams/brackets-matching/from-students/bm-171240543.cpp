#include<iostream>
#include<string>
using namespace std;
int panduan(char p,int i,int j,int m,char q)
{
    int n,N,c;
    N=n;
    char kuohao[n];
    p='(';
    q=')';
    for(i=0;i<N;i++)
    {
        if(kuohao[i]=p)
        {
            j=i;
            for(j=i;j<n;j++)
            {
                if(kuohao[j]=q)
                {
                    m=j;
                    panduan(p,i,j,m,q);
                }
                else c=0;
            }
        }
        else c=1;
    }
    p='[';
    q=']';
    for(i=0;i<N;i++)
    {
        if(kuohao[i]=p)
        {
            j=i;
            for(j=i;j<n;j++)
            {
                if(kuohao[j]=q)
                {
                    m=j;
                    panduan(p,i,j,m,q);
                }
                else c=0;
            }
        }
        else c=1;
    }
    p='{';
    q='}';
    for(i=0;i<N;i++)
    {
        if(kuohao[i]=p)
        {
            j=i;
            for(j=i;j<n;j++)
            {
                if(kuohao[j]=q)
                {
                    m=j;
                    panduan(p,i,j,m,q);
                }
                else c=0;
            }
        }
        else c=1;
    }
    return c;
}
int main()
{
    int n,i,N,m,j;
    char p,q;
    cin>>n;
    N=n;
    char kuohao[N];
    while(cin>>kuohao[N])
    {
        panduan(p,i,j,m,q);
        cout<<panduan(p,i,j,m,q);
    }
    return 0;
}
