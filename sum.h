
__declspec(dllexport) typedef int (*callback_type)(float, float);
__declspec(dllexport) int test_function(int num_numbers, int *number, callback_type abc);