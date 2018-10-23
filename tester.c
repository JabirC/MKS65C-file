#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>

int main(){
  int desc = open("rando.txt", O_WRONLY | O_WRONLY);
  char * content = malloc(100);
  char * test_string = "this is the test string qwertyuiop";
  int n = strlen(test_string);
  strcpy(content, test_string);

  write(desc, content, n);
  int i;
  printf("\n Here are the contents written into the file:\n %s\n", test_string);
  char * content_again = malloc(100);
  printf("\nHere are the contents of the file read back:\n");
  read(desc, content_again, n);
  printf("%s\n\n", content_again);

  close(desc);
  return 0;
}
