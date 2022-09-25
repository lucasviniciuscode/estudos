// saida bate com os testes, mas a plataforma não aceitou
package main

import "fmt"

func main() {
	var t, aux, lastValue int
	numCartas := 0
	fmt.Scanln(&t)
	var cartas, last []int
	for i := 0; i < t; i++ {
		fmt.Scanln(&aux)
		cartas = append(cartas, aux)
	}
	for i := 0; i < t; i++ {
		for j := 1; j < cartas[i]; j++ {
			numCartas = numCartas + (j - 1) + (j * 2)
			if numCartas > cartas[i] {
				last = append(last, lastValue)
				break
			}
			lastValue = j
		}
		numCartas = 0
	}

	for i := 0; i < t; i++ {
		fmt.Printf("%d\n", last[i])
	}
}
