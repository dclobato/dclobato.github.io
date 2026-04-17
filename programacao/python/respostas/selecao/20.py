import random

usuario = int(input("Digite 1 (papel), 2 (pedra) ou 3 (tesoura): "))
computador = random.randint(1, 3)

print(f"Computador escolheu: {computador}")

if usuario == computador:
    print("Empate")
elif (
    (usuario == 1 and computador == 2)
    or (usuario == 2 and computador == 3)
    or (usuario == 3 and computador == 1)
):
    print("Voce venceu")
else:
    print("Computador venceu")
