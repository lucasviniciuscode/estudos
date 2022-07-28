def calculadora(num1, num2, operacao):
    ret = 0
    if(operacao == 1):
        ret = num1 + num2
    if(operacao == 2):
        ret = num1 - num2
    if(operacao == 3):
        ret = num1 * num2
    if(operacao == 4):
        ret = num1 / num2
    return ret

# exemplo
print(calculadora(1,3,5))
