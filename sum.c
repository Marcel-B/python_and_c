
#include "sum.h"

__declspec(dllexport) int test_function(int num_numbers, int *number, callback_type abc){
	int i;
	int sum = 0;

	for(i = 0; i < num_numbers; ++i){
		sum += number[i];
	}
	abc(4, 3);
	return sum;
}