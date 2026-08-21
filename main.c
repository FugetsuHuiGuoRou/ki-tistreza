#include <stdio.h>
#include <stdlib.h>

int main() {
	char instrument[50];
    printf("What is your favorite instrument?");
    scanf("%49s", instrument);
    printf("Nice! %s is a good instrument!", instrument);
	return 0; 
	//teste *-* 
}
