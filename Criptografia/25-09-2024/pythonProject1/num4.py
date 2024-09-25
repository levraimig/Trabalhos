import hashlib

nomes = input("Digite seus nomes")

print(nomes)

print(hashlib.sha256(nomes.encode()).hexdigest())