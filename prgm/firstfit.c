#include<stdio.h>
void main()
{
	int bsize[10],psize[10],bno,pno,flags[10],allocation[10],i;
	for(i=0; i<10; i++)
	{ 
	      flags[i]=0;
	      allocation[i]=-1; 
	}
	printf("Enter the no of blocks :");
	scanf("%d",&bno);
	
	printf("\nEnter the size of each block\n");
	for(i=0; i<bno; i++)
	      scanf("%d",&bsize[i]);
	      
	printf("Enter the no of process :");
	scanf("%d",&pno);
	
	printf("\nEnter the size of each process\n");
	for(i=0; i<pno; i++)
	      scanf("%d",&psize[i]);
	
	for(int i=0; i<pno; i++)
	      for(int j=0; j<bno; j++)
	      {
	            if(flags[j]==0)
                  {           
	            if(bsize[j]>=psize[i])
                  {
	                allocation[i]=j;
	                bsize[j]=bsize[j]-psize[i];
	                flags[j]=1;
	                  break;
	            }
	            }
	      }
	printf("\nProcess no\tProcess size\tBlock no\n");
	for(int i=0; i<pno; i++)
	{
            printf("P%d\t\t%d\t\t",i+1,psize[i]);
            if(allocation[i]!=-1)
                  printf("%d\n",allocation[i]+1);
	      else
	      printf("Not allocated\n");
	}
	
}
