// 10
minProxProva(5,6)
// Reprovado
verificaSePassou(5,5,10)

function minProxProva(nota1, nota2){
    var minima = (21 - (nota1 + nota2))
    console.log(`Você precisa de ${minima} para passar`)
}

function verificaSePassou(nota1, nota2, nota3){
    let media = (nota1 + nota2 + nota3)/3 // atribuição
    let result = (media > 7) ? 'Passou!' : 'Reprovado' // ternário
    console.log(result)
}

