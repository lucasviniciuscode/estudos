def calculadora(num1, num2, operacao):
    ret = bool(0)
    if(operacao == 1):
        ret = num1 + num2
    if(operacao == 2):
        ret = num1 - num2
    if(operacao == 3):
        ret = num1 * num2
    if(operacao == 4):
        ret = num1 / num2
    return ret

def isValidOperation(operacao):
    return (operacao >= 0 and operacao < 4)

operacao = 1
while(operacao != 0):
    print('Operação:')
    operacao = int(input())
    if(not(isValidOperation(operacao))):
        print('Essa opcao nao existe')
        continue
    if(not(operacao)):
        break
    print('Numero 1:')
    num1 = int(input())
    print('Numero 2:')
    num2 = int(input())
    res = calculadora(num1, num2, operacao)
    print('Resultado: ', str(res))



