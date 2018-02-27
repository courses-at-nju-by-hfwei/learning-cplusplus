//
// Created by hengxin on 18-1-13.
//

#include <stdio.h>
#include <string.h>
int function(char *str){
    int len=strlen(str);
    int j=1;
    int A[len]={0};
    for (int i=0;i<len;i++){
        if (str[i]=='(') {j++;A[j]=1;}
        else if (str[i]=='{') {j++;A[j]=2;}
        else if (str[i]=='[') {j++;A[j]=3;}
        else if (str[i]==')') {j--;A[j]=A[j]-1;}
        else if (str[i]=='}') {j--;A[j]=A[j]-2;}
        else if (str[i]==']') {j--;A[j]=A[j]-3;}
    }
    int t=1;
    for (int i=0;i<len;i++){
        if (A[i]!=0) {t=0;break;}
    }
    return t;
}

int main(){
    char *string;
    int times;
    scanf("%d",&times);
    for (int i=1;i<=times;i++){
        for (int t=0;t<1000;t++)
        {scanf("%s",&string[t]);}
        int x=function(string);
        printf("%d",x);
    }
    return 0;
}
