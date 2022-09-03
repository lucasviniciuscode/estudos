function Function(){
    console.log("Entradas inválidas!");
}
function sumAndSub(num1, num2){
    if(isNaN(num1) || isNaN(num2)){
        Function()
        return
    }
    let soma = num1 + num2
    let sub = num1 - num2
    console.log(`${num1} + ${num2} = ${soma}`)
    console.log(`${num1} - ${num2} = ${sub}`)
    return ;
}
const arrowFunction = (num1, num2) => {
    let divisao = num1 / num2
    let multiplicacao = num1 * num2
    console.log(`${num1} / ${num2} = ${divisao}`)
    console.log(`${num1} * ${num2} = ${multiplicacao}`)
    return ;
}

sumAndSub(2, 2)
arrowFunction(2, 2)
sumAndSub(2, 'a')