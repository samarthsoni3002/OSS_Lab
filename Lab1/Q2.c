#include <stdio.h>

int main(void) {
  int arr[100];

  int n;
  printf("Enter how many numbers do you want to add:- ");
  scanf("%d",&n);


  printf("Enter numbers for the array:- ");
  for(int i=0;i<n;i++){
    scanf("%d",&arr[i]);
  }

  int a = 0;

  int key;
  printf("\n Enter the element to be Searched");
  scanf("%d", &key);


    for (int i = 0; i < n; i++) {
    if (key == arr[i]) {
      printf("\n Element found:)");
      a=1;
    }
  }

    if(a==0){
        printf("Element not found");
    }

  return 0;
}
