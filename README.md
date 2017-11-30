# programming-laboratory-work

#Trabalho Final

Crie uma estrutura para representar os dados de um aluno, com matrícula de tipo inteiro, nome de tipo string, endereço do tipo string, data de nascimento de tipo data e um vetor de disciplinas do tipo disciplina. O tipo data deve ser definido como uma estrutura com os membros dia, mês e ano de tipo inteiro. O tipo disciplina também deve ser definido como uma estrutura com nome do tipo string, professor do tipo string e notas como sendo um vetor de 3 floats para armazenar as notas do aluno naquela disciplina. Com essa estrutura faça as seguintes operações:

a. Crie um vetor de 20 posições para armazenar o cadastro de alunos da Universidade Aberta do Piauí.

b. Crie uma variável chamada fim que demarcará a última posição atualmente preenchida em seu cadastro de alunos.

c. Preencha os dados de 5 alunos automaticamente via comandos, para que seja possível testar todas as funções mesmo sem cadastrar manualmente alguns alunos.

d. Faça com que o programa apresente um menu através de uma função onde o usuário possa escolher entre as funções de cadastrar aluno, excluir aluno, alterar aluno, buscar aluno, listar todos os aluno, listar aluno de determinada disciplina, listar alunos aprovados e sair. Cada funcionalidade deve ser feita como uma função em separado.

i. O usuário deverá poder escolher qualquer das opções qualquer quantidade de vezes. Somente ao escolher a opção sair o programa deve ser finalizado.

e. Quando a opção cadastrar aluno for escolhida, leia todos os dados de um aluno e o inclua na primeira posição livre do vetor. A variável fim deve ser aumentada de um i. Se já houverem vinte alunos cadastrados (limite do nosso vetor), o programa deverá mostrar a mensagem “Impossível cadastrar. Vetor cheio”.

f. Quando a opção excluir aluno for escolhida, o programa deverá solicitar a posição que o usuário deseja excluir. Caso a opção esteja preenchida com um aluno no vetor, todos os elementos, a partir daquela posição para frente devem ser “puxados” uma posição para trás, para refletir a exclusão. A variável fim deve ser reduzida de um. Caso contrário, deverá ser exibida a mensagem “Impossível excluir. Posição inválida”.

g. Quando a opção alterar aluno for escolhida, o usuário deverá escolher a posição a alterar. Caso esta posição esteja preenchida com os dados de um aluno, o programa deverá mostrar os dados atuais e pedir para o usuário digitar novamente todos os dados para aquele aluno. Caso contrário, deverá mostrar a mensagem “Impossível alterar. Posição não preenchida”.

h. Quando a opção buscar aluno for escolhida, o programa deverá solicitar ao usuário o nome a procurar. Após isso, o programa irá buscar, entre os aluno cadastrados, um com nome procurado (ou parte dele). Caso encontre, deverá mostrar todos os dados desse aluno. Caso contrário, deverá exibir a mensagem “Aluno não encontrado”.

i. Quando a opção listar todos os alunos for selecionada, o programa deve exibir todos os dados de todos os aluno cadastrados até o momento. Se nenhum funcionário estiver cadastrado, deverá exibir a mensagem “Nenhum funcionário cadastrado”.

j. Quando a opção listar alunos de determinada disciplina for selecionada, o programa deve solicitar ao usuário o nome de uma disciplina e procurar e mostrar, entre os alunos cadastrados, os que estejam naquela disciplina. Liste todos os alunos com as respectivas notas, médias e resultados finais (AM para média >= 7, EF para 7 > média >= 4 e RN para média < 4). Caso não encontre nenhum mostrar a mensagem “Nenhum aluno encontrado para a disciplina procurada”.

k. Quando a opção listar alunos aprovados, o programa deverá procurar os alunos cadastrados que possuem como média (soma das 3 notas na disciplina dividida por 3) um valor maior ou igual a 7. Caso não seja encontrado nenhum aluno, mostrar a seguinte mensagem: “Nenhum aluno aprovado encontrado”.

l. Quando a opção sair for escolhida, o programa deverá finalizar.
