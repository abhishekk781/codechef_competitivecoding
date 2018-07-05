
 
 struct ListNode {
      int val;
      ListNode *next;
      ListNode(int x) : val(x), next(NULL) {}
 };

ListNode* Solution::mergeTwoLists(ListNode* A, ListNode* B) {
    ListNode *start=NULL,*end=NULL;
    while(A!=NULL && B!=NULL){
        if(A->val<B->val){
            ListNode *temp=new ListNode(0);
            temp->val=A->val;
            temp->next=NULL;
            if(start==NULL){ start=temp; end=temp; }
            else{
                end->next=temp;
                end=temp;
            }
            A=A->next;
        }
        else{
            ListNode *temp=new ListNode(0);
            temp->val=B->val;
            temp->next=NULL;
            if(start==NULL){ start=temp; end=temp; }
            else{
                end->next=temp;
                end=temp;
            }
            B=B->next;
        }
    }
    while(A!=NULL){
        ListNode *temp=new ListNode(0);
        temp->val=A->val;
        temp->next=NULL;
        end->next=temp;
        end=temp;
        A=A->next;
    }
    while(B!=NULL){
        ListNode *temp=new ListNode(0);
        temp->val=B->val;
        temp->next=NULL;
        end->next=temp;
        end=temp;
        B=B->next;
    }
    return start;
}
