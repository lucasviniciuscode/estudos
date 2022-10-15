<?php

abstract class Pato
{
    public function fazerQuaQua(): string
    {
        return "Qua qua";
    }

    public function voar(): string
    {
        return "voa voa";
    }
}

class GalinhaAdapter extends Pato
{
}

abstract class Galinha
{
    public function fazerCocorico(): string
    {
        return "cocorico";
    }

    public function voar(): string
    {
        return "voar";
    }
}

class GalinhaCarijo extends Galinha
{
    public function __construct(private GalinhaAdapter $galinha)
    {
    }
}

class AdaptadorPato extends Pato
{
}

class AdaptadorPatoDemo extends AdaptadorPato
{
}
