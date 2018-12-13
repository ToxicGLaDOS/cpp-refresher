#include<stdio.h>
#include<iostream>






int main(int argc, char** argv){
	int a,b,c,d,e,f;
	// For each of these statements, do NOT change the numbers. 
	// Just add the appropriate number of operators or parentheses.
	
	// Make a equal to 11 with one operator
	a = 5  6;
	
	// Make b equal to 14 with one operator
	b = 7  2;

	// Make c equal to 2 with one operator
	c = 5  3; 

	// Make d equal to 0 with one operator
	d = 10  11;

	// Make e equal to 9 with two operators
	e = 1  2  3;

	// Make f equal to 1 with one operator
	f = 10  3;



	// You do not need to mess with anything below this.
	if (a == 11 && b == 14 && c == 2 && d == 0 && e == 9 && f == 1){
		std::cout << "Passed!" << std::endl;
	}
	else{
		if (a != 11){
			std::cout << "Failed: a not equal 11" << std::endl;
		}
		if (b != 14){
			std::cout << "Failed: b not equal 14" << std::endl;
		}
		if (c != 2){
			std::cout << "Failed: c not equal 2" << std::endl;
		}
		if (d != 0){
			std::cout << "Failed: d not equal 0" << std::endl;
		}
		if (e != 9){
			std::cout << "Failed: e not equal 9" << std::endl;
		}
		if (f != 1){
			std::cout << "Failed: f not equal 1" << std::endl;
		}
	}

	return 0;

}
