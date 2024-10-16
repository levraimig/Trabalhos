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
for x in range(1, 27):
    ciphertext = enc_substitution(int(x), origtext)
    plaintext = dec_substitution(int(x), ciphertext)
    print("\n Tentativa:", x, "\n")
    print(ciphertext)
    print(plaintext)   
