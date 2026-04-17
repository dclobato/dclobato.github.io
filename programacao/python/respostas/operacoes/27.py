custo_plasticos_biodegradaveis = float(input("Custo com plasticos biodegradaveis: "))
custo_metais_reciclados = float(input("Custo com metais reciclados: "))
custo_plasticos_nao_reciclaveis = float(input("Custo com plasticos nao reciclaveis: "))
custo_metais_nao_reciclados = float(input("Custo com metais nao reciclados: "))

custo_total = (
    custo_plasticos_biodegradaveis
    + custo_metais_reciclados
    + custo_plasticos_nao_reciclaveis
    + custo_metais_nao_reciclados
)

preco_final = custo_total * 1.45
preco_venda = preco_final * 1.08

print(f"Preco final do veiculo: R$ {preco_final:.2f}")
print(f"Preco de venda para 8% de lucro: R$ {preco_venda:.2f}")
