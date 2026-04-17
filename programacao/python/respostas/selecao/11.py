vendas = float(input("Digite o total de vendas: "))

if vendas >= 50000.0:
    comissao = vendas * 0.12
elif vendas > 30000.0:
    comissao = vendas * 0.095
else:
    comissao = vendas * 0.07

print(f"Comissao: {comissao:.2f}")
