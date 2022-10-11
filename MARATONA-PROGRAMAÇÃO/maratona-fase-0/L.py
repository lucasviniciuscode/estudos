# TEMPO LIMITE EXCEDIDO, FEITA POR PAULO

def conv(num, base):
    numFunc = int(num)
    novaBase = ''
    while numFunc != 0:
        novaBase += str(numFunc % base)
        numFunc = int(numFunc/base)
    return novaBase[::-1]

def cont(num):
    return str(num).count('4')


num = input()
propNum = num.count('4') / len(num)


propBase = 0
base = 0
for x in range(5,int(num)):
    convNum = conv(num, x)
    propBaseAtual = cont(convNum) / len(convNum)
    if(propBaseAtual > propNum):
            propBase = propBaseAtual
            base = x

print(5 if base <= 5 else base)