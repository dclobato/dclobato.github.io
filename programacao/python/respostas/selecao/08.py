saldo = float(input("Digite o saldo inicial: "))
valor = float(input("Digite o valor da operacao: "))

if valor < 0:
    if saldo + valor >= 0:
        print(f"Saldo final: {saldo + valor:.2f}")
    else:
        print("Saldo insuficiente")
else:
    print(f"Saldo final: {saldo + valor:.2f}")
