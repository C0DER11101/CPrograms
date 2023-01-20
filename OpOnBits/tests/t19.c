#include<stdio.h>
#include<stdlib.h>
#include "DisplayBits.c"

typedef struct
{
	unsigned r_owner:1;
	unsigned w_owner:1;
	unsigned a_owner:1;
	unsigned e_owner:1;

	unsigned r_group:1;
	unsigned w_group:1;
	unsigned a_group:1;
	unsigned e_group:1;

	unsigned r_other:1;
	unsigned w_other:1;
	unsigned a_other:1;
	unsigned e_other:1;
}permissions;

int main(void)
{
	permissions users={1, 1, 1, 1, 1, 0, 0, 1, 1, 0, 0, 0};

	printf("\nUser permissions:\n");
	printf("Read permissions: %u\n", users.r_owner);
	printf("Write permissions: %u\n", users.w_owner);
	printf("Access permissions: %u\n", users.a_owner);
	printf("Execute permissions: %u\n", users.e_owner);

	printf("\nGroup permissions:\n");
	printf("Read permissions: %u\n", users.r_group);
	printf("Write permissions: %u\n", users.w_group);
	printf("Access permissions: %u\n", users.a_group);
	printf("Execute permissions: %u\n", users.e_group);

	printf("\nOther permissions:\n");
	printf("Read permissions: %u\n", users.r_other);
	printf("Write permissions: %u\n", users.w_other);
	printf("Access permissions: %u\n", users.a_other);
	printf("Execute permissions: %u\n", users.e_other);

	printf("\nChanging the permissions for group\n");
	printf("\nEnabling write permissions for group:\n");
	users.w_group=1;

	printf("\nNew group permissions:\n");

	printf("\nGroup permissions:\n");
	printf("Read permissions: %u\n", users.r_group);
	printf("Write permissions: %u\n", users.w_group);
	printf("Access permissions: %u\n", users.a_group);
	printf("Execute permissions: %u\n", users.e_group);
	return 0;
}
