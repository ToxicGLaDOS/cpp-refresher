#include<iostream>


// Write a function called add that takes two integers and adds them then returns the result

int add(int a, int b){
	return a + b;
}

// Write a function called subtract that takes two three integers
// subtracts the second from the first then puts the result in the third by reference

void subtract(int a, int b, int &out){
	out = a - b;
}

// You don't need to mess with main in this one
int main(int argc, char** argv){

	if (add(2, 3) != 5){
		std::cout << "add function does not work" << std::endl;
	}
	else{
		std::cout << "add function works!" << std::endl; 
	}

	int result;
	subtract(6, 2, result);

	if (result != 4){
		std::cout << "subtract function does not work" << std::endl;
	}
	else{
		std::cout << "subtract function works!" << std::endl;
	}

	return 0;
}
