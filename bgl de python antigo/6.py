cont_alunos = 0
media_alunos = []
alunos_maior = []
mediaa = 7

count = 0

while cont_alunos <= 9:  # pra cada um dos alunos
    cont = 0
    lista_notas = []

    while cont < 4:  # pra cada uma das notas de um aluno
        aluno1 = float(input('Digite a nota do aluno %d:' % (cont_alunos + 1)))
        cont = cont + 1
        lista_notas.append(aluno1)



    # computar a média depois q tem as 4 notas
    # adicionar a média a lista de médias
    media_alunos.append(sum(lista_notas) / len(lista_notas))
    cont_alunos = cont_alunos + 1
    if media_alunos[-1] >= mediaa:
        count += 1


print(media_alunos, count)