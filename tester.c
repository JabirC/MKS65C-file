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
  printf("\n Here are the contents of the file read into a char *\n");

  for(i = 0; i < 100; i++){
    printf("%c", content[i]);
  }
  
  printf("\n\n");
    

  close(desc);
  return 0;
}
