class Abstract:
    def __init__(self, a, b, c, d, e, f) -> None:
        self.complexOne =  complex(a,b)
        self.complexTwo =  complex(c,d)
        self.complexThree =  complex(e,f)
    def sum(self):
        print ('soma: ', self.complexOne + self.complexTwo + self.complexThree)
    def sub(self):
        print('subtração: ', self.complexOne - self.complexTwo - self.complexThree)
    def mult(self):
        print('multiplicação: ', self.complexOne * self.complexTwo * self.complexThree)
    def div(self):
        print('divisao:', self.complexOne / self.complexTwo / self.complexThree)
    def mostra(self):
        self.sum();
        self.sub();
        self.mult();
        self.div();
        print('Primeiro numero propriedade real: ', self.complexOne.real)
        print('Primeiro numero propriedade imaginaria: ', self.complexOne.imag)
        print('Segundo numero propriedade real: ', self.complexTwo.real)
        print('Segundo numero propriedade imaginaria: ', self.complexTwo.imag)
        print('Terceiro numero propriedade real: ', self.complexThree.real)
        print('Terceiro numero propriedade imaginaria: ', self.complexThree.imag)

abstract = Abstract(1, 2, 1, 2, 1, 2)
abstract.mostra();