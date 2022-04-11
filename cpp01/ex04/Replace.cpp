#include "Replace.hpp"
#include <string>
#include <iostream>

Replace::Replace(const std::string& fileName) {
	this->f_Name_new = fileName;
	this->swapCount = 0;
	fillIfstream();
}

Replace::~Replace() {
	if (this->ifstr.is_open()) {
		this->ifstr.close();
	}
	if (!this->ofstr.is_open()) {
		this->ofstr.close();
	}
}

void Replace::fillIfstream() {
	this->ifstr.open(this->f_Name_new);
	if (!this->ifstr.is_open()) {
		std::cout << "Bad fileName\n";
		exit(1);
	}
	this->ofstr.open(this->f_Name_new + ".replace");
	if (!this->ofstr.is_open()) {
		std::cout << "Can't create output file\n";
		exit(1);
	}
}

int Replace::swap(const std::string& now, const std::string& next) {
	std::string line;
	while (std::getline(this->ifstr, line)) {
		uint before = line.find(now);
		while (before <= line.size()) {
			line.erase(before, now.size());
			line.insert(before, next);
			before = line.find(now);
			++this->swapCount;
		}
		this->ofstr << line << "\n";
	}
	return this->swapCount;
}
