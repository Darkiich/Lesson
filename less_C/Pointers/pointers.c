#include <stdio.h>

int main(void)
{
	int a = 10, b = 5;
	int* ptr = &a;
	int* ptr2 = &b;
	int* ptr3 = ptr;

	int* nullPTR = NULL;

	void* somePtr;
	int* somePtr2 = &a;

	printf("Before:\nValue = %d, address = %p\n\n", *ptr, ptr);
	*ptr3 = 50;
	printf("After:\nValue = %d, address = %p\n\n", *ptr, ptr);

	printf("Swap a and b before: %d %d\n\n", *ptr, *ptr2);

	nullPTR = ptr;

	ptr = ptr2;
	ptr2 = nullPTR;

	printf("Swap a and b after: %d %d\n\n", *ptr, *ptr2);

	somePtr = somePtr2;
	printf("Value somePtr = %d, address = %p", *((int *)somePtr), somePtr);

	return 0;
}