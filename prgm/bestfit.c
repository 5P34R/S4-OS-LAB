#include<stdio.h>
void main()
{
 int fragment[20],b[20],p[20],i,j,nb,np,temp,lowest=9999;
 static int barray[20],parray[20],flags[20];
 printf("\n\t\t\tMemory Management Scheme-Best fit");
 printf("\nEnter the number of blocks:");
 scanf("%d",&nb);
 printf("\nEnter the number of processes:");
 scanf("%d",&np);
 printf("\nEnter the size of the blocks\n");
 for(i=1; i<=nb; i++)
 {
 	printf("Block no %d :",i);
 	scanf("%d",&b[i]);
 }
 printf("\nEnter the size of the processes\n");
 for(i=1; i<=np; i++)
 {
 	printf("Process no %d :",i);
 	scanf("%d",&p[i]);
 }
 for(i=1; i<=np; i++)
 {
 for(j=1; j<=nb; j++)
 {
  if(barray[j]!=1)
  {
  	temp=b[j]-p[i];
  	if(temp>=0)
  	 if(lowest>temp)
  	 {
  	  parray[i]=j;
  	  lowest=temp;
  	  flags[i]=1;
  	 }
  }
  }
  fragment[i]=lowest;
  barray[parray[i]]=1;
  lowest=1000;
 }
 printf("\nProcess_no\tProcess_size\tBlock_no\tBlock_size\tFragment");
 for(i=1; i<=np; i++)
 {
 printf("\n%d\t\t%d\t\t",i,p[i]);
 if(flags[i]!=1)
  printf("Not allocated\tNot allocated\tNot allocated");
 else
  printf("%d\t\t%d\t\t%d",parray[i],b[parray[i]],fragment[i]);
  }
}
