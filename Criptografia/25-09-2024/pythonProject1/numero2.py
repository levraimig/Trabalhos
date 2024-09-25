valores = []

while True:
    valor = int(input("Digite um valor ou 999 para parar"))

    if valor == 999:
        break

    valores.append(valor)

valores.sort()

print(valores)

