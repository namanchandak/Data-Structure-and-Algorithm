#include<stdio.h>
struct node
{
    struct node*ladd;
    struct node*radd;
    int data;
};
struct node *start=NULL,*temp=NULL,*prev=NULL,*New=NULL,*next=NULL;
 void insert();
 void create();
 void Delete();
 void display();



int main()
{
    int ch;

    do
    {
        printf("\n----------------Doubly Link List----------------\n");
        printf("Press 1 to Create a Link List\n");
        printf("Press 2 to Insert the element into Link List\n");
        printf("Press 3 to Delete the element from Link List\n");
        printf("Press 4 to Display all elements from Link List\n");
        printf("Press 5 for EXIT\n");
        printf("Enter your choice: ");
        scanf("%d",&ch);

        switch(ch)
        {
            case 1:create();break;
            case 2:insert();break;
            case 3:Delete(); break;
            case 4:display();break;
            case 5:break;
            default:printf("Invalid Choice, re-enter the choice again: ");
        }
    }
    while(ch!=5);

    return 0;
}

void create()
{
    int n;
    char c;
    printf("\nenter a number\n");
    scanf("%d",&n);
    start=(struct node*)malloc(sizeof(struct node));
    start->data=n;
    start->ladd=NULL;
    start->radd=NULL;
    temp=start;
    printf("\nTo add more elementd in the list, press 'y' and to terminate press any other key: ");
    scanf(" %c",&c);
    while (c=='y'||c=='Y')
    {
        printf("Enter next value: ");
        scanf("%d",&n);
        New=(struct node*)malloc(sizeof(struct node));
        New->data=n;
        New->ladd=temp;
        New->radd=NULL;
        temp->radd=New;
        temp=New;
        printf("\nTo add more elementd in the list, press 'y' and to terminate press any other key: ");
        scanf(" %c",&c);
    }
}
void insert()
{
    int n, position, count=0, i=1;

    printf("Enter a value for insertion: ");
    scanf("%d",&n);
    New=(struct node*)malloc(sizeof(struct node));
    New->data=n;
    New->ladd=NULL;
    New->radd=NULL;
    temp=start;
    printf("Enter a position for insertion: ");
    scanf("%d",&position);
    if(position==1)
    {
        New->radd=start;
        start->ladd=New;
        start=New;
    }
    else
    {
        temp=start;
        while (temp!=  NULL)

        {
            /* code */
            count++;
            temp=temp->radd;
        }
        if(position>count+1)
        {
            printf("Invalid position, it can't be more than %d ",(count+1));
        }
        else
        {
            if(position==count+1)
            {
                temp = start;
            while(temp->radd!=NULL)
            {
                temp = temp->radd;
            }
                temp->radd=New;
                New->ladd=temp;
            }
            else
            {
                next=start;
                while (i<position)
                {
                    prev=next;
                    next=next->radd;
                    i++;
                }
                prev->radd=New;
                New->ladd=prev;
                New->radd=next;
                next->ladd=New;


            }

        }


    }
}
void Delete()
{
    int i=1,count=0,position,n;
    printf("Enter a Position for Deletion: ");
    scanf("%d",&position);
    if(position==1)
    {
        printf("Deleted Element  = %d\n",start->data);
        start=start->radd;
        free(start->ladd);
        start->ladd=NULL;

    }
    else
    {
        temp=start;
        while (temp!=NULL)
        {
            temp=temp->radd;
            count ++;
        }
        if(position>count)
        {
             printf("Invalid position, it can'n be more than %d\n",count);
        }
        else if (position==count)

        {
            /* code */
            next=start;
            while (next->radd!=NULL)
            {
                next=next->radd;
            }
            printf("Deleted Element = %d\n",next->data);
            next->ladd->radd=NULL;
            free (next);
        }
        else
        {
            next=start;
            while (i<position)
            {
                prev=next;
                next=next->radd;
                i++;
            }
            printf("Deleted Element  = %d\n",next->data);
            next->ladd->radd = next->radd;
            next->radd->ladd=next->ladd;
            free(next);
        }


    }
}
void display()
{
    temp=start;
    while (temp!=NULL)
    {
        /* code */
        printf("%d ",temp->data);
        temp = temp->radd;
    }

}

