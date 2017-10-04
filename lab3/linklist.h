#include <stdio.h>
#include <stdlib.h>

typedef struct DataNode
{
    char* cmd;
    char* desc;
    int(*handler)();
    struct DataNode* next;
}tDataNode;

tDataNode* FindCmd(tDataNode* head,char* cmd);
int ShowAllCmd(tDataNode* head);

int help();
int quit();
int add();
int sub();
int multiple();
int divide();

