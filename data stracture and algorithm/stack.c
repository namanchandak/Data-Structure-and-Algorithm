#include<stdio.h>
#define maxsize 10
int stack [maxsize],top=-1;
void push();
void pop();
void dispaly();

int main(){
int c;
do
{ printf("enter your choice\t");
    scanf("%d",&c);
    switch (c)
   { case 1:push();break;
    case 2:pop();break;
    case 3:dispaly();break;
        case 4:break;break;

    default:printf("invalid");
}}
    while(c!=4);
}

    void push(){
        int a;
        if (top==maxsize-1){
            printf("over flow");
        }
        else{
                 printf("enter your number to add ");
scanf("%d",&a);
top++;
stack[top]=a;
        }

    }
    void pop(){
if(top==-1)
{
    printf("stack under flow");
}
else {
printf("Deleted =%d",stack[top]);
top--;
}

    }
    void dispaly(){
        int i;
if(top==-1)
{
    printf("stack under flow");
}
else {
for(i=0;i<=top;i++){
printf("%d\t",stack[i]);
}
}

    }
