#include<fstream>
#include<iostream>
#include<string>



int main(int argc, char** argv){

	int lineNum = 0;
	bool success = true;
	std::string line;
	std::ifstream file ("out.txt");
	if (file.is_open()){
		while(getline(file, line)){
			if(std::stoi(line) != lineNum){
				printf("Line %d is wrong! (0 indexed)\n", lineNum);
				success = false;
			}
			lineNum++;
		}
		file.close();
	}

	if (success)
		printf("Passed!\n");

	return 0;
}
