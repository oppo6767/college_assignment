def main() :
    stack=[]
    print("** 순차 스택 연산 **")
    print(f"STACK{stack}")

    stack.append(1)
    print(f"STACK{stack}")

    stack.append(2)
    print(f"STACK{stack}")

    stack.append(3)
    print(f"STACK{stack}")

    print(f"STACK{stack}  peek=>{stack[2]}")

    pop_value=stack.pop()
    print(f"STACK{stack} \tpop=>{pop_value}")

    pop_value=stack.pop()
    print(f"STACK{stack} \tpop=>{pop_value}")

    pop_value=stack.pop()
    print(f"STACK{stack} \tpop=>{pop_value}")

if __name__ == "__main__":
    main()