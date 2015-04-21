/////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Bynary Search - 01 - Iterative Implementation
// Big O of log is a lot more efficient than O(n) algorithm
// Binary Search is for "Sorted" lists. The complexity is O(logn)
//

#include <stdio.h>

// Bynary Search
int BinarySearch(int A[], int n, int x) // array A, size of A n, element to research for x
{
	int low = 0, high = n - 1;
	while (low <= high)
	{
		int mid = (low + high) / 2;   // (low + high) may overflow 
		if (x == A[mid]) return mid;         // Found X, return (exit)
		else if (x < A[mid]) high = mid - 1; // X lies before mid
		else low = mid + 1;                  // X lies after mid    
	}
	return -1; // return -1 to say that x does not exist in the array

}

int main()
{
	int A[] = { 2, 4, 5, 7, 13, 14, 15, 23 };
	printf("Enter a number: ");
	int x; scanf("%d", &x);
	int index = BinarySearch(A, 8, x);
	if (index != -1) printf("Number %d is at index %d, ", x, index);
	else printf("Number %d not found \n", x);
}