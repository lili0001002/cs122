#include<stdio.h>
#include<stdlib.h>
void main()
{
	char cmd[128];
	while(1)
	{
		scanf("%s", cmd);
		if(!strcmp(cmd, "help"))
		{
			printf("This is help cmd\n");
		}
		else if(!strcmp(cmd, "quit"))
		{
			exit(0);
		}               
      		else if(!strcmp(cmd,"read"))
		{
			printf("This is read");
		}
		else if(!strcmp(cmd,"write"))
		{
			printf("This is write");
		}
		else if(!strcmp(cmd,"eat"))
		{
			printf("This is eat");
		}
		else if(!strcmp(cmd,"drink"))
		{
			printf("This is drink");
		}
		else if(!strcmp(cmd,"smile"))
		{
			printf("This is smile");
		}
		else if(!strcmp(cmd,"home"))
		{
			printf("This is home");
		}
	}
}

