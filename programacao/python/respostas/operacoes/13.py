horas = float(input("Quantas horas foram trabalhadas? "))
valor_hora = float(input("Valor de cada hora trabalhada? "))
percentual_desconto = float(input("Percentual de desconto (sem o %%)? "))

bruto = horas * valor_hora
desconto = bruto * percentual_desconto / 100
liquido = bruto - desconto

print(f"Salario bruto..... R$ {bruto:10.2f}")
print(f"Total de descontos R$ {desconto:10.2f}")
print(f"Salario liquido... R$ {liquido:10.2f}")
