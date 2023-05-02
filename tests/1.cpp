#include "passage.h"

int main() {
	Tmatrix* my_matrix = new Tmatrix();
	std::vector<float> right = { 1, 1, 1 };
	std::vector<float> out = passage(my_matrix, right);
	for (int i = out.size() - 1; i > -1; i--) {
		std::cout << out[i] << "\n";
	}
	delete my_matrix;
	return 0;
}