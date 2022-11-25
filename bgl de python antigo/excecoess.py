barras = int(input('digite quantas barra de chocolate fvoce tem:'))
pessoas = int(input('digite com quantas pessoas voce quer dividir:'))

#tratamento de excecoes

try: #tenta rodar o codigo
    print('darao {} pedaços por pessoa'.format(barras/pessoas))
except:
    print('essa pessoa eh bem egoista!')