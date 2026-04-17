diaria = float(input("Digite o valor da diaria: "))
dias = int(input("Digite o numero de dias: "))

if dias < 3:
    taxa = 20.0
elif dias < 7:
    taxa = 35.0
elif dias < 10:
    taxa = 40.0
else:
    taxa = 50.0

total = diaria * dias + taxa * dias
print(f"Total: {total:.2f}")
