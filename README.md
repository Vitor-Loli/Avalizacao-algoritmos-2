Avaliação AV2 Matéria de algoritmos

Introdução
A ordenação de dados é uma das operações fundamentais na ciência da computação, com
aplicações que vão desde a organização de informações em bancos de dados até a
otimização de processos em diversas áreas. O estudo e a compreensão de diferentes
algoritmos de ordenação são essenciais para o desenvolvimento de soluções eficientes e
robustas. Este trabalho tem como objetivo proporcionar a oportunidade de implementar,
testar e comparar métodos de ordenação distintos, aplicando os conceitos aprendidos na
disciplina de Algoritmo 1.

Objetivo do Trabalho
O principal objetivo deste trabalho é aplicar os conhecimentos sobre estruturas de dados e
algoritmos de ordenação. O aluno deverá:
1. Gerar um vetor (array) de números inteiros aleatórios.
2. Implementar dois algoritmos de ordenação distintos, à sua escolha.
3. Utilizar os algoritmos implementados para ordenar o vetor gerado em ordem crescente
e decrescente.

Especificações Técnicas
Para a realização deste trabalho, o grupo deve seguir as especificações abaixo:
1. Geração do Vetor:
– Crie um vetor de inteiros com um tamanho definido (sugestão: N = 1000
elementos). Você pode definir N como uma constante.
– Preencha este vetor com números inteiros aleatórios. Utilize a função rand()
para gerar os números.
– Os números aleatórios gerados devem estar em uma faixa razoável, por
exemplo, entre 0 e 9999.

2. Implementação dos Algoritmos de Ordenação:
– Escolha dois algoritmos de ordenação diferentes estudados em aula ou
pesquisados (exemplos: Bubble Sort, Selection Sort, Insertion Sort, Merge Sort,
Quick Sort, etc.).
– Implemente funções separadas para cada um dos algoritmos escolhidos.
– Cada função de ordenação deve ser capaz de ordenar o vetor tanto em ordem
crescente quanto em ordem decrescente. Isso pode ser feito, por exemplo,
passando um parâmetro adicional para a função indicando a ordem desejada
ou adaptando a lógica de comparação dentro do algoritmo.

3. Execução e Saída:
– No programa principal (main), após gerar o vetor aleatório, faça cópias do vetor
original para que cada algoritmo de ordenação (e cada ordem) opere sobre os
mesmos dados iniciais.
– Chame as funções dos dois algoritmos implementados para ordenar as cópias
do vetor:
• Algoritmo 1: Ordenação Crescente
• Algoritmo 1: Ordenação Decrescente
• Algoritmo 2: Ordenação Crescente
• Algoritmo 2: Ordenação Decrescente
– O programa deve exibir (de forma clara e organizada):
• O vetor original (ou pelo menos os primeiros e últimos N elementos, se
for muito grande, por exemplo, 20 primeiros e 20 últimos).
• O vetor ordenado crescentemente pelo Algoritmo 1.
• O vetor ordenado decrescentemente pelo Algoritmo 1.
• O vetor ordenado crescentemente pelo Algoritmo 2.
• O vetor ordenado decrescentemente pelo Algoritmo 2.
• Indique claramente qual algoritmo e qual ordem correspondem a cada
vetor exibido.

4. Código Fonte:
– O código deve ser bem estruturado, utilizando funções para modularizar as
tarefas (geração do vetor, impressão do vetor, algoritmos de ordenação).
– Inclua comentários no código para explicar as partes mais importantes,
especialmente a lógica dos algoritmos de ordenação e a escolha da ordem
(crescente/decrescente).
