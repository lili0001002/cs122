#include <stdio.h>
#include <stdlib.h>
#include "linklist.h"

static tDataNode head[] =
{
    {"help","This is a help cmd!",help,&head[1]},
    {"add","This is a add cmd, input 2 integers!",add,&head[2]},
    {"sub","This is a sub cmd, input 2 integers!",sub,&head[3]},
    {"multiple","This is a multiple cmd, input 2 integers!",multiple,&head[4]},
    {"divide","This is a divide cmd, input 2 integers!",divide,&head[5]},
    {"quit","This is a quit cmd,will quit from program!",quit,NULL}
};

tDataNode* FindCmd(tDataNode* head,char* cmd)
{
    if(head==NULL||cmd==NULL)
    {
        return NULL;
    }
    tDataNode* p=head;
    while(p!=NULL&&strcmp(p->cmd,cmd)!=0)
    {
        p=p->next;
    }
    if(p==NULL)
    {
        return NULL;
    }
    return p;
}

int ShowAllCmd(tDataNode* head)
{
    printf("Menu List:\n");
    tDataNode*p=head;
    while(p!=NULL)
    {
        printf("%s - %s\n",p->cmd,p->desc);
        p=p->next;
    }
    return 0;
}

int help()
{
    ShowAllCmd(head);
}

int add()
{
    printf("please input two integers\n");
    int x,y;
    scanf("%d%d",&x,&y);
    int result=x+y;
    printf("%d\n",result);
    return 0;
}

int sub()
{
    printf("please input two integers\n");
    int x,y;
    scanf("%d%d",&x,&y);
    int result=x-y;
    printf("%d\n",result);
    return 0;
}

int multiple()
{
    printf("please input two integers\n");
    int x,y;
    scanf("%d%d",&x,&y);
    int result=x*y;
    printf("%d\n",result);
    return 0;
}

int divide()
{
    printf("please input two integers\n");
    int x,y;
    scanf("%d%d",&x,&y);
    int result=x/y;
    printf("%d\n",result);
    return 0;
}

int quit()
{
    exit(0);
}

