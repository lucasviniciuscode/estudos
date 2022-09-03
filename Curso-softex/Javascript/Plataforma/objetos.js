class Banco {
    constructor(conta, saldo, tipo, agencia) {
        this.conta = conta;
        this.saldo = saldo;
        this.tipo = tipo;
        this.agencia = agencia;
    }

    get buscarSaldo() {
        return this.saldo
    }

    deposito(valor) {
        if(valor <= 0){
            console.log('Valor insuficiente para depósito.');
            return;
        }
        this.saldo += valor;
    }

    saque(valor) {
        if(this.saldo <= 0){
            console.log('Você não possui saldo para saque.');
            return;
        }
        this.saldo -= valor;
    }

    get numeroDaConta() {
        return this.conta
    }
}

let banco = new Banco('12345', 1000, 'corrente', '321');
banco.deposito(100);
console.log(banco.buscarSaldo);
console.log(banco.numeroDaConta);