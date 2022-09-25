# NÃO DEU TEMPO SUBMETER, MAS O PROBLEMA FOI RESOLVIDO
a = int(input())
alunos = []
medias = []

for i in range(a):
    aluno = input()
    alunos.append(aluno)
    notas = input()
    notasSep = notas.split()
    soma = 0
    for j in range(len(notasSep)):
        soma = soma + float(notasSep[j])
    media = soma/len(notasSep)
    medias.append(media)

for i in range(a):
    print(alunos[i] + ": %.1f" %medias[i])
