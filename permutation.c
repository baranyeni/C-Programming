//
//          AUTHOR: ALI BARAN YENI
//      DEPARTMENT: COMPUTER ENGINEERING
//  STUDENT NUMBER: ********************
//
// A code have 4 digits in a specific order, the digits are between 0-9.
// How many different permutations are there if one digit may only be used once?
//

#include <stdio.h>

int permCalcFunc(int n, int r) {
    int result, i;
	long long int n_fact   = 1;
	long long int n_r_Fact = 1;

	for (int f1 = n; f1 >= 1; --f1) {
	   n_fact *= f1;
    }
    
	for (int f2 = (n-r); f2 >= 1; --f2) {
        n_r_Fact *= f2;
    }

    result = n_fact/n_r_Fact;

    return result; 
}

int main() {
    int n, r;
    printf("How many digits will you use? ");
    scanf("%d", &n);
    printf("What size will be output? ");
    scanf("%d", &r);

    long long int res = permCalcFunc(n, r);
    printf("There are %lld possibilities.", res);

    return 0;
}
