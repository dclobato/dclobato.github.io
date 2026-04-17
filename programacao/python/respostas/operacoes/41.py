n = int(input("Valor de n: "))
j = int(input("Valor de j: "))
m = int(input("Valor de m: "))

print(f"Os {n} primeiros naturais congruentes a {j} modulo {m}:")
for i in range(n):
    print(j + i * m, end=" ")
print()
