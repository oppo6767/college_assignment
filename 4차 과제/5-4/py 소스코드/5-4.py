from header5_4 import Stack
from func5_4_1 import LinkdedStack

def main():
    list=LinkdedStack()
    expression="35*62/-"
    value=None

    print("후위 표기식:", expression)
    for i in expression:
        match i:
            case "*" | "/" | "-":
                value=list.pop_func(i)
                list.push_func(value)
            case _:
                list.push_func(i)

    print("연산 결과=>", value)

if __name__ == "__main__":
    main()