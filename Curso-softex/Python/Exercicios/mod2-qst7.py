notas = []
soma = 0
menosQueSeis = 0
maisQueSeis = 0
maisQueMedia = 0
control = 0

while(control != -1):
    nota = float(input())
    if(nota != -1):
        notas.append(nota)
        soma = soma+nota
    control = nota

media = soma/len(notas)
maior = notas[0]
menor = notas[0]

for nota in notas:
    if(nota > maior):
        maior = nota
    if(nota < menor):
        menor = nota
    if(nota < 6):
        menosQueSeis = menosQueSeis + 1
    if(nota >= 6):
        maisQueSeis = maisQueSeis + 1
    if(nota >= media):
        maisQueMedia = maisQueMedia + 1


print("Média: ", str(media))
print("Quantidade menor que 6: ", str(menosQueSeis))
print("Quantidade maior ou igual a 6: ", str(maisQueSeis))
print("Quantidade maior que a media: ", str(maisQueMedia))
print("Maior nota: ", str(maior))
print("Menor nota: ", str(menor))
