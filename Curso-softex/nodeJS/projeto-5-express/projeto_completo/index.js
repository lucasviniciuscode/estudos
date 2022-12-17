express = require("express")
app = express();

app.get('/listar/:id', function(req, res) {
    let id = req.params.id;
    if (id == 10){
        res.status(200).send('Requisição OK');
    } else {
        res.status(404).send({message: 'erro'});
    }
});

app.listen("8080", () => {
    console.log(`listening at http://localhost:8080`);
});