#include <stdio.h>

#include "stack.h"
#include "fib.h"

int main(void) {
	int choice;

	do {
		printf("Enter value: ");
		scanf("%d", &choice);

		if (choice > 1) push(choice);
		else printf("value on top is %d\n", pop());

	} while(choice != -1);

	return 0;
}
