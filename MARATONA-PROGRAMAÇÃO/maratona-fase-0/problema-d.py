# NÃO FINALIZADO

N = int(input())
Palavra = input()
alunos = input().split()
aluno = [0,0,0,0,0]
for i in range(5):
    for j in range(len(alunos[i])):
        if(j>len(Palavra)):
            break
        if(Palavra[j] != alunos[i][j]):
            aluno[i] = aluno[i]+1

print(alunos)
print(aluno)
