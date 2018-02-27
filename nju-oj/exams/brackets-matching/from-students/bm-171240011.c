//
// Created by hengxin on 18-1-13.
//

#include<stdio.h>
#include<string.h>
int main(){
    char a[1002];
    int b[1002];
    int c,i,j,m;
    gets(a);
    scanf("%d",&m);
    while(m>0){
        m--;
        int r=1;
        for(i=0;i<strlen(a);i++){
            b[i]=0;
            if(a[i]!=' ') r=0;
            if(a[i]=='(') b[i]=1;
            if(a[i]==')') b[i]=2;
            if(a[i]=='[') b[i]=10;
            if(a[i]==']') b[i]=20;
            if(a[i]=='{') b[i]=100;
            if(a[i]=='}') b[i]=200;
        }
        for(i=0;i<strlen(a);i++){
            if(b[i]+b[i+1]!=3&&b[i]+b[i+1]!=30&&b[i]+b[i+1]!=300&&i%2==1) r=0;}
        if(r==0) printf("0");
        if(r==1) printf("1");}
}