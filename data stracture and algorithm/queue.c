#include<stdio.h>
#define maxsize 10
int q [maxsize],rear=-1,front=0;
void insert();
void Delete();
void dispaly();

int main(){
int c;
do
{ printf("enter your choice\t");
    scanf("%d",&c);
    switch (c)
   { case 1:insert();break;
    case 2:Delete();break;
    case 3:display();break;
        case 4:break;break;

    default:printf("invalid");
}}
    while(c!=4);
}
void insert(){
int n;
if(rear==maxsize-1){
    printf("queue overflow\n");
}
else{
    printf("enter the value\t");
    scanf("%d",&n);
    rear++;
    q[rear]=n;
}
}
void Delete(){
if(rear<front)
{
    printf("queue underflow\n");
}
else{
    printf("deleted data=%d\n",q[front]);
    front++;
}
}

void display(){
if(rear<front)
{
    printf("queue underflow\n");
}
else{
    for(int i=front;i<=rear;i++)
{

    printf("%d\t",q[i]);
}
}
}
