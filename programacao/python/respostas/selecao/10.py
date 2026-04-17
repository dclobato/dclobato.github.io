valor_hora = float(input("Digite o valor da hora: "))
horas = float(input("Digite o total de horas trabalhadas: "))

bruto = valor_hora * horas
transporte = bruto * 0.06

if bruto < 1000.0:
    desconto = 0.0
elif bruto > 5000.0:
    desconto = bruto * 0.27
else:
    desconto = bruto * 0.15

desconto = desconto + transporte
liquido = bruto - desconto

print(f"Bruto: {bruto:.2f}")
print(f"Descontos: {desconto:.2f}")
print(f"Liquido: {liquido:.2f}")
