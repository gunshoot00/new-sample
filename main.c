#include <stdio.h>

int swap(int *ptr1,int *ptr2)
{
	*ptr1 = *ptr1 + *Ptr2;
	*ptr2 = *ptr1 - *ptr2;
	*ptr1 = *ptr1 - *ptr2;
}



int main(void)
{
	int var1 = 20 , int var2 = 10;
	
	swap(&var1,&var2);
	
	printf("var1 = %d\nvar2 = %d",var1,var2);
	
	return 0;
}