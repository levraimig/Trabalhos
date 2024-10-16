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
plainTextAtBash= 'Consideramos que essas verdades são evidentes por si mesmas'
cipherTextAtBash = toAtBash(plainTextAtBash)
cipherTextAtBash = toAtBash(cipherTextAtBash)
print(plainTextAtBash)
print(cipherTextAtBash)