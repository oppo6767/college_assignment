def printf_func(arr):
    if(arr[0].row==8): print("<<희소정렬a>>")
    else: print("<<희소정렬b>>")

    for i in range(len(arr)):
        print(f"[{arr[i].row}, {arr[i].col}, {arr[i].value}]")
    print("")

def Sparse_Matrix(arr_a, arr_b):
    arr_b[0].row = arr_a[0].col
    arr_b[0].col = arr_a[0].row
    arr_b[0].value = arr_a[0].value

    index=1
    for col in range(10):
        for i in range(1, 11):
            if arr_a[i].col==col:
                arr_b[index].row = arr_a[i].col
                arr_b[index].col = arr_a[i].row
                arr_b[index].value = arr_a[i].value
                index+=1