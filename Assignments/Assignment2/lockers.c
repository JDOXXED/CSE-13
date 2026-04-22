/* Toggling lockers */

#include <stdio.h>

char lockerState(int l, int t) {
  /* TODO: This should compute the state of locker l after t students have done their toggling. If the locker is open, return 1. If the locker is closed, return 0. */
  int state = 0;
  for (int i = 1; i <= t;i++){
    if(l % i == 0){
      state = !state;
    }
  }
  return state;
}

int main(int argc, char* argv[]) {
  int n;
  while(1){
    printf("Enter n (locker number): ");
    scanf("%d", &n);
    if(n < 0){
      break;
    } else if(lockerState(n, n) == 0){
      printf("Closed\n");
    } else{
      printf("Open\n");
    }
  }
  return 0;
}