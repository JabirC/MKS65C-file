#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>

int main(){
  int text = open("rando.txt", O_WRONLY|O_APPEND);
  char * content = malloc(100);
  char * test_string = "this is the test string qwertyuiop";
  int n = strlen(test_string);
  strcpy(content, test_string);


  printf("\nAdding to file:\n this is the test string qwertyuiop\n");
  write(text, content, n);
  close(text);

  char * content_again = malloc(100);


  text = open("rando.txt", O_RDONLY);
  printf("\nHere are the contents of the whole file read back:\n");
  read(text, content_again, n * 3 );
  printf("%s\n\n", content_again);


  close(text);
  return 0;
}
