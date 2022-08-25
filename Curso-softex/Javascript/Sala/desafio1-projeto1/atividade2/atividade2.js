function removeValores(arr){
    let tamanhoArray = arr.length 
    let novoArray = arr.slice(3,tamanhoArray)
    delete arr;
    return tamanhoArray >= 3 ? novoArray : [];
}

console.log(removeValores([1,2,3,4,5]))
console.log(removeValores([5,4,3,2,1,0]))
console.log(removeValores([10,20,30]))
console.log(removeValores([99,100]))