calculadora(10,1,'+')
calculadora(10,1,'-')
calculadora(10,2,'*')
calculadora(10,2,'/')
calculadora(10,3,'/')

function calculadora(val1, val2, op){
    switch(op){
        case '+':
            result = val1 + val2;
            console.log(`${val1} + ${val2} = ${result} \n`)
            break;
        case '-':
            result = val1 - val2;
            console.log(`${val1} - ${val2} = ${result} \n`)
            break;
        case '*':
            result = val1 * val2;
            console.log(`${val1} * ${val2} = ${result} \n`)
            break;
        case '/':
            resto = val1 % val2;
            if(resto){
                result = (val1-resto) / val2;
                console.log(`${val1} / ${val2} = ${result}`)
                console.log(`Resto = ${resto} \n`)
            } else {
                result = val1 / val2;
                console.log(`${val1} / ${val2} = ${result} \n`)
            }
            break;
        default:
            console.log('Oeração desconhecida!')
            break;

    }
}