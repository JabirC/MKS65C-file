#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

int main(){
  int desc = open("rando.txt", O_WRONLY | O_WRONLY);
  char * content = malloc(100);
  int n = 10;
  read(desc, content, n);
  content[0] = 1;
  write(desc, content, n);
  int i;
  printf("\n Here are the contents of the file read into a char *\n");

  for(i = 0; i < 100; i++){
    printf(" %d ", content[i]);
  }
  
  printf("\n\n");
    

  close(desc);
  return 0;
}