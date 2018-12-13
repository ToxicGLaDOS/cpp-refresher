#include<iostream>
#include<string>

// Define a class called Animal
// Animal should have a constructor that takes a string for the name of the animal
// and an integer for the age
// Also define getters and setters for these variables named getName, getAge, setName, setAge
// The variables should be private, the functions should all be public








// You do not need to mess with main in this one
int main(int argc, char** argv){
	std::string name = "Doggy";
	int age = 12;
	
	Animal a = Animal(name, age);
	if(a.getName() != name){
		std::cout << "getName does not return the right name." << std::endl;
	}
	else{
		std::cout << "getName works!" << std::endl;
	}
	if(a.getAge() != age){
		std::cout << "getAge does not return the right age." << std::endl;
	}
	else{
		std::cout << "getAge works!" << std::endl;
	}
	name = "Kitty";
	age = 9;
	a.setName(name);
	a.setAge(age);
	if(a.getName() != name){
		std::cout << "setName does not set the right name. (or getName is broken)" << std::endl;
	}
	else{
		std::cout << "setName works!" << std::endl;
	}
	if(a.getAge() != age){
		std::cout << "setAge does not set the right age. (or getAge is broken)" << std::endl;
	}
	else{
		std::cout << "setAge works!" << std::endl;
	}
	

	return 0;
}




