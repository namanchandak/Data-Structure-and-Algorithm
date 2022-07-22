#include<stdio.h>
#include<stdlib.h>

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
    default :printf("invalid choice retry");
    }
}
    while (c!=5);


}
void create(){
int n; char ch;

if(start==NULL ){
  printf("enter a number -:");
    scanf("%d",&n);
    start=(struct node* )malloc(sizeof(struct node));
    start->data=n;
    start->add=NULL;
    temp=start;
    printf("\nTo add more elements press 'Y': ");
    scanf(" %c",&ch);
    while(ch=='y'||ch=='Y')
    {
         printf("enter next number -:");
         scanf("%d",&n);
       New=(struct node*)malloc(sizeof(struct node));
       New->data=n;
       New->add=NULL;
       temp->add=New;
       temp=New;
       printf("\nTo add more elements press 'Y': ");
       scanf(" %c",&ch);
    }
}
else{
   printf("list already created");
}

}
void insert(){
int n,position,count=0,i=1;
if(start==NULL)
{
    printf("list not created");
}
else{
    printf("enter the data-:");
   scanf("%d",&n);
    New=(struct node*)malloc(sizeof(struct node));
    New->data=n;
    New->add=NULL   ;
    printf("enter the position-:");
     scanf("%d",&position);
     if(position==1){
        New->add=start;
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
        printf("invalid no. it should be >=%d",count+1);
     }
     else if(position==count+1){
            temp=start;
        while(temp!=NULL){
            temp=temp->add;

        }
        temp->add=New;
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
  if(start==NULL){
    printf("create a list ");
  }
    else{
        printf("enter the position-:");
    scanf("%d",&position);
    if(position==1){
        temp=start;
        start=start->add;
        printf("deleted data=%d",temp->data);
        free (temp);
    }
    else{
        temp=start;
        while(temp!=NULL){
                count++;
            temp=temp->add;
            }
     //   printf("\n%d\n",count);
      if(position>count){
                printf("enter the valid position");

      }
      //working correctly till here
        else if(position==count){
               //  printf("\n%d\n",start->data);
            next=start;
            while(next->add!=NULL)
            {
                    prev=next;
                next=next->add;

            }
                   printf("deleted data=%d",next->data);
                   free(next);
            prev->add=NULL;
     //   printf("\n%d\n",prev->data);
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
            next=next->add;
            printf("deleted data=%d",temp->data);
            free(temp);
            prev->add=next;
        }
    }
    }

}
void display(){
if(start==NULL)
{
            printf("list not created\n");

}
else{
           printf("list -: \n");
temp=start;
while(temp!=NULL){

    printf("%d\n",temp->data);
temp=temp->add;
}

}
}
/*

-----------Link List-------------
Press 1 for Create
Press 2 for Insert
Press 3 for Delete
Press 4 for Display
Press 5 for Exit
Enter Your choice : 1
enter a number -:1

To add more elements press 'Y': y
enter next number -:2

To add more elements press 'Y': y
enter next number -:3

To add more elements press 'Y': y
enter next number -:4

To add more elements press 'Y': y
enter next number -:5

To add more elements press 'Y': n

-----------Link List-------------
Press 1 for Create
Press 2 for Insert
Press 3 for Delete
Press 4 for Display
Press 5 for Exit
Enter Your choice : 3
enter the position-:3
deleted data=3
-----------Link List-------------
Press 1 for Create
Press 2 for Insert
Press 3 for Delete
Press 4 for Display
Press 5 for Exit
Enter Your choice : 4
list -:
1
2
4
5

-----------Link List-------------
Press 1 for Create
Press 2 for Insert
Press 3 for Delete
Press 4 for Display
Press 5 for Exit
Enter Your choice : 2
enter the data-:3
enter the position-:3

-----------Link List-------------
Press 1 for Create
Press 2 for Insert
Press 3 for Delete
Press 4 for Display
Press 5 for Exit
Enter Your choice : 4
list -:
1
2
3
4
5

-----------Link List-------------
Press 1 for Create
Press 2 for Insert
Press 3 for Delete
Press 4 for Display
Press 5 for Exit
Enter Your choice : 1
list already created
-----------Link List-------------
Press 1 for Create
Press 2 for Insert
Press 3 for Delete
Press 4 for Display
Press 5 for Exit
Enter Your choice : 3
enter the position-:7
enter the valid position
-----------Link List-------------
Press 1 for Create
Press 2 for Insert
Press 3 for Delete
Press 4 for Display
Press 5 for Exit
Enter Your choice :




*/
