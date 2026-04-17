import math

a = float(input("Digite a: "))
b = float(input("Digite b: "))
c = float(input("Digite c: "))

delta = b * b - 4 * a * c

if delta < 0:
    print("Nao ha raizes reais")
elif delta == 0:
    r1 = -b / (2 * a)
    print(f"Raiz unica: {r1:.2f}")
else:
    r1 = (-b + math.sqrt(delta)) / (2 * a)
    r2 = (-b - math.sqrt(delta)) / (2 * a)
    print(f"Raiz 1: {r1:.2f}")
    print(f"Raiz 2: {r2:.2f}")
