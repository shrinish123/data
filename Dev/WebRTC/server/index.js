const express = require('express');
const app = express();  
const PORT = process.env.PORT || 5000;
const bodyParser = require('body-parser');
const cors = require('cors');
const http = require('http');
const {Server} = require('socket.io');
const { disconnect } = require('process');

app.use(cors());
app.use(bodyParser.json());
app.use(bodyParser.urlencoded({ extended: true }));

const server = http.createServer(app);

const io = new Server(server, {
    cors: {
        origin: '*',
        methods: ['GET', 'POST']
    }
});

io.on('connection', (socket) => {
    console.log('user connected', socket.id);

    socket.on('chat message', (msg) => {
        console.log('message: ' + msg);
        io.emit('chat message', msg);
    });
    socket.on('disconnect', () => {
        disconnectEventHandler(socket.id);
    });
});

// const routes = require('./routes/routes.js')(app);

app.get('/', (req, res) => {
    res.send('Hello World!');
})

server.listen(PORT, () => {
    console.log(`Server running at port ${PORT}`);
});

// Socket Event Handlers

const disconnectEventHandler = (socketId) => {
    console.log('user Disconnected', socketId);
}
