def valida(nota):
    if(nota < 0 or nota > 10):
        return 0
    return 1
def chamada(nota):
    if(not(valida(nota))):
        print('Digite uma nota entre 0 e 10:')
        nota = int(input())
        chamada(nota)
    print("Nota válida")

print('Digite uma nota entre 0 e 10:')
nota = int(input())
chamada(nota)

