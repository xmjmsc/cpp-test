#include<iostream>
using namespace std;

    struct LinkNode
    {
        int val;
        LinkNode* next;
    };
    
    

    void fun1(LinkNode *pHead){
        
        LinkNode *p =pHead;//头

        for(int i = 1; i<10;i++){
            LinkNode* p2= new LinkNode;
            p2->val = i;
            p2->next = NULL;
            p->next =p2;
            p = p2;
        }
    }

    int main(){
        LinkNode *head =NULL;
        head = new LinkNode;
        head->val = 0;
        head->next =NULL;
        fun1(head);
    }