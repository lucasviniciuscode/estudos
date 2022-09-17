class Computer {
    constructor(ram, hdd, cpu, type){
        this.ram = ram;
        this.hdd = hdd;
        this.cpu = cpu;
        this.type = type;
    }

    static Factory(ram, hdd, cpu, type){
        if(type == "Pc"){
            return new Pc(ram, hdd, cpu, type);
        }
        if(type == "Server"){
            return new Server(ram, hdd, cpu, type);
        }
    }

    get getRam () {
        return this.ram;
    }

    setRam (ram) {
        this.ram = ram;
    }

    get getHdd () {
        return this.hdd;
    }

    setHdd (hdd) {
        this.hdd = hdd;
    }

    get getCpu () {
        return this.cpu;
    }

    setCpu (cpu) {
        this.cpu = cpu;
    }

    get getType () {
        return this.type;
    }

    setType (type) {
        this.type = type;
    }

    toString (){
        console.log(this.ram, this.hdd, this.cpu, this.type);
    }
}

class Pc extends Computer {

}

class Server extends Computer {

}

function run(){
    let pc = Computer.Factory(10, 10, 4000, "Pc");
    let server = Computer.Factory(10, 10, 4000, "Server");

    console.assert(pc instanceof Pc);
    console.assert(server instanceof Server);
    pc.setHdd(100)
    server.setHdd(200)
    pc.toString()
    server.toString()
}

run()