# Principios SOLID

## DIP - Princípio da Inversão de Dependência

O princípio da Inversão de Dependência recomenda que uma classe cliente deve estabelecer dependências prioritariamente com abstrações e não com implementações concretas, pois abstrações (isto é, interfaces) são mais estáveis do que implementações concretas (isto é, classes). 

No arquivo mostrando [um código problemático](https://github.com/Joao-Pedro-Bautista/EngSoftware/blob/master/SOLID/DIP/problematico-DIP.cpp) podemos ver que a classe *Arquivo* tem um método de *gerarArquivo*, no qual viola o princípio, pois o método pode variar para cada extensão de arquivo, tais como: PDF, DOCX, XLSX, entre outros.

Fazendo a [sua resolução](https://github.com/Joao-Pedro-Bautista/EngSoftware/blob/master/SOLID/DIP/resolucao-DIP.cpp) podemos observar que, a classe *Arquivo* tem suas extenções para fazer a geração de um arquivo com a classe sendo sua extensão expecífica.


## ISP - Princípio da Segregação da Interface 

O Princípio da Segreuma interface deve ser coesa e ter apenas o mínimo necessário para seus clientes. As interfaces devem ser segregadas de forma a cada cliente depender apenas dos métodos que precisa utilizar.

No código [problemático](https://github.com/Joao-Pedro-Bautista/EngSoftware/blob/master/SOLID/ISP/problematico-ISP.cpp) é possível observer que a interface *Animal* tem os métodos de *comer, dormir e voar*, mas, observando mais abaixo, percebe-se que a classe cachorro usa essa interface mas não é possível fazer a implementação do método *voar*.

Para [resolver o código](https://github.com/Joao-Pedro-Bautista/EngSoftware/blob/master/SOLID/ISP/resolucao-ISP.cpp), foi implementado duas interfaces, *Animal* e *Ave*. Agora pode especificar que a classe *Cachorro* não é mais uma *Ave*, logo não necessitando a implementação do código de *voar*.

## OCP - Princípio Aberto-Fechado

O Princípio Aberto-Fechado declara que as entidades do software devem ser projetadas de maneira a permitir que novos comportamentos sejam adicionados sem a necessidade de modificar o código existente. Isso significa que, ao estender as funcionalidades do sistema, devemos ser capazes de fazer isso através de adição de novas classes ou módulos, em vez de alterar o código existente.

[Neste código](https://github.com/Joao-Pedro-Bautista/EngSoftware/blob/master/SOLID/OCP/problematico-OCP.cpp) a classe *Forma* viola o princípio pois será necessário mexer na classe a cada forma à ser adicionada dificultando a extensibilidade do código.

A [sua resolução](https://github.com/Joao-Pedro-Bautista/EngSoftware/blob/master/SOLID/OCP/resolucao-OCP.cpp) consiste em fazer a implementação das formas como se fossem classes extendidas da superclasse *Forma*, assim colocando o código nos conformes do princípio e melhorando a sua extensibildiade.

## SRP - Princípio da Responsabilidade Única

O Princípio da Responsabilidade Única declara que uma classe deve ter apenas uma responsabilidade e, portanto, deve ter apenas um motivo para mudar. Cada classe deve ser responsável por fazer uma única tarefa e fazer bem. Isso ajuda a evitar acoplamento excessivo entre classes e torna o código mais modular e testável.

No [código problemático](https://github.com/Joao-Pedro-Bautista/EngSoftware/blob/master/SOLID/SRP/problematico-SRP.cpp) é notável que a classe *Calculadora*, o método *add* faz tanto a função de adicionar dois valores inteiros, tanto como imprimir o resultado.

[Resolvendo](https://github.com/Joao-Pedro-Bautista/EngSoftware/blob/master/SOLID/SRP/resolucao-SRP.cpp)-o, é possível criar uma classe *Visor* com a uníca função de fazer a impressão de um inteiro.