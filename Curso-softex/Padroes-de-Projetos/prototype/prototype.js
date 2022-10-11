class Veiculo {
    constructor (modelo, marca, cor, numeroRodas){
        this.modelo = modelo;
        this.marca = marca;
        this.cor = cor;
        this.numeroRodas = numeroRodas;
    }

    clone(){
    }

    represent(){
    }
}

class Uno extends Veiculo {
    constructor(numeroPortas, vidrosEletricos) {
        super();
        this.numeroPortas = numeroPortas;
        this.vidrosEletricos = vidrosEletricos;
    }
}