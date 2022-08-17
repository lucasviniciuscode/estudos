# Padrões de Projetos
## Factory Method
Padrões de Projeto são técnicas de reuso de software que oferecem benefícios práticos no desenvolvimento de aplicações web.
Um dos padrões mais usados, dentre os padrões criacionais é o Factory Method, que fornece uma interface para criar objetos em uma superclasse, mas permite que as subclasses alterem o tipo de objetos que serão criados.
- Vantagens
    - Torna o software mais flexivel retirando assim, as dependências explicítas.
    - Encapsula o código que varia, código de instanciação de classe.
    - Remove o acoplamento forte que existia nas classes que tinham
- Desvantagens
    - É raro, mas, se a criação de subclasses, responsáveis pela instanciação das classes de domínio do problema, for apenas para cobrir criações diretas de poucas classes que são utilizadas poucas vezes e dentro de classes de mesmo domínio do problema, o  Factory Method pode ser um problema.