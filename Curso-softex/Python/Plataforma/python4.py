import datetime

def idade(anoNascimento):
    date = datetime.date.today()
    if (anoNascimento < 1922 or anoNascimento > date.year):
        raise Exception('Ano inválido')

    return date.year - anoNascimento

loop = bool(1)
while(loop):
    try:
        nome = input("Nome completo: ")
        ano = int(input("Ano de nascimento: "))
        print(idade(ano))
        loop = bool(0)
    except Exception as e:
        print(e)
        loop = bool(1)


