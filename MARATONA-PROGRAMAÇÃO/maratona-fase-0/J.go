// Aceito

package main

import (
	"fmt"
)

func main() {
	var n, auxMin int
	var auxTempo string
	fmt.Scanln(&n)
	var min []int
	var tempo []string
	for i := 0; i < n; i++ {
		fmt.Scanln(&auxMin, &auxTempo)
		min = append(min, auxMin)
		tempo = append(tempo, auxTempo)
	}

	for i := 0; i < n; i++ {
		if tempo[i] == "1T" {
			if min[i] <= 45 {
				fmt.Println(min[i])
			} else {
				fmt.Printf("45+%d\n", min[i]-45)
			}
		} else if tempo[i] == "2T" {
			if min[i] <= 45 {
				fmt.Println(min[i] + 45)
			} else {
				a := min[i] - 45
				value := 45 + min[i] - a
				fmt.Printf("%d+%d\n", value, a)
			}
		}
	}
}
