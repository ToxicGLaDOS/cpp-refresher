#include<iostream>




int main(int argc, char** argv){
	int value;
	
	// Define a pointer to an integer named n_ptr and initalize it to NULL
	int * n_ptr = NULL;
	
	if (n_ptr != NULL){
		std::cout << "You need to set n_ptr to NULL" << std::endl;
	}
	else{
		std::cout << "n_prt initalized correctly!" << std::endl;
	}


	// Define a pointer to an integer named m_ptr ane inialize it to NULL
	int * m_ptr = NULL;
	
	if (m_ptr != NULL){
		std::cout << "You need to set m_ptr to NULL" << std::endl;
	}
	else{
		std::cout << "m_prt initalized correctly!" << std::endl;
	}

	// Initalize the pointer n_ptr to an integer with value 3
	n_ptr = new int(3);

	// Initalize the pointer m_ptr to an integer with value 8
	m_ptr = new int(8);
	
	// Set value equal to the value of n_ptr plus the value of m_ptr
	value = *n_ptr + *m_ptr; 
	


	// You don't need to mess with anything below this
	if (*n_ptr != 3){
		std::cout << "the value of n_ptr is not 3!" << std::endl;
	}
	else{
		std::cout << "n_ptr was set correctly!" << std::endl;
	}

	if (*m_ptr != 8){
		std::cout << "the value of m_ptr is not 8!" << std::endl;
	}
	else{
		std::cout << "m_ptr was set correctly!" << std::endl;
	}

	if (value != 11){
		std::cout << "Value is not correct!" << std::endl;
	}
	else{
		std::cout << "Value is correct!" << std::endl;
	}

	return 0;
}
