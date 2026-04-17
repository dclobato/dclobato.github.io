saldo = float(input("Digite o saldo: "))

if saldo <= 200.0:
    print("Nenhum credito")
elif saldo <= 1000.0:
    credito = saldo * 0.20
    print(f"Credito: {credito:.2f}")
elif saldo <= 2000.0:
    credito = saldo * 0.30
    print(f"Credito: {credito:.2f}")
elif saldo <= 10000.0:
    credito = saldo * 0.50
    print(f"Credito: {credito:.2f}")
else:
    credito = saldo * 1.0
    print(f"Credito: {credito:.2f}")
