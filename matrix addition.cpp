#include <stdio.h>
int main(){
	int i,j,a[100][100],b[100][100],o[100][100],m,n;
	printf("enter the number of rows:");
	scanf("%d",&m);
	printf("enter the number of columns");
	scanf("%d",&n);
	printf("enter the elements of first matrix:");
	for(i=0;i<m;i++)
		for (j=0;j<n;j++){
		scanf("%d",&a[i][j]);
	}
	printf("enter the elements of second matrix:");
	for(i=0;i<m;i++)
		for(j=0;j<n;j++){
			scanf("%d",&b[i][j]);
		}
	for(i=0;i<m;i++)
		for(j=0;j<n;j++){
		o[i][j] = a[i][j]+b[i][j];
	}
	printf("the sum of two matrices is:\n");
	for(i=0;i<m;i++)
		for(j=0;j<n;j++){
		printf("%d  ",o[i][j]);
		if(j==n-1){
			printf("\n\n");
		}
	}
	return 0;
}
