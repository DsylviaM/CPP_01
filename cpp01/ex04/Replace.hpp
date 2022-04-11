#ifndef CPP01_REPLACE_HPP
#define CPP01_REPLACE_HPP

#include <string>
#include <fstream>

class Replace {
	std::string f_Name_new;
	std::ifstream ifstr;
	std::ofstream ofstr;
	int swapCount;
	void fillIfstream();
public:
	Replace(const std::string& fileName);
	~Replace();
	int swap(const std::string& now, const std::string& next);
};


#endif
