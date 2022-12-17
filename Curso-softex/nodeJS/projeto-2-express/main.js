express = require("express")
app = express();

app.get('/', function(req, res) {
    res.send('hello world');
});

app.post('/', function (req, res) {
  res.send('POST request to the homepage');
});

app.listen("8080", () => {
  console.log(`Example app listening at http://localhost:8080`);
});