#include <stdio.h>
#include <stdlib.h>

int main(){
  int *data = (int *)malloc(100 * sizeof(int));
  ptr = data + 50;
  for(int i = 0; i<100;i++){
    *(data + i)= i;
  }
  free(data);
  printf("%d",*(data+1));
  return 0;
}
