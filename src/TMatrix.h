#pragma once
#include <vector>
#include <iostream>

class Tmatrix {
private:
	std::vector<std::vector<float>> data;
	int size;
public:
	Tmatrix(std::vector<std::vector<float>> data);
	Tmatrix();
	std::vector<std::vector<float>> get_data();
	int get_size();
};