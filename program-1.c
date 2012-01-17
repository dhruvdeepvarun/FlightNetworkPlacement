// Name: Dhruvdeep Varun
// ID: 200801040
// DA-IICT, Gandhinagar

// Program-1: Push/Pop funcionality of a Stack

#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

#define MAXSIZE 10

struct st
{
    int top;
    int stack[MAXSIZE];
};

struct st s;

int empty(void);
int full(void);
void push(void);
void pop(void);
void display(void);

int main()
{
    char ans;
    int ch;
    do
    {
        printf("\n\n********Stack Program**********\n\n");
        printf("1.PUSH\n");
        printf("2.POP\n");
        printf("3.DISPLAY\n");
        printf("4.QUIT\n");
        printf("\nEnter Your Choice: ");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:
            push();
            break;
            case 2:
            pop();
            break;
            case 3:
            display();
            break;
            case 4:
            exit(1);
            break;

            default:
            printf("\nINVALID CHOICE!!!!!!!!!!!!!\n");
            break;
        }
        printf("\nWant To Go To The Main Menu?[y/n]\n");
        ans = getch();
    }
    while(ans == 'y' || ans == 'Y');
    printf("\nPress Any Key To Exit");
    getch();
}

int full(void)
{
    if (s.top == MAXSIZE)
    return(1);
    else
    return(0);
}

int empty(void)
{
    if (s.top == 0)
    return(1);
    else
    return(0);
}
void push(void)
{
    char ch;
    int x;
    //do
    //{
    if(full() == 1)
    {
        printf("\nStack Full\n");
       // break;
    }
    else
    {
        s.top = s.top + 1;
        printf("\nEnter An Element To Be Pushed (0-9): ");
        scanf("%d",&x);
        if(x>=0 && x<=9)
        {
            s.stack[s.top] = x;
        }
        else
        {
            printf("OUT OF RANGE!!!!!  Please Enter A Number From 0-9: ");
            scanf("%d",&x);
            s.stack[s.top] = x;
        }

        do
        {
            printf("\nDo You Want The Next Element To Be Pushed Into The Stack? [y/n]");
            ch = getch();

            s.top = s.top + 1;
            x = x+1;
            s.stack[s.top] = x;
        }
        while((ch == 'y' || ch == 'Y') && x < 9);
    }
}

void pop(void)
{
    char ch;
    do
    {
        if(empty() == 1)
        {
            printf("\nStack Empty\n");
            break;
        }
        else
        {
            printf("\n%d has been popped !",s.stack[s.top]);
            s.top = s.top - 1;
        }
        printf("\nDo you Want To Pop Out More?[y/n]");
        ch = getch();
    }
    while(ch == 'Y' || ch == 'y');
}

void display(void)
{
    int i;
    if(empty() == 1)
    printf("\nStack Empty!!!");
    else
    {
        printf("\nDisplaying Stack............\n");
        for(i = s.top; i>0;i--)
        printf("\n%d",s.stack[i]);
    }
}
