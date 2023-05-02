#include "passage.h"

std::vector<float> passage(Tmatrix* matrix, std::vector<float> right)
{   
	std::vector<float> output;
	int n = matrix->get_size();
	std::vector<float> alpha;
	std::vector<float> betta;
	alpha.push_back(-matrix->get_data()[0][1] / matrix->get_data()[0][0]);
	betta.push_back(right[0] / matrix->get_data()[0][0]);
	for (int i = 1; i < n - 1; i++) {
		float gamma = matrix->get_data()[i][i] + matrix->get_data()[i][i - 1] * alpha[i - 1];
		alpha.push_back(-matrix->get_data()[i][i + 1] / gamma);
		betta.push_back((right[i] - matrix->get_data()[i][i - 1] * betta[i - 1]) / gamma);
	}

	float cur_x = (right[n - 1] - matrix->get_data()[n - 1][n - 2] * betta[n - 2]) / (matrix->get_data()[n - 1][n - 1] + matrix->get_data()[n - 1][n - 2] * alpha[n - 2]);
	output.push_back(cur_x);
	for (int i = n - 2; i > -1; i--) {
		cur_x = alpha[i] * cur_x + betta[i];
		output.push_back(cur_x);
	}
    return output;
}
