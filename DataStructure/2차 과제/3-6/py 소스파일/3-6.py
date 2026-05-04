from struct3_6 import polynomial
from func_list3_6 import addpoly
from func_list3_6 import print_func

def main() :
    a = polynomial(3, [4,3,5,0])
    b = polynomial(4, [3,1,0,2,1])
    c = polynomial(0, [0]*(max(a.Degree, b.Degree)+1))

    addpoly(a,b,c)
    print("A(x)= ", end="")
    print_func(a)

    print("A(x)= ", end="")
    print_func(b)
    
    print("A(x)= ", end="")
    print_func(c)

if __name__ == "__main__":
    main()