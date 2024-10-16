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


origtext = 'mxlmx wx vbyktl ablmhkbvtl wt wblvbiebgt wx bgmkhwnvth t vkbimhzktybt'
key1 = input('Informe o tamanho da chave: ')
ciphertext = enc_substitution(int(key1), origtext)
plaintext = dec_substitution(int(key1), ciphertext)
print(origtext)
print(ciphertext)
print(plaintext)
