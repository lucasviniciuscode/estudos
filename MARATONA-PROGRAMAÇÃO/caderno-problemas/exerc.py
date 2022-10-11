
N = int(input())
sequence = []
tam = N - 1

cadeia = ['A', 'B']

def contaCadeia(cadeia):
    contA = 1
    cont = 0
    cadeiasValidas = []
    cadeiasValidas.append(cadeia)
    for j in range(contA):
        cadeiaAux = cadeia
        for i in range(len(cadeiaAux)):
            if(cadeiaAux[i] == 'A'):
                cont += 1
            if(cont >= j):
                cadeiaAux.pop(i+1)
                cadeiasValidas.append(cadeiaAux)
            

    print(cadeiasValidas)
contaCadeia(cadeia)


# def calcCaldeiaMin(N):
#     cadeiasTestadas = []
#     cadeiaMin = 'AB'
#     testaCadeia(N, 'AB')
# def testaCadeia(N, cadeia):
#     aux = N
#     qtdA = cadeia.count('A')
#     cadeiaAux = cadeia
#     caracRemovidos = []
#     contCadeias = 0
#     remove = 0
#     currentA = 0
#     for j in range(len(cadeiaAux)):
#         if(cadeiaAux[j] == 'A'):
#             currentA += 1
#             remove = not(remove)
#         if(remove and cadeiaAux[j] != 'B'):
#             cadeiaAux = cadeiaAux.replace(b[i],"")




