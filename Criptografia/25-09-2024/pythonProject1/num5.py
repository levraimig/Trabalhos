import hashlib

usuario = input("Digite seu usuario")

senha = input("Digite sua senha")

senha_hash = hashlib.sha512(senha.encode()).hexdigest()

with open('usuarios.txt', 'a') as arq:
    arq.write(f"{usuario},{senha_hash}\n")

print("Usuário e senha armazenados com sucesso!")


