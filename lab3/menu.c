#include <stdio.h>
#include <stdlib.h>
#include "linklist.h"

static tDataNode head[] =
{
    {"help","This is Help",help,&head[1]},
    {"add","This is Add  input 2 integers!",add,&head[2]},
    {"sub","This is  Sub  input 2 integers!",sub,&head[3]},
    {"multiple","This is Multiple input 2 integers!",multiple,&head[4]},
    {"divide","This is Divide input 2 integers!",divide,&head[5]},
    {"quit","This is Quit will quit from program!",quit,NULL}
};

int main()
{
    while(1)
    {
        char cmd[128];
        printf("please put in a cmd\n");
        scanf("%s",cmd);
        tDataNode *p=FindCmd(head,cmd);
        if(p==NULL)
        {
            printf("wrong command!\n");
            continue;
        }
        printf("%s:%s\n",p->cmd,p->desc);
        if(p->handler!=NULL)
        {
            p->handler();
        }
    }
}
