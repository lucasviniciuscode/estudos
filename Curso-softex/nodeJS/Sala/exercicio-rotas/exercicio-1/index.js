var express = require("express")
const app = express()
app.listen(8888)

app.get('/home', (request, response) => {
    return response.send('Essa é a rota HOME');
})
app.get('/contato', (request, response) => {
    return response.send('Essa é a rota CONTATO');
})
app.get('/sobre', (request, response) => {
    return response.send('Essa é a rota SOBRE');
})