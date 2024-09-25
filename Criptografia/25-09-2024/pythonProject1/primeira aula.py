import hashlib

tu = (23, 'abc', 4.56, (2,3), 'def')
print(tu[1]) # Segundo elemento na tupla
'abc'

li = ["abc", 34, 4.34, 23]
print(li[1]) # Segundo elemento na lista
34

st = "Hello World"
print(st[1]) # Segundo caractere na String
'e'

t = (23, 'abc', 3.14, (2,3), 'def')
print(t[1]) # Segundo elemento na tupla
'abc'

print(t[-3]) # Terceiro elemento da direita para a esquerda
3.14

print(t[1:4])# Range compreendido entre as posições 1 e 4
print(('abc', 3.14, (2, 3)))

print(t[:]) # Todo o conteúdo da Tupla
(23, 'abc', 3.14, (2, 3), 'def')


print(hashlib.md5('hello word'.encode()).hexdigest())

print(hashlib.sha512('hello word'.encode()).hexdigest())
