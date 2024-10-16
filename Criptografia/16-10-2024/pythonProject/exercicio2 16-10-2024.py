key = 'abcdefghijklmnopqrstuvwxyz'
def enc_substitution(n, plaintext):
    result = ''
    for l in plaintext.lower():
        try:
            i = (key.index(l) + n) % 26
            result += key[i]
        except ValueError:
            result += l
    return result.lower()

def dec_substitution(n, ciphertext):
    result = ''
    for l in ciphertext:
        try:
            i = (key.index(l) - n) % 26
            result += key[i]
        except ValueError:
            result += l
    return result

origtext = input('Informe o texto a ser cifrado: ')
key1 = input('Informe o tamanho da chave: ')
ciphertext = enc_substitution(int(key1), origtext)
print(ciphertext)


##rot13

def enc_rot13(n, plaintextrot13):
    result = ''
    for l in plaintextrot13.lower():
        try:
            i = (key.index(l) + n) % 26
            result += key[i]
        except ValueError:
            result += l
    return result.lower()
def dec_rot13(n, ciphertextrot13):
    result = ''
    for l in ciphertextrot13:
        try:
            i = (key.index(l) - n) % 26
            result += key[i]
        except ValueError:
            result += l
    return result

origtextrot13 = ciphertext
ciphertextrot13 = enc_rot13(13, origtextrot13)
print(ciphertextrot13)

### ATBASH

def toAtBash(text):
    characters = list(text.upper())
    result = ""
    for character in characters:
        if character in code_dictionary:
            result += code_dictionary.get(character)
        else:
            result += character # preserve non-alpha chars found
    return result

alphabet = list('ABCDEFGHIJKLMNOPQRSTUVWXYZ')
reverse_alphabet = list(reversed(alphabet))
code_dictionary = dict(zip(alphabet, reverse_alphabet))
plainTextAtBash= ciphertextrot13
cipherTextAtBash = toAtBash(plainTextAtBash)
print(cipherTextAtBash)


### Desincriptografar
mig = input("Para desicriptografar digite:\n")
if mig == 'migloro':
    cipherTextAtBash = toAtBash(cipherTextAtBash)
    minusculo = cipherTextAtBash.lower()
    plaintextrot13 = dec_rot13(13, minusculo)
    plaintext = dec_substitution(int(key1), plaintextrot13)
    print(plaintext)




