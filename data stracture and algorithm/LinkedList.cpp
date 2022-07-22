#include<iostream>
using namespace std;

struct node{
int data ;
struct node *add;
};
struct node *start=NULL,*temp,*New,*next,*prev;
void insert();
void create();
void Delete();
void display();
int main (){
   int c;
do{
        printf("\n-----------Link List-------------\n");
        printf("Press 1 for Create\n");
        printf("Press 2 for Insert\n");
        printf("Press 3 for Delete\n");
        printf("Press 4 for Display\n");
        printf("Press 5 for Exit\n");
        printf("Enter Your choice : ");
        scanf("%d",&c);
    switch(c)

    {case 1:create();break;
    case 2:insert();break;
    case 3:Delete();break;
    case 4:display();break;
    case 5:break;
    default :cout<<"invalid choice retry";
    }
}
    while (c!=5);


}
void create(){
int n; char ch;

if(start==NULL ){
  cout<<"enter a number";
    cin>>n;
    start=(struct node* )malloc(sizeof(struct node));
    start->data=n;
    start->add=NULL;
    temp=start;
    cout<<"\nTo add more elements press 'Y': ";
    cin>>ch;
    while(ch=='y'||ch=='Y')
    {
         cout<<"enter next number";
         cin>>n;
       New=(struct node*)malloc(sizeof(struct node));
       New->data=n;
       New->add=NULL;
       temp->add=New;
       temp=New;
       cout<<"\nTo add more elements press 'Y': ";
    cin>>ch;
    }
}
else{
    cout <<"list already created";
}

}
void insert(){
int n,position,count,i=1;
if(start==NULL)
{
    cout<<"list not created";
}
else{
    cout<<"enter the data";
    cin>>n;
    New=(struct node*)malloc(sizeof(struct node));
    New->data=n;
    New->add=NULL   ;
    cout<<"enter the position";
     cin>>position;
     if(position==1){
        new->add=start;
        start=New;
     }
     else{
        temp=start;
        while(temp!=NULL)
        {
            count++;
            temp=temp->add;
        }
     }
     if(position>count+1){
        cout<<"invalid no. it should be >=">>count+1;
     }
     else if(position==count+1){
            temp=start;
        while(temp!=NULL){
            temp=temp->add;

        }
     }
     else{
       next=start;
       while(i<position){
        prev=next;
        next=next->add;
        i++;
       }
       prev->add=New;
       New->add=next;
    }
}
}
void Delete(){
  int i=1,count=0,position;
  if(start==null){
    cout<<"create a list ";
  }
    else{
        cout<<"enter the position";
    cin>>n;
    if(position==1){
        temp=start;
        start=start->add;
        cout<<"deleted data="<<temp->data;
        free (temp);
    }
    else{
        temp=start;
        while(temp!=NULL){
                count++;
            temp=temp->add;
            }
      if(position>count){
                cout<<"enter the valid position";

      }
        else if(position==count){
            next=start;
            while(next!=NULL){
                    prev=next;
                next=next->add;

            }
                   cout<<"deleted data="<<next->data;
                   free(next);
            prev->add=NULL;

        }
        else{
            next=start;
            while(i<position)
            {
                prev=next;
                next=next->add;
                i++;
                }
            temp=next;
            next=next->data;
                    cout<<"deleted data="<<temp->data;
            free(temp);
            prev->add=next;
        }
    }
    }

}
void display(){
if(start==NULL)
{
            cout<<"list not created";

}
else{
            cout<<"list -: ";
temp=start;
while(temp!=NULL){

    cout<<temp->data<<endl;
temp=temp->add;
}

}
}
