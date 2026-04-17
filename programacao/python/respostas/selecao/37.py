ano = int(input("Digite o ano: "))

d = (ano + (ano - 1) // 4 - (ano - 1) // 100 + (ano - 1) // 400) % 7

if d == 0:
    print("Domingo")
elif d == 1:
    print("Segunda-feira")
elif d == 2:
    print("Terca-feira")
elif d == 3:
    print("Quarta-feira")
elif d == 4:
    print("Quinta-feira")
elif d == 5:
    print("Sexta-feira")
else:
    print("Sabado")
