const {createServer} = require("http");
const port = process.env.port || 8080;
const server = createServer();

server.on("request", (request, response) => {
    response.end("Olá Mundo!");
});

server.listen(port, () => {
    console.log(`Servidor iniciando na porta ${port}`);
});

