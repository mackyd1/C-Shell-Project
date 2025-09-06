#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
  // Flush after every printf
  setbuf(stdout, NULL);

  while(1){
  // Uncomment this block to pass the first stage
   printf("$ ");

  // Wait for user input
  char input[100];
  fgets(input, 100, stdin);
  input[strlen(input) - 1] = '\0';

      // Check for exit
  if (strcmp(input, "exit 0") == 0) {
     break;
  }

  if (strcmp(input, "echo ", 5) == 0) {
     printf("%s\n", input + 5);
  }
  
//vro?
  printf("%s: command not found\n", input);

  }
  return 0;
}
