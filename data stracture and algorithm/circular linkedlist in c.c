#include<stdio.h>
#include<stdlib.h>
struct node
{
    /* data */
    int data;
    struct  node* add;

        /* data */
    ;

};
struct node* start=NULL,*New,*next,*prev,*temp;
void create();
void insert();
void Delete();
void display();

int main()
{
    int ch;

    do
    {
        printf("\n----------------Circular Link List----------------\n");
        printf("Press 1 to Create a Link List\n");
        printf("Press 2 to Insert the element into List\n");
        printf("Press 3 to Delete the element from List\n");
        printf("Press 4 to Display all elements of List\n");
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
    printf("\nEnter a Value: ");
    scanf("%d",&n);
    start = (struct node*) malloc(sizeof(struct node));

    start->data=n;
    start->add=start;
    temp=start;
    printf("To add more elemtns, Press 'Y': ");
    scanf(" %c",&c);
    while(c=='y' || c == 'Y')
    {
        printf("\nEnter a Value: ");
        scanf("%d",&n);
        New=(struct node*)malloc(sizeof(struct node));
        New->data=n;
        New->add=start;
        temp->add=New;
        temp=New;
        printf("To add more elemtns, Press 'Y': ");
        scanf(" %c",&c);

    }
}


void insert()
{
    int c=0,i=1,n,position;
    if(start==NULL)
    {
        printf("List Not Created, Create a list first");
    }
    else
    {

        printf("\nEnter a Value: ");
        scanf("%d",&n);
        temp=start;
        while(temp->add!=start)
        {
            temp=temp->add;
            c++;
        }
        c++;
        New=(struct node*)malloc(sizeof(struct node));
        New->data=n;
        //New->add=NULL;

        printf("Enter a position for node insertion: ");
        scanf("%d",&position);
        if(position==1)
        {
            temp->add=New;
            New->add=start;
            start=New;

        }
        else if(position>c+1)
        {
            printf("\nInvalid Position, it can't be more than %d\n",(c+1));
        }
        else if(position==c+1)
        {
            temp->add=New;
            New->add=start;
            ////
            temp=New;
        }
        else
        {
            next=start;
            while(i<position)

            {
                prev=next;
                next=next->add;
                i++;

            }
            prev->add=New;
            New->add=next;
        }
    }
}

void Delete()
{
    int c=0,position,i=1;
    if(start == NULL)
    {
        printf("List Not Created, Create a list first");
    }
    else
    {
        temp=start;
        while(temp->add!=start)
        {
            temp=temp->add;
            c++;
        }
         printf("Enter a Posiotion for Deletion: ");
        scanf("%d",&position);

        if(position==1)
        {
            temp->add=start->add;
            temp=start;
            start=start->add;
            printf("Deleted Element = %d: \n",temp->data);
            free(temp);
        }
        else
        {
            /* code */
            if(position>c)
            {
                printf("\nInvalid Position, it can't be more than %d\n",c);
            }
            else if(position==c+1)
            {
                next=start;
                while(next->add!=start)

                    {
                        prev=next;
                        next=next->add;
                        //i++;

                    }
                    printf("\n Deleted Element = %d\n",next->data);
                    free(next);
                    prev->add=start;
            }
            else
            {
                next=start;
                while(i<position)

                    {
                        prev=next;
                        next=next->add;
                        i++;

                    }
                    printf("\n Deleted Element = %d\n",next->data);
                    prev->add=next->add;
                    free(next);
            }
        }
    }
}


void display()
{
    if(start == NULL)
    {
        printf("List Not Created, Create a list first");
    }
    else
    {
    temp=start;
    do
        {
            printf("%d ",temp->data);
            temp = temp->add;
        }while(temp!=start);

    }
}

/*

----------------Circular Link List----------------
Press 1 to Create a Link List
Press 2 to Insert the element into List
Press 3 to Delete the element from List
Press 4 to Display all elements of List
Press 5 for EXIT
Enter your choice: 1

Enter a Value: 1
To add more elemtns, Press 'Y': y

Enter a Value: 2
To add more elemtns, Press 'Y': y

Enter a Value: 3
To add more elemtns, Press 'Y': n

----------------Circular Link List----------------
Press 1 to Create a Link List
Press 2 to Insert the element into List
Press 3 to Delete the element from List
Press 4 to Display all elements of List
Press 5 for EXIT
Enter your choice: 2

Enter a Value: 1
Enter a position for node insertion: 1

----------------Circular Link List----------------
Press 1 to Create a Link List
Press 2 to Insert the element into List
Press 3 to Delete the element from List
Press 4 to Display all elements of List
Press 5 for EXIT
Enter your choice: 4
1 1 2 3
----------------Circular Link List----------------
Press 1 to Create a Link List
Press 2 to Insert the element into List
Press 3 to Delete the element from List
Press 4 to Display all elements of List
Press 5 for EXIT
Enter your choice: 2

Enter a Value: 4
Enter a position for node insertion: 5

----------------Circular Link List----------------
Press 1 to Create a Link List
Press 2 to Insert the element into List
Press 3 to Delete the element from List
Press 4 to Display all elements of List
Press 5 for EXIT
Enter your choice: 2

Enter a Value: 6
Enter a position for node insertion: 7

Invalid Position, it can't be more than 6

----------------Circular Link List----------------
Press 1 to Create a Link List
Press 2 to Insert the element into List
Press 3 to Delete the element from List
Press 4 to Display all elements of List
Press 5 for EXIT
Enter your choice: 2

Enter a Value: 6
Enter a position for node insertion: 6

----------------Circular Link List----------------
Press 1 to Create a Link List
Press 2 to Insert the element into List
Press 3 to Delete the element from List
Press 4 to Display all elements of List
Press 5 for EXIT
Enter your choice: 4
1 1 2 3 4 6
----------------Circular Link List----------------
Press 1 to Create a Link List
Press 2 to Insert the element into List
Press 3 to Delete the element from List
Press 4 to Display all elements of List
Press 5 for EXIT
Enter your choice: 3
Enter a Posiotion for Deletion: 1
Deleted Element = 1:

----------------Circular Link List----------------
Press 1 to Create a Link List
Press 2 to Insert the element into List
Press 3 to Delete the element from List
Press 4 to Display all elements of List
Press 5 for EXIT
Enter your choice: 4
1 2 3 4 6
----------------Circular Link List----------------
Press 1 to Create a Link List
Press 2 to Insert the element into List
Press 3 to Delete the element from List
Press 4 to Display all elements of List
Press 5 for EXIT
Enter your choice: 3
Enter a Posiotion for Deletion: 1
Deleted Element = 1:

----------------Circular Link List----------------
Press 1 to Create a Link List
Press 2 to Insert the element into List
Press 3 to Delete the element from List
Press 4 to Display all elements of List
Press 5 for EXIT
Enter your choice: 4
2 3 4 6
----------------Circular Link List----------------
Press 1 to Create a Link List
Press 2 to Insert the element into List
Press 3 to Delete the element from List
Press 4 to Display all elements of List
Press 5 for EXIT
Enter your choice: 4
2 3 4 6
----------------Circular Link List----------------
Press 1 to Create a Link List
Press 2 to Insert the element into List
Press 3 to Delete the element from List
Press 4 to Display all elements of List
Press 5 for EXIT
Enter your choice: 1

Enter a Value: 2
To add more elemtns, Press 'Y': y

Enter a Value: 5
To add more elemtns, Press 'Y': y

Enter a Value: 6
To add more elemtns, Press 'Y': n

----------------Circular Link List----------------
Press 1 to Create a Link List
Press 2 to Insert the element into List
Press 3 to Delete the element from List
Press 4 to Display all elements of List
Press 5 for EXIT
Enter your choice: 4
2 5 6
----------------Circular Link List----------------
Press 1 to Create a Link List
Press 2 to Insert the element into List
Press 3 to Delete the element from List
Press 4 to Display all elements of List
Press 5 for EXIT
Enter your choice:



*/

