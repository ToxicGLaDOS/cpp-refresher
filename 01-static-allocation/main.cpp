#include<stdio.h>
#include<iostream>

int main(int argc, char** argv){
	// Allocate 5 variables and set their values
	// make a boolean named b and set it to true
	// make an integer and set it to 0
	// make a float and set it to 1.1
	// make a double and set it to 1.2
	// make a string and set it to hello
	
	
	// YOUR CODE GOES HERE
	


	// This is part checks your work. You should not modify anything below this
	if (b && i == 0 && f == 1.1f && d == 1.2 && s == "hello"){
		std::cout << "Passed!" << std::endl;
	}
	else{
		if (!b){
			std::cout << "Failed: b not equal true" << std::endl;
		}
		if (i != 0){
			std::cout << "Failed: i not equal 0" << std::endl;
		}
		if (f != 1.1f){
			std::cout << "Failed: f not equal 1.1 or is not a float" << std::endl;
		}
		if (d != 1.2){
			std::cout << "Failed: d not equal 1.2 or is not a double" << std::endl;
		}
		if (s != "hello"){
			std::cout << "Failed: s not equal hello" << std::endl;
		}
	}
	
	return 0;

}
