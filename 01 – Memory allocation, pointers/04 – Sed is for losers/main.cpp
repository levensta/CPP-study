//
// Created by Lorent Evenstar on 8/11/21.
//

#include <iostream>
#include <fstream>
#include <sstream>

std::string &megaphone(std::string &str) {
	std::locale loc;
	for (std::string::iterator it = str.begin(); it != str.end(); ++it)
		*it = std::toupper(*it, loc);
	return str;
}

int main (int argc, char **argv) {
	if (argc != 4 || std::string(argv[2]).empty()) {
		std::cout << "Invalid arguments" << std::endl;
		return 1;
	}
	std::string	filename = argv[1];
	std::string	s1 = argv[2];
	std::string	s2 = argv[3];

	std::ifstream openFile;
	std::ofstream saveFile;
	openFile.open(filename);
	if (!openFile.is_open()) {
		std::cout << "Cannot open \"" << filename << "\"" << std::endl;
		return 1;
	}
	saveFile.open(megaphone(filename) + ".replace");
	if (!saveFile.is_open()) {
		std::cout << "Cannot create \"" << megaphone(filename) + ".replace" << "\"" << std::endl;
		return 1;
	}
	std::stringstream buffer;
	buffer << openFile.rdbuf();
	size_t	end = 0;
	size_t	pos = 0;
	while (end != std::string::npos) {
		end = buffer.str().find(s1, pos);
		saveFile << buffer.str().substr(pos, end - pos);
		if (end != std::string::npos) {
			saveFile << s2;
		}
		pos = end + s1.length();
	}
	openFile.close();
	saveFile.close();
	return 0;
}