salario = float(input("Digite o salario bruto: "))

if salario <= 1903.98:
    irrf = 0.0
elif salario <= 2826.65:
    irrf = salario * 0.075 - 142.80
elif salario <= 3751.05:
    irrf = salario * 0.15 - 354.80
elif salario <= 4664.68:
    irrf = salario * 0.225 - 636.13
else:
    irrf = salario * 0.275 - 869.36

print(f"IRRF: {irrf:.2f}")
