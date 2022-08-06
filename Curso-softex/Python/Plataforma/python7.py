class Pessoa:
    instancias = 0
    def __init__(self, nome):
        self.nome = nome
    def getNome(self):
        return self.nome
    def getInstancias(self):
        return self.instancias
    def setIntancias(self):
        self.instancias += 1

p1 = Pessoa('Lucas')
p2 = Pessoa('Gustavo')
p3 = Pessoa('Daniel')

