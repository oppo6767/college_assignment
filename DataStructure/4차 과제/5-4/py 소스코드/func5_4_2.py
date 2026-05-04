from header5_4 import Stack

def calculate(stack, operations):
    value1=stack.top.stack
    value2=stack.top.link.stack
    stack.top=stack.top.link.link
    match operations:
        case "*":
            return int(value2)*int(value1)
        case "/":
            return int(value2)/int(value1)
        case "-":
            return int(value2)-int(value1)

