#include <stdio.h>

int main(void) {
  int arr[5] = {1, 2, 3, 4, 5};
  int key;
  printf("\n Enter the element to be Searched");
  scanf("%d", &key);
  for (int i = 0; i < 5; i++) {
    if (key == arr[i]) {
      printf("\n Element found:)");
      break;
    } else
      printf("\n Element not found:(");
  }
  return 0;
}
