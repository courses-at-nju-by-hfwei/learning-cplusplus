//
// Created by hengxin on 18-1-4.
//
#include <iostream>
using namespace std;
typedef struct node
{
    char data;
    struct node *next,*pre;
}Node;

typedef struct linkedlist
{
    Node *head;
}Linkedlist;

Node* find(int x,Linkedlist *list);

int main(){
    Linkedlist *list = (Linkedlist*)malloc(sizeof(Linkedlist));
    list->head = 0;
    int t,x,y,k;
    char c,col;
    cin >> t;
    Node*p,*q;
    while (t--){
        cin >> c;
        switch(c){
            case 'A':
            {cin >> x >> col;
                Node *temp =(Node*)malloc(sizeof(Node));
                temp -> data = col;
                if (list->head == 0){
                    list->head = temp;
                    list -> head -> pre = temp;
                    list -> head -> next = temp;
                }
                else {
                    if (x==0) {
                        temp ->next = list -> head;
                        temp ->pre = list -> head ->pre;
                        list ->head -> pre -> next= temp;
                        list ->head ->pre =temp;
                        list->head = temp;
                    } else {
                        p = find(x,list);
                        temp->next = p;
                        temp->pre = p->pre;
                        p->pre->next = temp;
                        p->pre = temp;
                    }
                }
                break;}
            case 'D':
            {cin >> x;
                p = find(x,list);
                //cout << p->data;
                if (p==list->head)
                {   list -> head -> pre -> next = p->next;
                    list -> head -> next -> pre = p-> pre;
                    list -> head = p->next;
                }
                else{
                    p->pre->next = p->next;
                    p->next->pre = p->pre;
                }
                //delete(p);
                break;}
            case 'S':
            {cin >> x >> y;
                p = find(x,list);
                q = find(y,list);
                k = p->data;
                p->data = q->data;
                q->data = k;
                break;}
            case 'P':
            {   bool flag = true;
                for (Node* i=list->head;i!=list->head || flag;i=i->next){
                    cout << (i->data);
                    flag =false;
                }
                cout << endl;
                break;}
        }
    }
    /*bool flag = true;
    Node* kk;
    for (Node* i=list->head;i!=list->head || flag;i=kk){
        flag =false;
        kk = i->next;
    }
    delete(list);*/
    return 0;
}

Node* find(int x,Linkedlist *list){
    int co=0;
    Node* i=list->head;
    while(co<x){
        i=i->next;
        co++;
    }
    return i;
}

