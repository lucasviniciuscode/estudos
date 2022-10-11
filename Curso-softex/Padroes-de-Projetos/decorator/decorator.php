<?php

/**
 * O Decorator é um padrão de projeto estrutural que permite que você acople novos comportamentos para objetos ao colocá-los dentro de * invólucros de objetos que contém os comportamentos.
 */

interface Component
{
    public function operation(): string;
}

class ConcreteComponent implements Component
{
    public function operation(): string
    {
        return "Sanduíche de Carne, Bacon, QueijoMussarelaRalado custa $7,49.";
    }
}

class Decorator implements Component
{
    /**
     * @var Component
     */
    protected $component;

    public function __construct(Component $component)
    {
        $this->component = $component;
    }

    public function operation(): string
    {
        return $this->component->operation();
    }
}

class FrangoAssado extends Decorator
{
    private float $price = 4.50;
    private string $name = "Sanduiche de Carne";

    public function GetPrice(): float
    {
        return $this->price;
    }

    public function GetName(): string
    {
        return $this->name;
    }
}

class Pepperoni extends Decorator
{
    private float $price = 0.99;
    private string $name = "Pepperroni";

    public function GetPrice(): float
    {
        return $this->price;
    }

    public function GetName(): string
    {
        return $this->name;
    }
}

class QueijoMussarelaRalado extends Decorator
{
    private float $price = 2.00;
    private string $name = "QueijoMussarelaRalado";

    public function GetPrice(): float
    {
        return $this->price;
    }

    public function GetName(): string
    {
        return $this->name;
    }
}

function run()
{
    $component = new ConcreteComponent();
    $frango = new FrangoAssado($component);
    $peppe = new Pepperoni($component);
    $queijo = new QueijoMussarelaRalado($component);
    echo $queijo->operation() . PHP_EOL;
    echo $frango->GetName() . PHP_EOL;
    echo $peppe->GetName() . PHP_EOL;
    echo $queijo->GetName() . PHP_EOL;
}

run();
