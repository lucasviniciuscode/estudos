class Curso:
    def __init__(self, nome, instrutor):
        self.nome = nome
        self.instrutor = instrutor
    def getNome(self):
        return self.nome
    def setNome(self, nome):
        self.nome = nome
    def getInstrutor(self):
        return self.instrutor
    def setInstrutor(self, instrutor):
        self.instrutor = instrutor

c1 = Curso('Back-end', 'Gustavo')
print(c1.getNome())