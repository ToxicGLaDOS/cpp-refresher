#include<iostream>
#include<stdio.h>


int main(int argc, char** argv){

	// Define an array of integers called arr of size 5
	// Do not initialize the array


	// Initalize all values of arr to 0






	// Define and initalize a new array of size 3 to all 0's on one line named arr2


	// Don't modify anything below this!
	for(int i=0; i<5; i++){
		if (arr[i] != 0 ){
			printf("Failed: arr at index %d is %d (should be 0)\n", i, arr[i]);
		}
		else{
			printf("arr index %d passed!\n", i);
		}
	}

	for(int i=0; i<3; i++){
		if (arr[i] != 0 ){
			printf("Failed: arr2 at index %d is %d (should be 0)\n", i, arr2[i]);
		}
		else{
			printf("arr2 index %d passed!\n", i);
		}
	}

	return 0;
}
