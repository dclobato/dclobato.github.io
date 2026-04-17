n = int(input("Numero inteiro positivo n: "))
inicio = n * n - (n - 1)

print(f"Os {n} numeros impares consecutivos cuja soma e {n}^3:")
for i in range(n):
    print(inicio + 2 * i, end=" ")
print()
