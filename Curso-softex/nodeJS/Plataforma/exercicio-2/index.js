var array = ['Toyota', 'Chevrolet', 'Honda'];

var Carro = {
    cor:  'Branco',
    ano: 2022,
    marca: array[0],
    modelo: 'Corolla'
}

function getObjeto(){
    return Carro;
}

function getArray(){
    return array;
}

console.log(getArray())
console.log(getObjeto())