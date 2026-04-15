from struct3_5 import Matrix
from func_list3_5 import printf_func
from func_list3_5 import Sparse_Matrix

def main() :
    data = [(8,7,10), (0,2,2), (0,6,12), (1,4,7), (2,0,23),
            (3,3,31), (4,1,14), (4,5,25), (5,6,6), (6,0,52), (7,4,11)]
    arr_a = [Matrix(*d) for d in data]
    arr_b = [Matrix(0,0,0) for _ in range(len(arr_a))]

    printf_func(arr_a)

    Sparse_Matrix(arr_a, arr_b)
    printf_func(arr_b)

if __name__ == "__main__":
    main()