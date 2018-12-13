#include<stdio.h>
#include<iostream>





int main(int argc, char** argv){
	bool t = true;
	bool f = false;


	// 1
	// Add one operator to make this if block true
	if (t || f){
		std::cout << "Passed first statement!" << std::endl;	
	}
	else{
		std::cout << "Failed: first statement is false (should be true)." << std::endl;
	}

	// 2
	// Add one operator to make this if block true
	if (t && t){
		std::cout << "Passed second statement!" << std::endl;
	}
	else{
		std::cout << "Failed: second statement is false (should be true)." << std::endl;
	}

	// 3
	// Add one operator to make this if block false
	if (t != t){
		std::cout << "Failed: third statement is true (should be false)." << std::endl;
	}
	else{
		std::cout << "Passed third statement!" << std::endl;
	}

	// 4
	// Add one operator to make this if block false
	if (!t){
		std::cout << "Failed: fourth statement is true (should be false)." << std::endl;
	}
	else{
		std::cout << "Passed fourth statement!" << std::endl;
	}
	




	return 0;
}
