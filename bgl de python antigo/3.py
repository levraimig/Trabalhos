## Faça um Programa que leia 4 notas, mostre as notas e a média na tela.

lista_media = []
media = 0
cont = 0

lista_media.append(float(input('Digite a primeira media:')))
lista_media.append(float(input('Digite a segunda media:')))
lista_media.append(float(input('Digite a terceira media:')))
lista_media.append(float(input('Digite a quarta media:')))

for i in lista_media:
    media = i + media

media = media / len(lista_media)

while cont < len(lista_media):
    print('Media numero %d = %f' % (cont+1, lista_media[cont]))
    cont = cont + 1

print('A media das notas eh %f' % media)

