#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <unistd.h>
#include <string.h>

int main() {
	int hacking = 0;
	int perc = 0;
	char opt[1];
	printf("Are you sure you want to hack the planet, sir/ma'am? [Y/N]: ");
  	//time to fix gets
	gets(opt);
	if ((strncmp(opt,"y",1) == 0 || strncmp(opt,"Y",1) == 0) && strlen(opt) == 1) {
		hacking = 1;
		while (hacking == 1 && perc < 101) {
      system("clear");
		  printf("\nHacking the planet...\nProcess: %i%s",perc,"%");
		  sleep(1); //this one needs an integer, not a double lol 
		  perc++;
    }
    hacking = 0;
    system("clear");
    printf("\nDone hacking the planet!\njk agahahahahhaha");
	}
}