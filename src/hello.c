/*
 * main.c
 *
 *  Created on: Jun 10, 2015
 *      Author: ggrzybek
 */

#include <stdio.h>
#include <config.h>

int
main(int argc, char** argv) {
	printf("Hello %s (%s / %s)!\n", "World", PACKAGE_STRING, PACKAGE_BUGREPORT);

	return 0;
}
