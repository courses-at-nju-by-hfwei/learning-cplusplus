//
// Created by hengxin on 18-1-13.
//

#include<cstdio>
#include<cstring>

int main()
{
    bool flag1[500],flag2[500],flag3[500];
    bool flag=true,flag_h=false;

    int i=0,j=0,k=0,i1=0,j1=0,k1=0;
    int cnt;
    char store;
    char liter[1000];
    scanf("%d",&cnt);
    getchar();
    for(int m=0;m!=cnt;m++)
    {
        memset(flag1,false,sizeof(flag1));
        memset(flag2,false,sizeof(flag2));
        memset(flag3,false,sizeof(flag3));
        i=0,j=0,k=0,i1=0,j1=0,k1=0;
        while(scanf("%c",&store))
        {
            if(store=='\n')break;
            else if(store=='(')
            {
                flag1[i]=true;
                i++;
            }
            else if(store=='[')
            {
                flag2[j]=true;
                j++;
            }
            else if(store=='{')
            {
                flag3[k]=true;
                k++;
            }
            else if(store==')')
            {
                if(flag1[i1])
                {
                    i1++;
                }
                else flag=false;
            }
            else if(store==']')
            {
                if(flag2[j1])
                {
                    j1++;
                }
                else flag=false;
            }
            else if(store=='}')
            {
                if(flag3[k1])
                {
                    k1++;
                }
                else flag=false;
            }
        }
        if(i==i1&&j==j1&&k==k1);
        else flag=false;
        if(flag)printf("1\n");
        else printf("0\n");
        flag=true;
    }
    return 0;
}
