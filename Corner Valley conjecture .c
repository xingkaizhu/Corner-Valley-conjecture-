#include <stdio.h>

int main()
{int a,i,j,n;
int arr[100];
scanf("%d",&a);
for(i=0;i<a;i++)
scanf("%d",&arr[i]);
for(i=0;i<a;i++)
{j=0;

while(arr[i]!=1)
{if (arr[i]%2==0)
	arr[i]=arr[i]/2;
	else arr[i]=(arr[i]*3+1)/2;
j++;
}
printf("%d\n",j);
}
	return 0;
}

