numeros_inteiros = []
cont1 = 0
numeros_pares = []
numeros_impar = []


while cont1 <= 19:
    numeros_inteiros.append(int(input('Digite os numeros inteiros')))
    cont1 = cont1 + 1



for i in numeros_inteiros:
    if (i%2) == 0:
        numeros_pares.append(i)
    else:
        numeros_impar.append(i)


print('Os numeros digitados foram:' , numeros_inteiros)
print('Os numeros pares sao:', numeros_pares)
print('Os numeros impares sao:', numeros_impar)
