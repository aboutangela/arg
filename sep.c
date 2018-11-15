#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

char ** parse_args( char * line ){
	char ** ar = malloc(5 * sizeof(char *));
	int count = 0;
  while(line){
		ar[count] = strsep(&line, " ");
		count++;
	}
	return ar;
}

int main(){
	char l[100] = "ls -l -a";
  char ** args = parse_args(l);
  execvp(args[0], args);
	return 0;
}
