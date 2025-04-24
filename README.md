# notas-de-carlos
## Instruções:

Para executar o codigo Notas-de-carlos é necessário somente que o usuário digite o nome, a nota e a frequência de x alunos até que esteja satisfeito, de acordo com oque as intruções do código pedir. Quando o usuário estiver de acordo com todos os dados descritos ele pode digitar 0 para encerrar o recebimento de dados do usuário, logo após um relatório dos alunos vai surgir mostrando os dados do aluno: Nome, media, frequência, abaixo surge também os nomes dos alunos acima da média e aqueles com frequência abaixo de 75% 

## Lista de premissas assumidas

Para testes foram assumidas as premissas dos alunos: Pedro, João e Evelin em que o resultado esperado foi o mesmo do teste: 

Entrada: 

Digite o nome do aluno, (ou 0 para encerrar)
pedro
Agora digite as notas da disciplina:
Nota da disciplina 1
3
Nota da disciplina 2
4
Nota da disciplina 3
5
Nota da disciplina 4
6
Nota da disciplina 5
7
Digite agora a frequencia em %:
80
Digite o nome do aluno, (ou 0 para encerrar)
joão
Agora digite as notas da disciplina:
Nota da disciplina 1
1
Nota da disciplina 2
3
Nota da disciplina 3
9
Nota da disciplina 4
10
Nota da disciplina 5
2
Digite agora a frequencia em %:
50
Digite o nome do aluno, (ou 0 para encerrar)
evelin
Agora digite as notas da disciplina:
Nota da disciplina 1
9
Nota da disciplina 2
9
Nota da disciplina 3
10
Nota da disciplina 4
8
Nota da disciplina 5
9
Digite agora a frequencia em %:
100
Digite o nome do aluno, (ou 0 para encerrar)
0

Saida:
--- Relatório dos alunos ---
Aluno: pedro| Media do aluno: 5| Frequência: 80%
Aluno: joão| Media do aluno: 5| Frequência: 50%
Aluno: evelin| Media do aluno: 9| Frequência: 100%

Media da turma na disciplina 1: 4.33333
Media da turma na disciplina 2: 5.33333
Media da turma na disciplina 3: 8

Alunos acima da média em todas as disciplinas:
Evelin

Alunos com Frequência abaixo de 75% :
joão

## Decisões de Projeto

Para resolução do problema foi escolhido a metodólogia de structs e vetores por serem flexiveis quanto a tamanho e a entrada de dados, por esse motivo também foi escolhido a linguagem C++ por ser uma ferramenta que facilita a manipulação de struct e vetores 

## Oque mais você acha importante compartilhar sobre o projeto

O projeto cumpre oque foi prometido, o nodejs não foi utilizado pela falta de conhecimento previo e tempo mas foi possivel utilizar os codigos ANSI para deixar de forma mais bonita e organizada
