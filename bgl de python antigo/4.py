#Faça um Programa que leia um vetor de 10 caracteres, e diga quantas consoantes foram lidas. Imprima as consoantes.

consoantes = ['b', 'c', 'd','f','g','h','j','k','l','m','n','p','q','r','s','t','v','x','y','z']
letras = []
entra_consoantes = []
cont = 1

while cont <= 10:
    letras.append(str(input('Digite uma letra:')))
    cont = cont + 1

for i in letras:
    if i in consoantes:
        entra_consoantes.append(i)

if len(entra_consoantes) > 0:
    print(entra_consoantes)

else:
    print('Nenhuma consoante digitada')







