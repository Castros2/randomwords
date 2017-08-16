#include <iostream>
#include <sstream>
#include <fstream>
#include <string>
#include <unordered_map>

#include<stdlib.h>
#include<time.h>

typedef std::unordered_map<long, std::string> wordmap;

std::ifstream infile("google-10000-english-usa.txt");
std::string line;

int main(){
	wordmap words;
	long i = 0;
	srand(time(NULL));
	while(std::getline(infile, line)){
		words.emplace(i++, line);
	}

	long randomIndex1 = rand() % words.size(); + 1;
	long randomIndex2 = rand() % words.size(); + 1;
	long randomIndex3 = rand() % words.size(); + 1;

	std::cout << 
		words[randomIndex1] << " " << 
		words[randomIndex2] << " " <<
		words[randomIndex3] << std::endl;

	

	return 0;

}

