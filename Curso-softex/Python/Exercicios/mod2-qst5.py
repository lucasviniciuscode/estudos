notas = []

notas.append(int(input()))
while(notas[-1] != -1):
    notas.append(int(input()))

print("Notas:")
for nota in notas:
    print(nota)
