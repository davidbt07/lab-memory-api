#include <stdio.h>
#include <stdlib.h>

int main(){
  int *data = (int *)malloc(100 * sizeof(int));
  int *ptr;
  ptr = data + 50;
  for(int i = 0; i<100;i++){
    *(data + i)= i;
  }
  printf("%d\n", *ptr);
  free(ptr);
  printf("%d",*(data+51));
  return 0;
}
