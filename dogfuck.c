/*
 * dogfuck.c - plays an animation of a couple of dogs fucking
 * gratuitously ripped off of the following resources:
 * -- just took what worked w/o compiling full of crap in 2020
 *    from here
 * https://grox.net/software/mine/slowcat/ 
 * -- and all so I could play stuff found in this
 * http://artscene.textfiles.com/vt100/
 * be careful what you run in here, some has some strange stuff
 * like old C shell code (no, not shellcode - csh) embedded within
 *
 * Ahem. License:
 *
 * DO WHAT THE FUCK YOU WANT TO PUBLIC LICENSE
 * Version 2, December 2004
 *
 * Copyright (C) 2004 Sam Hocevar <sam@hocevar.net>
 *
 * Everyone is permitted to copy and distribute verbatim or modified
 * copies of this license document, and changing it is allowed as long
 * as the name is changed.
 *
 * DO WHAT THE FUCK YOU WANT TO PUBLIC LICENSE
 * TERMS AND CONDITIONS FOR COPYING, DISTRIBUTION AND MODIFICATION

 * 0. You just DO WHAT THE FUCK YOU WANT TO.
*/


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int main() {
	int c;
	FILE *fp;
	char *fnam;
    struct timespec ts;

    // set timespec struct values for nanosleep function
	ts.tv_sec=0;
	ts.tv_nsec=1000000L;

    // open up ancient dog fucking file
    fnam = "dogs.vt";
	fp = fopen(fnam,"r");
    // missing file! what did you do wrong?
	if(fp == NULL) {
		puts("u dun fucked up");
		exit(2);
	}

    // Dead simple shit right out of the first chapter of k&r
	while( (c = fgetc(fp)) != EOF) {
		putchar(c);
		nanosleep(&ts,NULL);
	}
	fclose(fp);

	return (0);
}
