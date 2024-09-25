nomeArq = input("Digite o nome do arquivo")
arq = open(nomeArq, 'r+')

print("Escolha entre '1' - exiba o seu conteúdo na tela / '2' - acrescente a palvra 'Final' no fim do arquivo / '3' - deixe este arquivo sem conteúdo algum")
escolha = int(input())

if escolha == 1:
    words = [word.split(':')[0] for word in arq]
    print(words)
elif escolha == 2:
    arq = open(nomeArq, "a")
    arq.write("\nFinal")
elif escolha == 3:
    arq = open(nomeArq, 'w').close()





