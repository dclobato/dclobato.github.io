gib = float(input("Consumo de dados (GiB): "))

if gib <= 1.0:
    valor = 19.99
elif gib <= 3.0:
    valor = 19.99 + 24.99 * (gib - 1.0)
else:
    valor = 19.99 + 24.99 * 2.0 + 29.99 * (gib - 3.0)

print(f"Valor da conta: {valor:.2f}")
