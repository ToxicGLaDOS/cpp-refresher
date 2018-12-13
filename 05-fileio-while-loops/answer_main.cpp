#include<iostream>
#include<fstream>


int main(int argc, char** argv){
	
	// Write the sequence 0,1,2,3,4 to a file named out.txt with newlines after each
	std::ofstream outfile;
	outfile.open("out.txt");
	outfile << "0\n1\n2\n3\n4\n";


	// Write the 3rd line from in.txt (0 indexed) to the end of out.txt on a new line after the sequence
	std::ifstream infile ("in.txt");
	std::string line;
	int lineNum = 0;
	while(getline(infile, line)){
		if(lineNum == 3){
			outfile << line << std::endl;
		}
		lineNum++;
	}
	outfile.close();
	
	std::cout << "Now run ./check to check your answer!" << std::endl;
	
	return 0;
}
