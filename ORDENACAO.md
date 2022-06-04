# Algorimos de ordenação

## Definição de ordenação
- A partir de uma sequencia de N elementos, é feita permutação dessa sequencia até que ela esteja ordenada de uma determinada forma.

## O que considerar no processo de ordenação?
- Tamanho(size)
- Estabilade(stabity)

## Algoritmos de ordenação por Comparação
### Bubble Sort (Ordenação em bolha)
![All Text](https://upload.wikimedia.org/wikipedia/commons/c/c8/Bubble-sort-example-300px.gif)
- Velocidade: O(n²) - Considerado lento
- Precisa do espaço do tamanho da matriz inicial
- No código sua complexidade é simples.

O Bubble Sort baseia-se na ideia de comparar repetidamente pares de elementos adjacentes e, em seguida, trocar as suas posições se existirem na ordem errada.
```c
void BubbleSort(int vetor[], int tamanho){
	int aux, i, j;
	for(j=tamanho-1; j>=1; j--){
		for(i=0; i<j; i++){
			if(vetor[i]>vetor[i+1]){
				aux=vetor[i];
                vetor[i]=vetor[i+1];
                vetor[i+1]=aux;
            }
        }
    }
}
```
### Quick Sort
![All Text](https://d2m498l008ebpa.cloudfront.net/2016/12/quicksort.gif)
- Velocidade: O(n log n) no médio e melhor caso e O(n²) no pior caso
- Considerado um dos melhores para ordenação

Funcionamento
1. Escolhe um elemento da lista chamado pivô(aleatoriamente).
2. Reorganiza a lista de forma que os elementos menores que o pivô fiquem de um lado, e os maiores fiquem de outro. Esta operação é chamada de “particionamento”.
3. Recursivamente ordena a sub-lista abaixo e acima do pivô.

Na lingugem C já existe a seguinte função que utiliza o algoritmo quick sort:
```
qsort(<arrayname>,<size>,sizeof(<elementsize>),compare_function);
```
A comparre function acima pode mudar de acordo com o tipo do vetor a ser comparado.

Link apoio: https://www.bytellect.com/resources/sorting-in-c-with-the-qsort-function-bytellect001.pdf

Para o melhor entendimento:
```c
void quick(int vet[], int esq, int dir){
    int pivo = esq, i,ch,j;
    for(i=esq+1;i<=dir;i++){
        j = i;
        if(vet[j] < vet[pivo]){
            ch = vet[j];
            while(j > pivo){
                vet[j] = vet[j-1];
                j--;
            }
            vet[j] = ch;
            pivo++;
        }
    }
    if(pivo-1 >= esq){
        quick(vet,esq,pivo-1);
    }
    if(pivo+1 <= dir){
        quick(vet,pivo+1,dir);
    }
 }
```

### Insertion Sort
Insertion Sort ou ordenação por inserção é o método que percorre um vetor de elementos da esquerda para a direita e à medida que avança vai ordenando os elementos à esquerda. Possui complexidade C(n) = O(n) no melhor caso e C(n) = O(n²) no caso médio e pior caso. É considerado um método de ordenação estável.

![Alt Text](https://d2m498l008ebpa.cloudfront.net/2016/12/insertion-sort-animation-2-1.gif)

## Ordenação em tempo linear
- Os algorimos de ordenação por comparação possuem limite assintótico de O(n log n).
Os algoritmos de ordenação linear trazem uma solução mais rápida.

### Counting sort
![All Text](https://camo.githubusercontent.com/a35a31e6076f51eab50ba224df0e237d85c029c9550e00dd11ae39fdce7fd3c8/68747470733a2f2f332e62702e626c6f6773706f742e636f6d2f2d6a4a63686c7931426b54632f574c4771434644647643492f41414141414141414148412f6c756c6a416c7a3270744d6e64495a4e48304b4c545475514d4e73667a44654651434c63422f73313630302f43536f72745570646174656453746570492e676966)
**Idéia**

• Determinar para cada elemento da entrada x o
número de elementos maiores que x.

• Com esta informação, determinar a posição de cada
elemento
> Ex.: Se 17 elementos forem menores que x então x ocupa a
posição de saída 18.

```md
Algoritmo:
    • Assumimos que o vetor de entrada é A[1,...,n];
    • Outros dois vetores são utilizados:
        § B[1,...,n] – armazena a saída ordenada;
        § C[1,...,k] – é utilizado para armazenamento temporário.
```
Complexidade: O(n+k)

###  Radix Sort
![All Text](https://upload.wikimedia.org/wikipedia/commons/6/6a/Dsa_radix_sort.png)
**Idéia**

Pressupõe que as chaves de entrada possuem limite no
valor e no tamanho (quantidade de dígitos);

• Ordena em função dos dígitos (um de cada vez):

• A partir do mais significativo;

• Ou a partir do menos significativo?

• É essencial utilizar um segundo algoritmo estável para
realizar a ordenação de cada dígito

Complexidade: O(d(n+k))

Link para estudo complementar: https://drive.google.com/file/d/1fTRLoBsyluyYhU6ixamJKDj4W5zgGaiu/view?usp=sharing

## Links de referencia:
https://drive.google.com/file/d/1r_xDYHfERbi1gnNy5lCUAWY6FtxxIObY/view?usp=sharing
https://blog.betrybe.com/tecnologia/bubble-sort-tudo-sobre/
https://www.bytellect.com/resources/sorting-in-c-with-the-qsort-function-bytellect001.pdf
https://drive.google.com/file/d/1fTRLoBsyluyYhU6ixamJKDj4W5zgGaiu/view?usp=sharing
