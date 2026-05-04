def addpoly(a, b, c):
    a_degree = a.Degree
    b_degree = b.Degree
    c.Degree = a_degree if a_degree > b_degree else b_degree
    a_index=0
    b_index=0
    c_index=0

    while a_degree>=0 and b_degree>=0:
        if a_degree>b_degree:
            c.coefficient[c_index]=a.coefficient[a_index]
            a_degree-=1
            c_index+=1
            a_index+=1
        elif a_degree==b_degree:
            c.coefficient[c_index]=a.coefficient[a_index]+b.coefficient[b_index]
            a_degree-=1
            b_degree-=1
            a_index+=1
            b_index+=1
            c_index+=1
        else:
            c.coefficient[c_index]=b.coefficient[b_index]
            b_degree-=1
            c_index+=1
            b_index+=1

def print_func(var):
    var_degree=var.Degree
    for i in range(var.Degree+1):
        print(f"{var.coefficient[i]}x^{var_degree} ", end="")
        if i<var.Degree: print("+ ", end="")
        var_degree-=1
    print("")
