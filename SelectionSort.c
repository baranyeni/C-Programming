//
//          AUTHOR: ALI BARAN YENI
//      DEPARTMENT: COMPUTER ENGINEERING
//  STUDENT NUMBER: ********************
//
//
// Finds the position of the smallest element in the subarray
// starting from the first element of the array till the sizeof the array by
// incrementing the value of 'first' variable. A type of recursion example.
//
// Pre: first < last and elements 0 through last of array list are defined.
// Post: Returns the subscript k of the smallest element in the subarray;
//       i.e., list[k] <= list[i] for all i in the subarray
//

#include <stdio.h>

int get_min_range(int list[], int first, int last) {
    int returnVal = -1; // If still equal to -1 at the enf of the code, will be replaced with 'first'
    int tempVal   = list[first];

    // Very basic sorting statement for "Selection Sort"
    for (int i = first;  i <= last;  i++)
      if (list[i] < tempVal){
        tempVal   = list[i]; 
        returnVal = i;
      } 

      if (returnVal == -1 ) { returnVal=first; }

      return (returnVal);
    }

    void select_sort(int list[], int n) {
     int fill, temp, index_of_min;

     for (fill = 0; fill < n-1; ++fill) {

      index_of_min = get_min_range(list, fill, n-1);
          /* Exchange elements at fill and index_of_min */
      if (fill != index_of_min) {
        temp = list[index_of_min];
        list[index_of_min] = list[fill];
        list[fill] = temp;
      }
    }
    
    printf("Sorting process finished.. The result can be found at below line..\n");
    for (int loop = 0; loop < n; loop++)
      printf("%d, ", list[loop]);
    
  }

int main() {
    int unsortedArray[] = {42, 36, 43, 25, 55, 55, 87, 54, 32};
    int arrSize         = sizeof(unsortedArray)/sizeof(unsortedArray[0]);
    
    select_sort(unsortedArray, arrSize);

    return 0;
  }
