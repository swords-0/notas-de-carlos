# notas-de-carlos
## Instruções:

Para executar o codigo Notas-de-carlos é necessário somente que o usuário digite o nome, a nota e a frequência de x alunos até que esteja satisfeito, de acordo com oque as intruções do código pedir. Quando o usuário estiver de acordo com todos os dados descritos ele pode digitar 0 para encerrar o recebimento de dados do usuário, logo após um relatório dos alunos vai surgir mostrando os dados do aluno: Nome, media, frequência, abaixo surge também os nomes dos alunos acima da média e aqueles com frequência abaixo de 75% 

## Lista de premissas assumidas

Para testes foram assumidas as premissas dos alunos: Pedro, João e Evelin em que o resultado esperado foi o mesmo do teste: 

Entrada: 

Digite o nome do aluno, (ou 0 para encerrar)<br>
pedro<br>
Agora digite as notas da disciplina:<br>
Nota da disciplina 1<br>
3<br>
Nota da disciplina 2<br>
4<br>
Nota da disciplina 3<br>
5<br>
Nota da disciplina 4<br>
6<br>
Nota da disciplina 5<br>
7<br>
Digite agora a frequencia em %:<br>
80<br>
Digite o nome do aluno, (ou 0 para encerrar)<br>
joão<br>
Agora digite as notas da disciplina:<br>
Nota da disciplina 1<br>
1<br>
Nota da disciplina 2<br>
3<br>
Nota da disciplina 3<br>
9<br>
Nota da disciplina 4<br>
10<br>
Nota da disciplina 5<br>
2<br>
Digite agora a frequencia em %:<br>
50<br>
Digite o nome do aluno, (ou 0 para encerrar)<br>
evelin<br>
Agora digite as notas da disciplina:<br>
Nota da disciplina 1<br>
9<br>
Nota da disciplina 2<br>
9<br>
Nota da disciplina 3<br>
10<br>
Nota da disciplina 4<br>
8<br>
Nota da disciplina 5<br>
9<br>
Digite agora a frequencia em %:<br>
100<br>
Digite o nome do aluno, (ou 0 para encerrar)<br>
0<br>

Saida:
--- Relatório dos alunos ---
Aluno: pedro| Media do aluno: 5| Frequência: 80%<br>
Aluno: joão| Media do aluno: 5| Frequência: 50%<br>
Aluno: evelin| Media do aluno: 9| Frequência: 100%<br>

Media da turma na disciplina 1: 4.33333<br>
Media da turma na disciplina 2: 5.33333<br>
Media da turma na disciplina 3: 8<br>

Alunos acima da média em todas as disciplinas:<br>
Evelin<br>

Alunos com Frequência abaixo de 75% :<br>
joão<br>

## Decisões de Projeto

Para resolução do problema foi escolhido a metodólogia de structs e vetores por serem flexiveis quanto a tamanho e a entrada de dados, por esse motivo também foi escolhido a linguagem C++ por ser uma ferramenta que facilita a manipulação de struct e vetores 

## Oque mais você acha importante compartilhar sobre o projeto

O projeto cumpre oque foi prometido, o reactjs não foi utilizado pela falta de conhecimento previo e tempo mas foi possivel utilizar os codigos ANSI para deixar de forma mais bonita e organizada
