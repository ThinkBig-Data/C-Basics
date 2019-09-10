/**********************************stack implementation using static array*/
#include <stdio.h>
#include<stdlib.h>
#define CAPACITY 5
int stack[CAPACITY] , top=-1;
void push(int);
int pop();
void peak();
void display();
int isempty();
int isfull();
void main()
{
  int ch,item;
  while(1)
  {
    printf("\t\t ***********************************************\n\n");
    printf("\t1. Push\n");
    printf("\t2. Pop\n");
    printf("\t3. peak\n");
    printf("\t4. Display\n");
    printf("\t5. Quit\n\n");
    printf("\t\t ***********************************************\n\n");

  printf("Enter your Choise : ");
  scanf("%d",&ch);
  switch(ch)
   {
     case 1 : printf("Enter the element to push : \n");
              scanf("\t%d",&item);
              push(item);
              break;
     case 2 : item = pop();
              if(item==0)
              {
                printf("Stack is UNDERFLOW..!!!\n");
              }
              else
              {
                printf("Popped item is %d\n", item);
              }
              break;
     case 3 : peak();
              break;
     case 4 : display();
              break;
     case 5 : exit(0);
              break;
     default : printf("Invalid Input...!!!\n\n");
   }
  }
}
void push(int ele)
{
  if(isfull())
  {
  printf("Stack is OVERFLOW..!!\n");
  }
  else
  {
  top++;
  stack[top] = ele;
  printf(" %d Pussed Successfully.",ele);
  }
}
int isfull()
{
  if( top == CAPACITY-1)
  {
    return 1;
  }
  else
  {
    return 0;
  }
}
int pop()
{
  if(isempty())
  {
    return 0;
  }
  else
  {
    return stack[top--];
  }
}
int isempty()
{
  if(top == -1)
  {
  return 1;
  }
  else
  {
    return 0;
  }
}
void peak()
{
  if(isempty())
  {
    printf("stack is empty ..!!\n");
  }
  else
  {
    printf(" the peak element is %d\n",stack[top]);
  }
}
void display()
{
  if(isempty())
  {
    printf("stack is empty ..!!\n");
  }
  else
  {
    int i;
    printf("stack elements are : \n");
    for(i=0;i<=top;i++)
    {
      printf("%d\n",stack[i]);
    }
  }
}
