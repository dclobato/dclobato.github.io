preco_parafusos = float(input("Preco dos parafusos: "))
preco_porcas = float(input("Preco das porcas: "))
preco_arruelas = float(input("Preco das arruelas: "))
qtd_parafusos = int(input("Quantidade de parafusos: "))
qtd_porcas = int(input("Quantidade de porcas: "))
qtd_arruelas = int(input("Quantidade de arruelas: "))
total = (
    preco_parafusos * qtd_parafusos * 0.90
    + preco_porcas * qtd_porcas * 0.80
    + preco_arruelas * qtd_arruelas * 0.70
)
print(f"O total a ser pago e R$ {total:.2f}")
