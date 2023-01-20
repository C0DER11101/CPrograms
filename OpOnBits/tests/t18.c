#include<stdio.h>
#include<stdlib.h>
#include "DisplayBits.c"

/* Various masks:
 * R_OWN -> read permission for owner
 * W_OWN -> write permission for owner
 * A_OWN -> access permission for owner
 * E_OWN -> execute permission for owner
 *
 * R_GRP -> read permission for group
 * W_GRP -> write permission for group
 * A_GRP -> access permission for group
 * E_GRP -> execute permission for group
 *
 * R_OTH -> read permission for others
 * W_OTH -> write permission for others
 * A_OTH -> access permission for others
 * E_OTH -> execute permission for others
 */

/*For owner*/
#define R_OWN 0x1 /* 0th bit*/
#define W_OWN 0x2 /*1st bit*/
#define A_OWN 0x4 /*2nd bit*/
#define E_OWN 0x8 /*3rd bit*/

/*For group*/
#define R_GRP 0x10 /*4th bit*/
#define W_GRP 0x20 /*5th bit*/
#define A_GRP 0x40 /*6th bit*/
#define E_GRP 0x80 /*7th bit*/

/*For others*/
#define R_OTH 0x100 /*8th bit*/
#define W_OTH 0x200 /*9th bit*/
#define A_OTH 0x400 /*10th bit*/
#define E_OTH 0x800 /*11th bit*/

unsigned int permissions=0x19f; // binary equivalent 110011111

int main(void)
{

	printf("Permissions for owner, group and others(from right to left): ");
	DisplayBits(permissions);
	printf("\nChanging permissions for group\n");
	printf("\nSetting up the write permissions:\n"); // setting up the 5th bit

	permissions=permissions|W_GRP;
	printf("New permissions\n");
	DisplayBits(permissions);

	return 0;
}
