express = require("express")
app = express()
const path = require('path');
app.set('view engine', 'html')

app.get('/', function (req, res) {
    res.send('Initial page');
});

app.get('/page', function (req, res) {
    res.sendFile(path.join(__dirname + '/desafio-html/index.html'));
});

app.get('/query', (req, res) => {
    page = req.query.page;
    pageSize = req.query.pageSize;

    res.send(`page = ${page} pageSize = ${pageSize}`);
})

// POST method route
app.post('/', function (req, res) {
    res.send('POST request to the homepage');
});

app.use(function(req, res, next) {
    res.status(404).json({message: 'Erro ao acessar a rota'});
});

app.listen("8080", () => {
    console.log(`Example app listening at http://localhost:8080`);
});