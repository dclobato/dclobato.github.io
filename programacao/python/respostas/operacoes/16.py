numero = int(input("Qual numero, entre 0 e 999? "))

unidade = numero % 10
dezena = (numero // 10) % 10
centena = (numero // 100) % 10

inverso = unidade * 100 + dezena * 10 + centena

print(f"O numero invertido eh {inverso}")
