express = require("express")
app = express();

app.get('/', function(req, res) {
    res.send('GET');
});

app.post('/', function (req, res) {
    res.send('POST');
});

app.put('/', function (req, res) {
    res.send('PUT');
});

app.delete('/', function (req, res) {
    res.send('DELETE');
});

app.listen("8080", () => {
    console.log(`listening at http://localhost:8080`);
});