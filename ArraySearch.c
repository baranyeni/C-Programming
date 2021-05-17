//
//          AUTHOR: ALI BARAN YENI
//      DEPARTMENT: COMPUTER ENGINEERING
//  STUDENT NUMBER: ********************
//
// Searches for target item in first n elements of array arr
// Returns index of target or NOT_FOUND
// Pre:  target and first n elements of array arr are defined and n>=0
//

#include <stdio.h>

#define NOT_FOUND -1

int search(const int arr[], int target, int n) {
  int i,
  found = 0,
  where;

  /* Compares each element to target                                        */
  i = 0;
  while (!found && i < n) {
    if (arr[i] == target)
      found = 1;
    else
      ++i;
  }

  /* Returns index of element matching target or NOT_FOUND                 */
  if (found)
    where = i;
  else
    where = NOT_FOUND;

  return (where);
}

int main() {
  int target;
  const int rawArray[5] = {1,2,3,4,5};

  /* Prompt question to define target integer.                             */
  printf("Enter the target value: ");
  scanf("%d", &target);

  int returnVal = search(rawArray, target, sizeof rawArray);

  if(returnVal == -1) {
    printf("THE VALUE \"%d\" CAN NOT BE FOUND", target);
  }

  else {
    printf("THE VALUE \"%d\" FOUND AT INDEX OF \"%d\"", target, returnVal);
  }
}
