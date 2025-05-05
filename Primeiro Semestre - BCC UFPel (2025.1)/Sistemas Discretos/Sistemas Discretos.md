## Lógica 2.1

- O texto que segue é centrado em lógica booleana. Entende-se por *lógica booleana* ou *lógica de Boole* o estudo dos princípios e métodos usados para distinguir sentenças verdadeiras de falsas. [George Boole](https://pt.wikipedia.org/wiki/George_Boole) (inglês, 1815-1864) foi um dos precursores do estudo da lógica.
## 2.1.1 Proposições

##### Definição 2.1 – Proposição:
- Uma proposição é uma construção (sentença, frase, pensamento) à qual pode atribuir juízo. No caso da *lógica matemática*, o tipo de juízo é o **verdadeiro-falso**, ou seja, o interesse é na “verdade” das proposições.

- Em lógica matemática, a forma tradicional de tratar a “verdade” é considerar dois valores verdade **V** e **F** (verdadeiro e falso, respectivamente) e estipular que as proposições só podem assumir esses dois valores. Para uma dada proposição **p**, denota-se por: 
- **V(p)**
- o valor verdade de **p**.
##### Exemplo 2.1 – Proposição
**[A]** São exemplos de proposições:
- Brasil é um país
- Buenos Aires é a capital do Brasil
- 3 + 4 > 5
- 7 - 1 = 5

Para cada uma dessas proposições, o valor-verdade é como segue:
- **V**(Brasil é um país) – **V**
- **V**(Buenos Aires é a capital do Brasil) – **F**
- **V**(3 + 4 > 5) – **V**
- **V**(7 - 1 = 5) – **F**

**[B]** Não são exemplos de proposições:
- Vá tomar banho.
- Que horas são?
- Parabéns!

##### Definição (2):
- **Proposições** são sentenças ou frases declarativas às quais se pode atribuir juízo
- No caso da Lógica Formal, o tipo de juízo é o **valor verdade**, isto é, valor **verdadeiro** ou **falso**.

- **Nota**:
  As sentenças declarativas são sentenças que dão algum tipo de informação que nos possibilita atribuir um valor verdade (**V** ou  **F**).
#### Considere as sentenças a seguir, quais são proposições?
- <mark style="background: #BBFABBA6;">Brasil é um país e fica no hemisfério sul.</mark>
- <mark style="background: #BBFABBA6;">Oito é maior que dez.</mark>
- <mark style="background: #FF5582A6;">Como você está?</mark>
- <mark style="background: #BBFABBA6;">Pedro não participou do campeonato.</mark>
- <mark style="background: #FF5582A6;">Fique parado!</mark>
- <mark style="background: #BBFABBA6;">Existe vida inteligente em outros planetas.</mark>
- <mark style="background: #BBFABBA6;">Hoje está chovendo.</mark>
- <mark style="background: #FF5582A6;">Pássaros lindos.</mark>
#### As proposições podem ser de dois tipos:
1. Atômicas
2. Compostas

- <mark style="background: #FFB86CA6;">Proposições atômicas</mark> **NÃO** podem ser obtidas como combinações de outras proposições. Exemplo:

  - Oito é maior do que dez.
  - Existe vida inteligente em outros planetas.
  
  Essas duas sentenças não podem ser divididas em outras proposições, ou seja, são proposições atômicas e não são combinações e outras.

- <mark style="background: #FFB86CA6;">Proposições compostas</mark> são obtidas pela combinação de outras proposições usando conectivos lógicos (**não**, **e**, **ou**, **se … então**, **se** e **somente se**). Exemplo:

  - Pedro **não** participou do campeonato.
  - Brasil é um país **e** fica no hemisfério sul.
  
  Por mais que o primeiro exemplo não seja composto por duas sentenças, existe o conectivo de negação. Sendo assim, se transforma numa preposição composta (passa a ser a negação de uma proposição).
  
  O segundo exemplo é uma combinação de duas proposições usando o conectivo lógico **e**, sendo *“Brasil é um país”* e *”Fica no hemisfério sul”* duas proposições.


## 2.1.2 Conetivos

- As proposições introduzidas até o momento são ditas *proposições atômicas* ou simplesmente *átomos*, no sentido em que não podem ser decompostas em proposições mais simples.

- Entretanto, é possível construir proposições mais complexas compondo proposições, usando *operadores lógicos*, também denominados de conectivos/conectivos (lógicos).
##### Exemplo 2.2 – Proposições Compostas
Nas seguintes proposições (compostas), os conetivos lógicos estão representados em negrito:
- **[A]** Windows é um sistema operacional, **e** Pascal é uma linguagem de programação;
- **[B]** Vou comprar um PC **ou** um Mac;
- **[C]** Linux **não** é um *software* livre;
- **[D]** **Se** choverem canivetes, **então** todos os alunos estarão aprovados em matemática discreta;
- **[E]** A = B **se e somente se** (A ⊆ B **e** B ⊆ A).

- Claramente, proposições compostas podem ser usadas para construir novas proposições compostas, como no caso do último item no **Exemplo 2.2 – Proposições Compostas.** O mesmo exemplo ilustra cinco conetivos que serão estudados (**e**, **ou**, **não**, **se … então** e **se-somente se**).

#### ■ Negação
- Já foi visto que uma dada proposição **p** ou é **verdadeira** ou é **falsa**. A *negação*de uma proposição é construída, introduzindo-se a palavra *não* de forma apropriada ou prefixando-se a proposição por “não é fato que” (ou expressão equivalente).
##### Exemplo 2.3 – Negação
Considere as seguintes proposições:
- Brasil é um país;
- Linux é um *software* livre;
- 3 + 4 > 5.

A negação dessas preposições é como segue, respectivamente:
- Brasil **não** é um país;
- Linux **não** é um *software* livre;
- **Não é fato que** 3 + 4 > 5.

Se **p** denota uma proposição, então a negação de **p** é denotada por:
- **¬p** ou **∼p**
a qual é lida como:
- “não **p**”
sendo interpretada como segue:
■ se **p** é **verdadeira**, então **¬p** é **falsa**;
■ se **p** é **falsa**, então **¬p** é **verdadeira**.

Uma *tabela-verdade* é uma tabela que descreve os valores lógicos de uma proposição em termos de possíveis combinações dos valores lógicos das proposições componentes e dos conetivos usados. Assim, para cada combinação de valores-verdade e de conetivos, a tabela-verdade fornece o valor-verdade da expressão resultante.

##### Definição 2.2 – Negação
- Dada uma proposição lógica **p**, a semântica da *Negação* **¬p** é dada pela tabela-verdade ilustrada na figura 2.1.

| **p** | **¬p** |
| ----- | ------ |
| **V** | **F**  |
| **F** | **V**  |
##### Figura 2.1 – Tabela-verdade: **negação**

#### ■ Conjunção
 A conjunção de duas proposições **p** e **q**, denota por:
- **p** ^ **q**
 a qual é lida:
- “**p** e **q**”
 reflete uma noção de simultaneidade para ser **verdadeira**. Assim, a proposição composta **p** ^ **q** é:
 ■ **verdadeira**, apenas quando **p** e **q** são simultaneamente **verdadeiras**;
 ■ **falsa**, em qualquer outro caso.
##### Definição 2.3 – Conjunção
- Dadas duas proposições lógicas **p** e **q**, a semântica da *Conjunção* **p** ^ **q** é dada pela tabela-verdade ilustrada na figura 2.2.

| **p** | **q** | **p ^q** |
| ----- | ----- | -------- |
| **V** | **V** | **V**    |
| **V** | **F** | **F**    |
| **F** | **V** | **F**    |
| **F** | **F** | **F**    |
##### Figura 2.2 – Tabela-verdade: **conjunção**

Relativamente à tabela-verdade da conjunção ilustrada na figura 2.2, observe que, para expressar todas as combinações possíveis de valores lógicos das proposições **p** e **q**, foram necessárias quatro linhas (quantas linhas seriam necessárias para expressar a combinação de todos os valores lógicos possíveis de **n** proposições?).
##### Exemplo 2.4 – Negação
Sugere-se observar a tabela ilustrada na figura 2.2, durante a leitura deste exemplo, procurando justificar por que a proposição composta, em cada um dos itens abaixo, é **verdadeira** ou **falsa**:
- **[A]** **Verdadeira**: Windows é um sistema operacional, **e** Pascal é uma linguagem de programação;
- **[B]** **Falsa**: Windows é um sistema operacional, **e** Pascal é uma planilha eletrônica;
- **[C]** **Falsa**: Windows é um editor de textos, **e** Pascal é uma linguagem de programação;
- **[D]** **Falsa**: Windows é um editor de textos, **e** Pascal é uma planilha eletrônica.

#### ■ Disjunção
A disjunção de duas proposições **p** e **q**, denotada por:
- **p** v **q**
a qual é lida:
- “**p** v **q**”
reflete a noção de que pelo menos uma (eventualmente duas) das proposições componentes deve ocorrer para que a resultante seja **verdadeira**. Assim, a proposição composta **p** v **q** é:
■ **verdadeira**, quando pelo menos uma das proposições é **verdadeira**;
■ **falsa**, somente quando simultaneamente **p** e **q** são **falsas**.
##### Definição 2.4 – Disjunção
Dadas duas proposições lógicas **p** e **q**, a semântica da *Disjunção* **p** v **q** é dada pela tabela-verdade ilustrada na figura 2.3.

| **p** | **q** | **p** v **q** |
| ----- | ----- | ------------- |
| **V** | **V** | **F**         |
| **V** | **F** | **V**         |
| **F** | **V** | **V**         |
| **F** | **F** | **F**         |
##### Figura 2.3 – Tabela-verdade: **disjunção**

##### Exemplo 2.5 – Disjunção
Sugere-se observar a tabela ilustrada na figura 2.3. durante a leitura deste exemplo, procurando justificar por que a proposição composta, em casa um dos itens abaixo, é **verdadeira** ou **falsa**:
- **[A]** **Verdadeira**: Windows é um sistema operacional **ou** Pascal é uma linguagem de programação;
- **[B]** **Verdadeira**: Windows é um sistema operacional **ou** Pascal é uma planilha eletrônica;
- **[C]** **Verdadeira**: Windows é um editor de textos **ou** Pascal é uma linguagem de programação;
- **[D]** **Falsa**: Windows é um editor de textos **ou** Pascal é uma planilha eletrônica.

#### ■ Condição
A condição envolvendo duas proposições **p** e **q**, denotada por:
- **p** → **q**
a qual é lida
 - “se **p** então **q**”
reflete a noção de que, a partir de uma *premissa* **verdadeira** (ou seja, **p** é **verdadeira**), obrigatoriamente deve-se chegar a uma *conclusão* **verdadeira** (ou seja, **q** é **verdadeira**), para que a proposição composta **p** → **q** seja **verdadeira**. Entretanto, partindo de uma premissa **falsa**, qualquer conclusão pode ser considerada. Assim, a proposição composta **p** → **q** é:
■ **falsa**, quando **p** é verdadeira e **q** é **falsa**;
■ **verdadeira**, caso contrário.
##### Definição 2.5 – Condição
Dada duas proposições lógicas **p** e **q**, a semântica da *Condição* **p** → **q** é dada pela tabela-verdade ilustrada na figura 2.4.

| **p** | **q** | **p** → **q** |
| ----- | ----- | ------------- |
| **V** | **V** | **V**         |
| **V** | **F** | **F**         |
| **F** | **V** | **V**         |
| **F** | **F** | **V**         |
##### Figura 2.4 – Tabela-verdade: **condição**

##### Exemplo 2.6 – Condição
Sugere-se observar a tabela ilustrada na figura 2.4, durante a leitura deste exemplo, procurando justificar por que a proposição composta, em cada um dos itens abaixo, é **verdadeira** ou **falsa**:
- **[A]** **Verdadeira**: **se** Windows é um sistema operacional, **então** Pascal é uma linguagem de programação;
- **[B]** **Falsa**: **se** Windows é um sistema operacional, **então** Pascal é uma planilha eletrônica;
- **[C]** **Verdadeira**: **se** Windows é um editor de textos, **então** Pascal é uma linguagem de programação;
- **[A]** **Verdadeira**: **se** Windows é um editor de textos, **então** Pascal é uma planilha eletrônica.

#### ■ Bicondição
A bicondição envolvendo duas proposições **p** e **q**, denotada por:
- **p** <-> **q**
a qual é lida
- “**p** se e somente se **q**”
reflete a noção de condição “nos dois sentidos”, ou seja, considera simultaneamente:
■ sentido de “ida”: **p** é premissa e **q** é conclusão;
■ sentido de “volta”: **q** é premissa e **p** é conclusão.

Portanto, considerando a noção de condição já introduzida e considerando que esta é “nos dois sentidos”, a proposição composta **p** <-> **q** é:
■ **verdadeira**, quando **p** e **q** são ambas **verdadeiras** ou ambas **falsas**;
■ **falsa**, somente quando as proposições **p** e **q** possuem valores verdade distintos.

##### Definição 2.6 – Bicondição
Sugere-se observar a tabela ilustrada na figura 2.5, durante a leitura deste exemplo, procurando justificar por que a proposição composta, em cada um dos itens abaixo, é **verdadeira** ou **falsa**:
- **[A]** **Verdadeira**: Windows é um sistema operacional **se e somente se** Pascal é uma linguagem de programação;
- **[B]** **Falsa**: Windows é um sistema operacional **se e somente se** Pascal é uma planilha eletrônica;
- **[C]** **Falsa**: Windows é um editor de textos **se e somente se** Pascal é uma linguagem de programação;
- **[A]** **Verdadeira**: Windows é um editor de textos **se e somente se** Pascal é uma planilha eletrônica.
