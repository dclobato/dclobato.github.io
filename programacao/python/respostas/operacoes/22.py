a = int(input("Valor de A: "))
b = int(input("Valor de B: "))
print(f"Valores originais: A = {a}, B = {b}")
a, b = b, a
print(f"Valores trocados: A = {a}, B = {b}")
