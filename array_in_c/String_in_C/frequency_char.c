#include<stdio.h>
#include<string.h>
int main()
{
	char a[1000];
        int i,n,count[1000],j=0,scount,f[1000];
	printf("Enter the elements of the string ");
        gets(a);
	n=strlen(a);
        for(i=0;a[i]!='\0';i++)
	{
		f[i]=1;
  }
        for(i=0;a[i]!='\0';i++)
	{
		scount=1;
                for(j=i+1;a[j]!='\0';j++)
		{
                       if(a[i]==a[j])
			{
                       scount++;
		       f[j]=0;
                       }
                }
		if(f[i]!=0)
                count[i]=scount;
	}
	for(i=0;a[i]!='\0';i++)
	{
	   if(f[i]!=0)	
          printf("%c element appeared %d times\n",a[i],count[i]);
	}
	}
