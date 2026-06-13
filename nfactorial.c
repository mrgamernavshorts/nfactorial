#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
  if(argc <= 1){
    printf("No parameters given. Type \"--help\" for more info.\n");
    return 1;
  } else if (strcmp(argv[1], "--help") == 0) {
    printf("Useage:\n nfactorial [Integer: Number]\n");
    return 2;
  } 
  
  long long int curr = 1;
  long long int n = atoi(argv[1]);

  for(int i = 1; i <= n; i++){
    curr *= i;
  }

  printf("%lli\n", curr);

  return 0;
}
