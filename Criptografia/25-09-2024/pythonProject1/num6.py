import hashlib

nomeArq = open('dictionary.txt', 'r').read()
hash = hashlib.md5(nomeArq.encode()).hexdigest()
with open('dictionaryMD5.txt', 'a') as Arq:
    Arq.write(f"{hash}\n")