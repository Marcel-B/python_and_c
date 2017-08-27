import ctypes
# https://pgi-jcns.fz-juelich.de/portal/pages/using-c-from-python.html
# https://docs.python.org/3/library/ctypes.html#module-ctypes

_sum = ctypes.CDLL('sum.dll')
callback_type = ctypes.CFUNCTYPE(ctypes.c_int, ctypes.c_float, ctypes.c_float)

_sum.test_function.argtypes = (ctypes.c_int, ctypes.POINTER(ctypes.c_int), callback_type)

def greater_than(a,b):
    if a > b:
        print('Hey')
        return 1
    else:
        print('ho')
        return 0
callback_func = callback_type(greater_than)

def test_function(numbers):
  global _sum
  num_numbers = len(numbers)

  array_type = ctypes.c_int * num_numbers
  result = _sum.test_function(ctypes.c_int(num_numbers), array_type(*numbers), callback_func)
  return int(result)

