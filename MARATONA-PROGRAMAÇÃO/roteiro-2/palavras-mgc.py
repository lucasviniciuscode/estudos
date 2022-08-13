def verificaMaior(char1, char2):
    return(ord(char1) > ord(char2))

n = int(input());
lista = []
for i in range(n):
    s = input()
    texto = s.lower()
    lista.append(texto)

for word in lista:
    verifica = 1
    for char in word:
        ind = word.find(char)
        if(ind>=1):
            if(ord(word[ind]) <= ord(word[ind-1])):
                verifica = 0
    print(verifica)
    if(verifica):
        print(word + ': O' )
    else:
        print(word + ': N' )


