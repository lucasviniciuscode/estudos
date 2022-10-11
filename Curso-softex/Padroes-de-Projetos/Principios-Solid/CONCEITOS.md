# Principios SOLID
- Servem para escrever códigos mais faceis de manter, testar e reutilizar.
- Apresenda em 2000 por Robert Martin

## Single Responsability

- Se uma classe tiver muitas responsabilidades, aumenta a possibilidade de bugs, pois fazer alterações em uma de suas responsabilidades pode afetar as outras sem você saber.

## Open Closed

- Alterar o comportamento atual de uma classe afetará todos os sistemas que usam essa classe.
- Se você deseja que a classe execute mais funções, a abordagem ideal é adicionar às funções que já existem, NÃO alterá-las.
    - Comando extends

## **Liskov Substitution**

- Quando uma classe filha não pode executar as mesmas ações que sua classe pai, isso pode causar bugs.
- Se você tiver uma classe e criar outra classe a partir dela, ela se tornará um pai e a nova classe se tornará um filho. A classe filha deve ser capaz de fazer tudo que a classe pai pode fazer. Este processo é denominado Herança.
- A classe filha deve ser capaz de processar as mesmas solicitações e entregar o mesmo resultado que a classe pai ou pode entregar um resultado do mesmo tipo.
- Se a classe filha não atender a esses requisitos, significa que a classe filha foi completamente alterada e viola este princípio.

> Este princípio visa reforçar a consistência para que a classe pai ou sua classe filha possam ser usadas da mesma maneira sem erros.
>

## **Interface Segregation**

- Os clientes não devem ser forçados a depender de métodos que não usam.
- Quando uma classe é solicitada a realizar ações que não são úteis, é um desperdício e pode produzir bugs inesperados se a classe não tiver a capacidade de executar essas ações.
- Uma classe deve realizar apenas ações necessárias para cumprir sua função. Qualquer outra ação deve ser removida completamente ou movida para outro lugar se puder ser usada por outra classe no futuro.

> Este princípio visa dividir um conjunto de ações em conjuntos menores, de forma que uma Classe execute SOMENTE o conjunto de ações de que necessita.
>

## **Dependency Inversion**

- Módulos de alto nível não devem depender de módulos de baixo nível. Ambos devem depender da abstração.
- Abstrações não devem depender de detalhes. Os detalhes devem depender das abstrações.
- Em primeiro lugar, vamos definir os termos usados aqui de forma mais simples
    - Módulo (ou classe) de alto nível: classe que executa uma ação com uma ferramenta.
    - Módulo de baixo nível (ou classe): a ferramenta necessária para executar a ação
    - Abstração: representa uma interface que conecta as duas classes.
    - Detalhes: como a ferramenta funciona
- Este princípio diz que uma classe não deve ser fundida com a ferramenta que ela usa para executar uma ação. Em vez disso, deve ser fundido à interface que permitirá que a ferramenta se conecte à Classe.
- Também diz que tanto a classe quanto a interface não devem saber como a ferramenta funciona. No entanto, a ferramenta precisa atender às especificações da interface.

> Este princípio visa reduzir a dependência de uma classe de alto nível na classe de baixo nível, introduzindo uma interface.

Fonte:
