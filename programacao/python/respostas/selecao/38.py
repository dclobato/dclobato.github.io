import random

num = random.randint(0, 36)
vermelhos = [1, 3, 5, 7, 9, 12, 14, 16, 18, 19, 21, 23, 25, 27, 30, 32, 34, 36]

print(f"Gira roleta, gira roleta... {num}!\n")
print("Ganhou quem apostou:")

if num == 0:
    print("  - A banca vence!")
else:
    print(f"  - {num}")

    if num in vermelhos:
        print("  - Vermelho")
    else:
        print("  - Preto")

    if num % 2 == 1:
        print("  - Impar")
    else:
        print("  - Par")

    if 1 <= num <= 18:
        print("  - 1 a 18")
    else:
        print("  - 19 a 36")
