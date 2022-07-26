def valida(usuario, senha):
    if(usuario == senha):
        print("Erro! O nome de usuário não deve coincidir com a senha")
        return 0
    return 1
def chamada(usuario, senha):
    if(not(valida(usuario, senha))):
        print('Digite o nome de usuario:')
        usuario = input()
        print('Digite a senha:')
        senha = input()
        chamada(usuario, senha)

print('Digite o nome de usuario:')
usuario = input()
print('Digite a senha:')
senha = input()
chamada(usuario, senha)
print("Cadastro realizado")
