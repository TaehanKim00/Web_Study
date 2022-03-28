#include <stdio.h>

int main() {
	int A[15] = { 0, 1, 0, };
	int B[15] = { 0, 1, 0, };

	int i = 3;
	int *p;

	// Get memory location of A using i
	p = &i;
    p += 1 + 15;       // Location of A[0]
    //printf("%d", *p);

    //Print A[0] and A[1]
    printf("수열 1 : A(n) = A(n-1) + A(n-2)\n\n");
    printf("%d\n%d\n", *p, *(p+1));

    p += 2; //A[2]

    for (i = 0; i < 13; i++){
        // Calculate A(n) = A(n-1) + A(n-2)
        *p = *(p-1) + *(p-2);

        //print
        printf("%d\n", *p);

        //Increase address
        p += 1;
    }
    	// Get memory location of B using i
	p = &i;
	p += 1;
    
	// Print B[0] and B[1]
	printf("\n수열 2 : B(n) = 3*B(n-1) - B(n-2)\n\n");
	printf("%d\n%d\n", *p, *(p + 1));

	p += 2;	// Starts with B[2];

	for (i = 0; i < 13; i++) {
		// Calculate B(n) = 3 * B(n - 1) - B(n - 2)
		*p = 3 * (*(p - 1)) - *(p - 2);

		// Print
		printf("%d\n", *p);

		// Increase address
		p += 1;
	}

	return 0;
}