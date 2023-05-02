#include "TMatrix.h"

Tmatrix::Tmatrix(std::vector<std::vector<float>> data): data(data){
    size = data.size();
}

Tmatrix::Tmatrix(){
	int n;
	float cur;
	std::cout << "Enter matrix size" << "\n";
	std::cin >> n;
	size = n;
	std::cout << "Enter koefs" << "\n";
	for (int j = 0; j < n; j++) {
		data.emplace_back();
		for (int i = 0; i < n; i++) {
			std::cin >> cur;
			data[j].push_back(cur);
		}
	}
}

std::vector<std::vector<float>> Tmatrix::get_data(){
    return data;
}

int Tmatrix::get_size(){
	return size;
}
