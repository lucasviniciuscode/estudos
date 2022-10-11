const { prependOnceListener } = require("process");

var DB = [
    {
        id: 1,
        nome: "GTA IV",
        ano: 2019,
        preco: 150
    },
    {
        id: 2,
        nome: "FIFA 2022",
        ano: 2022,
        preco: 300
    },
    {
        id: 3,
        nome: "MORTAL KOMBAT",
        ano: 2018,
        preco: 150
    }
]

var express = require("express")
const app = express()
app.listen(8888)

app.get('/games', (request, response) => {
    return response.send(DB);
})
