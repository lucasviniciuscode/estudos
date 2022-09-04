var mysql = require('mysql');

var con = mysql.createConnection({
    host: "localhost",
    user: "root",
    password: "root"
});

con.connect(function(err) {
    if (err) {
        console.log('Erro ao se conectar')
        return;
    }
    console.log("Connected!");
});