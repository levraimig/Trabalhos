v = (1, 2, 3, 4, 5, 6, 7, 8, 9, 10)
i = len(v) - 1
outra_lista = []

while i >= 0:
   x = v[i]
   outra_lista.append(x)
   i = i - 1

print(outra_lista)