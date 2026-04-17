diaria = float(input("Digite o valor da diaria: "))
dias = int(input("Digite o numero de dias: "))

if dias <= 8:
    taxa = 8.0
else:
    taxa = 5.0

total = diaria * dias + taxa * dias
print(f"Total a pagar: {total:.2f}")
