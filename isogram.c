#include<stdio.h>
#include<conio.h>
#include<string.h>
//using namespace std;
void main()
{
	//clrscr();
	printf("Enter the code");
	char str[20];
	int i,j,flag=0,len;
	scanf("%[^\n]%*c",&str);
	printf("\nString enterd is: %s",str);
	len=strlen(str);
	printf("\nLength of String is : %d",len);
	for(i=0;i<=len;i++)
	{
		for(j=i+1;j<=len;j++)
		{
			if(str[j]==str[i])
			{
			 flag=1;
			 break;
		    }
		    //else
		    //continue;
		}
	}
	if(flag==1)
	printf("\n Word repeated");
	else
	printf("\n No repitition");
	getch();
}

