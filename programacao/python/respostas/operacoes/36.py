valor_tipo1 = float(input("Valor do reembolso para cada garrafa do tipo 1: "))
valor_tipo2 = float(input("Valor do reembolso para cada garrafa do tipo 2: "))
qtd_tipo1 = int(input("Quantidade de garrafas do tipo 1: "))
qtd_tipo2 = int(input("Quantidade de garrafas do tipo 2: "))

total = valor_tipo1 * qtd_tipo1 + valor_tipo2 * qtd_tipo2
print(f"O total do reembolso e R$ {total:.2f}")
