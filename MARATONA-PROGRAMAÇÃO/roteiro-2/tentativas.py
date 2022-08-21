from itertools import combinations, permutations

def formatLista(lista):
    for i in range(len(lista)):
        if(i > int(lista[0])):
            del lista[i]
        else:
            lista[i] = int(lista[i])
    return lista

matriz = []
lista = []
lista = input().split(" ")
lista = formatLista(lista)
while(int(lista[0]) != 0 and int(lista[0]) < 8):
    n = lista[0]
    del lista[0]
    matriz.append(lista)
    lista = input().split(" ")
    lista = formatLista(lista)

for i in list(matriz):
    temp = permutations(i, len(i))
    print()
    for j in list(temp):
        for k in list(j):
            print(k , end=' ')
        print()

