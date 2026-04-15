from header5_2 import Stack
from func5_2_1 import LinkdedStack
from func5_2_2 import print_func

def main():
    list=LinkdedStack()
    print("** 연결 스택 연산 **")
    print_func(list)

    list.push_func(1)
    print_func(list)

    list.push_func(2)
    print_func(list)

    list.push_func(3)
    print_func(list)

    print_func(list, False)
    print(f" peek=>{list.top.stack}")

    pop_value=list.pop_func()
    print_func(list, False)
    print(f"   pop=>{pop_value}")

    pop_value=list.pop_func()
    print_func(list, False)
    print(f"     pop=>{pop_value}")

    pop_value=list.pop_func()
    print_func(list, False)
    print(f"      pop=>{pop_value}")

if __name__ == "__main__":
    main()