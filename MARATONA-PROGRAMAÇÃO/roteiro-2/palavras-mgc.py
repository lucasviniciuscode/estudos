n = int(input())
lista = []
for i in range(n):
    s = input()
    texto = s.lower()
    lista.append(texto)

for word in lista:
    verifica = 1
    isFirst = 1
    for char in word:
        if(isFirst):
            ascAnt = ord(char)
            isFirst = 0
        else:
            if(ord(char) <= ascAnt):
                verifica = 0
            ascAnt = ord(char)
    if(verifica):
        print(word + ': O' )
    else:
        print(word + ': N' )


