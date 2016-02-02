#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <string.h>

/*
 * The purpose of this program is to print out files to standard output. It
 * reads in blocks to a buffer, and then prints them out.
 */

void print_file(const char *);

int main(int argc, char *argv[])
{
	int vec;

	if (argc < 2) {
		print_file("-");
		return EXIT_SUCCESS;
	}

	if (!strcmp(argv[1], "-u")) {
		++argv;
		--argc;
	}

	for (vec = 1; vec < argc; ++vec) {
		print_file(argv[vec]);
	}

	return EXIT_SUCCESS;
}

void print_file(const char *fn)
{
	FILE *fp;
	int ch;

	if (!strcmp(fn, "-")) {
		fp = stdin;
	} else if (!(fp = fopen(fn, "r"))) {
		perror(fn);
		exit(EXIT_FAILURE);
	}

	while ((ch = fgetc(fp)) != EOF) {
		putchar(ch);
	}

	if (fp != stdin) {
		fclose(fp);
	}
}
