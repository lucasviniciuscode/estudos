const express = require('express');

const app = express();

app.listen(8888);

app.get('/projects', (request, response) => {
    return response.send('Hello, world');
})

