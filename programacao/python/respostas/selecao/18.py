salario = float(input("Digite o salario atual: "))

if salario >= 10000.0:
    reajuste = salario * 0.03
elif salario >= 5000.0:
    reajuste = salario * 0.06
else:
    reajuste = salario * 0.10

novo_salario = salario + reajuste

print(f"Salario atual: {salario:.2f}")
print(f"Reajuste: {reajuste:.2f}")
print(f"Novo salario: {novo_salario:.2f}")
