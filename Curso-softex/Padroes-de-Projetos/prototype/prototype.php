<?php

/**
 * Classe abstrata veiculo com seus devidos atributos, com o método do abstrato
 * __clone para fazer o clone obrigar a classe a implementar o método
 */
abstract class Veiculo
{
    public function __construct(
        public string $modelo,
        public string $marca,
        public string $cor,
        public int $numeroRodas
    ) {
    }

    abstract function __clone();
}

/**
 *  Primeira classe concreta que extende a classe abstrata veículo
 */
class Carreta extends Veiculo
{
    // Adiciona os dois novos atributos
    public int $numDeEixos;
    public bool $vidrosEletricos;
    public function __construct(int $numDeRodas, int $numDeEixos, bool $vidrosEletricos)
    {
        $this->modelo = "Grandona";
        $this->marca = 'volvo';
        $this->cor = 'Branco';
        $this->numeroRodas = $numDeRodas;
        $this->numDeEixos = $numDeEixos;
        $this->vidrosEletricos = $vidrosEletricos;
    }
    /**
     * O __clone do php é um médodo mágico da linguagem, e é muito utilizado na aplicação desse tipo de padrão
     * pois ele faz um clone da classe
     *
     * @return void
     */
    function __clone()
    {
    }
}

class Carro extends Veiculo
{
    public int $numDePortas;
    public bool $vidrosEletricos;
    public function __construct(int $numDeRodas, int $numDePortas, bool $vidrosEletricos)
    {
        $this->modelo = "Grandona";
        $this->marca = 'volvo';
        $this->cor = 'Branco';
        $this->numeroRodas = $numDeRodas;
        $this->numDePortas = $numDePortas;
        $this->vidrosEletricos = $vidrosEletricos;
    }
    function __clone()
    {
    }
}

class Aplicacao
{
    private array $arrayBase;
    private array $arrayClone;

    /**
     * Cria array de protótipos
     *
     * @return void
     */
    public function createArray()
    {
        $this->arrayBase[0] = new Carreta(1, 1, true);
        $this->arrayBase[1] = new Carreta(2, 2, false);
        $this->arrayBase[2] = new Carreta(3, 3, true);
        $this->arrayBase[3] =  new Carro(1, 2, true);
        $this->arrayBase[4] =  new Carro(2, 4, true);
        $this->arrayBase[5] =  new Carro(3, 4, true);
    }
    /**
     * Cria clone dos protótipos
     *
     * @return void
     */
    public function cloneArray()
    {
        $this->arrayClone[0] = clone $this->arrayBase[0];
        $this->arrayClone[1] = clone $this->arrayBase[1];
        $this->arrayClone[2] = clone $this->arrayBase[2];
        $this->arrayClone[3] = clone $this->arrayBase[3];
        $this->arrayClone[4] = clone $this->arrayBase[4];
        $this->arrayClone[5] = clone $this->arrayBase[5];
    }

    /**
     * Imprime as informações das classes bases e seus clones
     *
     * @return void
     */
    public function represent()
    {
        foreach ($this->arrayBase as $key => $arr) {
            echo "\nArray base ${key} \n";
            echo $arr->modelo . "\n";
            echo $arr->marca . "\n";
            echo $arr->cor . "\n";
            echo $arr->numeroRodas . "\n";
        }

        foreach ($this->arrayClone as $key => $arr) {
            echo "\nClone ${key} \n";
            echo $arr->modelo . "\n";
            echo $arr->marca . "\n";
            echo $arr->cor . "\n";
            echo $arr->numeroRodas . "\n";
        }
    }
}

function App()
{
    $app = new Aplicacao();

    $app->createArray();
    $app->cloneArray();
    $app->represent();
}

App();
