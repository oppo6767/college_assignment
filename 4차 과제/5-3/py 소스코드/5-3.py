from header5_3 import Stack
from func5_3_1 import LinkdedStack

def main():
    list=LinkdedStack()
    expression="{(A+B)-3}*5+[{cos(x+y)+7}-1]*4"
    print(expression)
    for i in expression:
        match i:
            case "(" | "{" | "[":
                list.push_func(i)
            case ")" | "}" | "]":
                list.pop_func()
    if list.top is None:
        print("수식의 괄호가 맞게 사용되었습니다!")
    else:
        print("수식의 괄호가 맞게 사용되지 않았습니다!")

if __name__ == "__main__":
    main()