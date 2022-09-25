// Aceito
package main

import (
	"fmt"
    "math"
)

func main() {
	var N, L, D int
	var float float64

	fmt.Scanln(&N, &L, &D)
	quantidadeMinima := N * D / 1000
	float = float64(quantidadeMinima / L)
  	value := math.Ceil(float)

	fmt.Printf("%f", value)
}