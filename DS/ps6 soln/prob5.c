#include <stdio.h>
int stack[20];
int top=-1;

int push(int ele)
{
    top=top+1;
    stack[top]=ele;
}

int pop()
{
    int pop_ele = stack[top];
    top=top-1;
    return pop_ele;
}

int peek()
{
    int peek_ele = stack[top];
    return peek_ele;
}

int display()
{
    for(int i=0;i<=top;i++)
    {
        printf("%d ",stack[i]);
    }
}

int insertAtCrtPos(int temp)
{
    if(top==-1 || peek() < temp)
    {
        push(temp);
        return;
    }
    int ele = pop();
    insertAtCrtPos(temp);

    push(ele);
}

int sort()
{
    if(top==-1)
    {
        return -1;
    }
    int temp = pop();
    sort();

    insertAtCrtPos(temp);

}

int main() {

    push(17);
    push(20);
    push(01);
    push(100);
    push(40);
    printf("\nBefore sorting: ");
    display();

    sort();

    printf("\nAfter sorting: ");
    display();
}

