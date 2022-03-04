struct node *reverse (struct node *head, int k)
    { 
          if(head==NULL)
          {return NULL;
          }
          int count =0;
          struct node *curr=head;
          struct node *temp=NULL;
          struct node *prev=NULL;
          
           while(curr!=NULL && count<k)
           {
               temp=curr->next;
               curr->next=prev;
               prev=curr;
               curr=temp;
               count++;
               
           }
           if(temp!=NULL)
           {
               head->next=reverse(temp,k);
           }
           return prev;




    }