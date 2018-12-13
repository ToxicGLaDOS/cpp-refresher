#include<iostream>


int main(int argc, char** argv){
	
	int array[100];

	// Write a for loop to initalize the values of array to twice their index
	
	for(int i = 0; i < 100; i++){
		array[i] = i * 2;
	}

	// Write a for each loop to print out all the values of array
	// Use only one line in the for block
	for(int i : array){
		// There should only be one line in here
		std::cout << i << std::endl;
	}



	for(int i = 0; i < 100; i++){
		if(array[i] != i * 2){
			std::cout << "Failed: array not initalized properly!" << std::endl;
			break;
		}
	}

	std::cout << "Passed! (You'll have to check the print outs yourself!)" << std::endl;


	return 0;

}
