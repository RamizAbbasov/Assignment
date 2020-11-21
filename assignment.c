#include "stdio.h"
int main(){
  int eded;
  int qaliq;
  printf("Reqemi daxil edin:");
  scanf("%d",&eded);
  if (eded%21==0) {
    printf("\nBu reqem 3-e ve 7-ye qaliqsiz bolunur\n");
  }
  else if (eded<0) {
    printf("\nYeniden daxil edin\n");
  }
  else{
    printf("\nBu reqem 3-e ve 7-ye tam bolunmur\n");
  }
  return 0;
}
