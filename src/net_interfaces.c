/*
 * main.c
 *
 *  Created on: Jun 10, 2015
 *      Author: ggrzybek
 */

#include <stdio.h>
#include <netdb.h>
#include <arpa/inet.h>
#include <netinet/in.h>

int
main(int argc, char** argv) {
	printf("Hello %s!\n", "World");

	struct netent *netent;
	struct hostent *hostent;
	char *name;

	setnetent(0);
	while ((netent = getnetent()) != NULL) {
		printf(" - %s\n", netent->n_name);
		int n = 0;
		while ((name = netent->n_aliases[n++]) != NULL)
			printf("    - %s\n", name);
	}
	endnetent();

	printf("\n");

	sethostent(0);
	while ((hostent = gethostent()) != NULL) {
		printf(" - %s (%d)\n", hostent->h_name, hostent->h_length);
		int n = 0;
		while ((name = hostent->h_aliases[n++]) != NULL)
			printf("    - %s\n", name);
		n = 0;
		char **p;
		for (p = hostent->h_addr_list; *p; p++) {
			printf("    → %s\n", inet_ntoa((*(struct in_addr *)*p)));
		}
	}
	endhostent();

	struct in_addr ia1; ia1.s_addr = INADDR_LOOPBACK;
	struct in_addr ia2; ia2.s_addr = INADDR_ANY;
	struct in_addr ia3; ia3.s_addr = INADDR_NONE;
	struct in_addr ia4; ia4.s_addr = INADDR_BROADCAST;
	printf("Addresses:\n");
	printf("INADDR_LOOPBACK=%s\n", inet_ntoa(ia1));
	printf("INADDR_ANY=%s\n", inet_ntoa(ia2));
	printf("INADDR_NONE=%s\n", inet_ntoa(ia3));
	printf("INADDR_BROADCAST=%s\n", inet_ntoa(ia4));

	return 0;
}