/*

----------------Doubly Link List----------------
Press 1 to Create a Link List
Press 2 to Insert the element into Link List
Press 3 to Delete the element from Link List
Press 4 to Display all elements from Link List
Press 5 for EXIT
Enter your choice: 1

enter a number
1

To add more elementd in the list, press 'y' and to terminate press any other key: y
Enter next value: 2

To add more elementd in the list, press 'y' and to terminate press any other key: y
Enter next value: 3

To add more elementd in the list, press 'y' and to terminate press any other key: y
Enter next value: 4

To add more elementd in the list, press 'y' and to terminate press any other key: y
Enter next value: 5

To add more elementd in the list, press 'y' and to terminate press any other key: y
Enter next value: 6

To add more elementd in the list, press 'y' and to terminate press any other key: y
Enter next value: 7

To add more elementd in the list, press 'y' and to terminate press any other key: n

----------------Doubly Link List----------------
Press 1 to Create a Link List
Press 2 to Insert the element into Link List
Press 3 to Delete the element from Link List
Press 4 to Display all elements from Link List
Press 5 for EXIT
Enter your choice: 2
Enter a value for insertion: 1
Enter a position for insertion: 1

----------------Doubly Link List----------------
Press 1 to Create a Link List
Press 2 to Insert the element into Link List
Press 3 to Delete the element from Link List
Press 4 to Display all elements from Link List
Press 5 for EXIT
Enter your choice: 4
1 1 2 3 4 5 6 7
----------------Doubly Link List----------------
Press 1 to Create a Link List
Press 2 to Insert the element into Link List
Press 3 to Delete the element from Link List
Press 4 to Display all elements from Link List
Press 5 for EXIT
Enter your choice: 2
Enter a value for insertion: 8
Enter a position for insertion: 8

----------------Doubly Link List----------------
Press 1 to Create a Link List
Press 2 to Insert the element into Link List
Press 3 to Delete the element from Link List
Press 4 to Display all elements from Link List
Press 5 for EXIT
Enter your choice: 4
1 1 2 3 4 5 6 8 7
----------------Doubly Link List----------------
Press 1 to Create a Link List
Press 2 to Insert the element into Link List
Press 3 to Delete the element from Link List
Press 4 to Display all elements from Link List
Press 5 for EXIT
Enter your choice: 3
Enter a Position for Deletion: 1
Deleted Element  = 1

----------------Doubly Link List----------------
Press 1 to Create a Link List
Press 2 to Insert the element into Link List
Press 3 to Delete the element from Link List
Press 4 to Display all elements from Link List
Press 5 for EXIT
Enter your choice: 3
Enter a Position for Deletion: 8
Deleted Element = 7

----------------Doubly Link List----------------
Press 1 to Create a Link List
Press 2 to Insert the element into Link List
Press 3 to Delete the element from Link List
Press 4 to Display all elements from Link List
Press 5 for EXIT
Enter your choice:
4
1 2 3 4 5 6 8
----------------Doubly Link List----------------
Press 1 to Create a Link List
Press 2 to Insert the element into Link List
Press 3 to Delete the element from Link List
Press 4 to Display all elements from Link List
Press 5 for EXIT
Enter your choice: 3
Enter a Position for Deletion: 1
Deleted Element  = 1

----------------Doubly Link List----------------
Press 1 to Create a Link List
Press 2 to Insert the element into Link List
Press 3 to Delete the element from Link List
Press 4 to Display all elements from Link List
Press 5 for EXIT
Enter your choice: 3
Enter a Position for Deletion: 2
Deleted Element  = 3

----------------Doubly Link List----------------
Press 1 to Create a Link List
Press 2 to Insert the element into Link List
Press 3 to Delete the element from Link List
Press 4 to Display all elements from Link List
Press 5 for EXIT
Enter your choice: 4
2 4 5 6 8
----------------Doubly Link List----------------
Press 1 to Create a Link List
Press 2 to Insert the element into Link List
Press 3 to Delete the element from Link List
Press 4 to Display all elements from Link List
Press 5 for EXIT
Enter your choice: 4
2 4 5 6 8
----------------Doubly Link List----------------
Press 1 to Create a Link List
Press 2 to Insert the element into Link List
Press 3 to Delete the element from Link List
Press 4 to Display all elements from Link List
Press 5 for EXIT
Enter your choice: 2
Enter a value for insertion: 1
Enter a position for insertion: 2

----------------Doubly Link List----------------
Press 1 to Create a Link List
Press 2 to Insert the element into Link List
Press 3 to Delete the element from Link List
Press 4 to Display all elements from Link List
Press 5 for EXIT
Enter your choice: 2
Enter a value for insertion: 4
Enter a position for insertion: 5

----------------Doubly Link List----------------
Press 1 to Create a Link List
Press 2 to Insert the element into Link List
Press 3 to Delete the element from Link List
Press 4 to Display all elements from Link List
Press 5 for EXIT
Enter your choice: 4
2 1 4 5 4 6 8
----------------Doubly Link List----------------
Press 1 to Create a Link List
Press 2 to Insert the element into Link List
Press 3 to Delete the element from Link List
Press 4 to Display all elements from Link List
Press 5 for EXIT
Enter your choice: 3
Enter a Position for Deletion: 2
Deleted Element  = 1

----------------Doubly Link List----------------
Press 1 to Create a Link List
Press 2 to Insert the element into Link List
Press 3 to Delete the element from Link List
Press 4 to Display all elements from Link List
Press 5 for EXIT
Enter your choice: 4
2 4 5 4 6 8
----------------Doubly Link List----------------
Press 1 to Create a Link List
Press 2 to Insert the element into Link List
Press 3 to Delete the element from Link List
Press 4 to Display all elements from Link List
Press 5 for EXIT
Enter your choice: 3
Enter a Position for Deletion: 6
Deleted Element = 8

----------------Doubly Link List----------------
Press 1 to Create a Link List
Press 2 to Insert the element into Link List
Press 3 to Delete the element from Link List
Press 4 to Display all elements from Link List
Press 5 for EXIT
Enter your choice: 3
Enter a Position for Deletion: 9
Invalid position, it can'n be more than 5

----------------Doubly Link List----------------
Press 1 to Create a Link List
Press 2 to Insert the element into Link List
Press 3 to Delete the element from Link List
Press 4 to Display all elements from Link List
Press 5 for EXIT
Enter your choice: 2
Enter a value for insertion: 6
Enter a position for insertion: 6

----------------Doubly Link List----------------
Press 1 to Create a Link List
Press 2 to Insert the element into Link List
Press 3 to Delete the element from Link List
Press 4 to Display all elements from Link List
Press 5 for EXIT
Enter your choice: 2
Enter a value for insertion: 5
Enter a position for insertion: 6

----------------Doubly Link List----------------
Press 1 to Create a Link List
Press 2 to Insert the element into Link List
Press 3 to Delete the element from Link List
Press 4 to Display all elements from Link List
Press 5 for EXIT
Enter your choice: 2
Enter a value for insertion: 3
Enter a position for insertion: 3

----------------Doubly Link List----------------
Press 1 to Create a Link List
Press 2 to Insert the element into Link List
Press 3 to Delete the element from Link List
Press 4 to Display all elements from Link List
Press 5 for EXIT
Enter your choice: 4
2 4 3 5 4 6 5 6
----------------Doubly Link List----------------
Press 1 to Create a Link List
Press 2 to Insert the element into Link List
Press 3 to Delete the element from Link List
Press 4 to Display all elements from Link List
Press 5 for EXIT
Enter your choice: 3
Enter a Position for Deletion: 4
Deleted Element  = 5

----------------Doubly Link List----------------
Press 1 to Create a Link List
Press 2 to Insert the element into Link List
Press 3 to Delete the element from Link List
Press 4 to Display all elements from Link List
Press 5 for EXIT
Enter your choice: 3
Enter a Position for Deletion: 1
Deleted Element  = 2

----------------Doubly Link List----------------
Press 1 to Create a Link List
Press 2 to Insert the element into Link List
Press 3 to Delete the element from Link List
Press 4 to Display all elements from Link List
Press 5 for EXIT
Enter your choice: 3
Enter a Position for Deletion: 8
Invalid position, it can'n be more than 6

----------------Doubly Link List----------------
Press 1 to Create a Link List
Press 2 to Insert the element into Link List
Press 3 to Delete the element from Link List
Press 4 to Display all elements from Link List
Press 5 for EXIT
Enter your choice: 3
Enter a Position for Deletion: 6
Deleted Element = 6

----------------Doubly Link List----------------
Press 1 to Create a Link List
Press 2 to Insert the element into Link List
Press 3 to Delete the element from Link List
Press 4 to Display all elements from Link List
Press 5 for EXIT
Enter your choice: 4
4 3 4 6 5
----------------Doubly Link List----------------
Press 1 to Create a Link List
Press 2 to Insert the element into Link List
Press 3 to Delete the element from Link List
Press 4 to Display all elements from Link List
Press 5 for EXIT
Enter your choice: 5
*/
