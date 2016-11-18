#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>



int main() {
  
  //Get command
  printf("What would you like to do?\n");
  char response[50]; 
  fgets(response, sizeof(response) - 1, stdin);
  printf("%s", response);
  
  //Parse command
  char *s = response;
  char *command [10];

  int i=0;
  while (s) {
    command[i] = strsep(&s,"  ");
    i++;
  }
  command[i] = NULL;

  /*
  while (i) {
    printf("%s\n", command[i -1]);
    i--;
  }
  */
  
  //Execute command
  execvp(command[0], command);
  
}
