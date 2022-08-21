from unittest import result


def formatLista(lista):
    for i in range(len(lista)):
        if(lista[i] == ''):
            del lista[i]
    for i in range(len(lista)):
        lista[i] = int(lista[i])
    return lista

matAta = []
matDef = []
AtaDef = input().split(" ")
AtaDef = formatLista(AtaDef)
teste = 0
while(AtaDef[0] != 0 and AtaDef[1] != 0):
    Ata = input().split(" ")
    Ata = formatLista(Ata)
    matAta.append(Ata)
    Def = input().split(" ")
    Def = formatLista(Def)
    matDef.append(Def)
    teste = teste + 1
    AtaDef = input().split(" ")
    AtaDef = formatLista(AtaDef)

result = []
for i in range(teste):
    verificador = 0
    for j in list(matAta[i]):
        for k in list(matDef[i]):
            if(j < k):
                verificador += 1
    if(verificador >= 2):
        result.append('Y')
    else:
        result.append('N')
print()
for i in list(result):
    print(i)