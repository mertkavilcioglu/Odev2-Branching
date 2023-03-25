#include <stdio.h>
#include <stdlib.h>

/*void BubbleSort(int num[size]) 
{
	
}
*/

int main()
{
	int n, i, num[n], j, k, temp;
	printf("Enter the size of array:");
	scanf("%d", &n);
	printf("Enter %d integer values:", n);
	
	for(i=0 ; i<n ; i++)
		scanf("%d", &num[i]);
	
	printf("Before sorting:");
	for(i=0 ; i<n ; i++)
		printf("%4d", num[i]);
		printf("\n");
		

	system("PAUSE");
	return 0;
	
}
