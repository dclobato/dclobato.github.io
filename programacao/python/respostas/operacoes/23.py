preco_cobre = float(input("Preco do kg de cobre (R$): "))
preco_zinco = float(input("Preco do kg de zinco (R$): "))
massa_latao = float(input("Massa total de latao desejada (kg): "))

massa_cobre = massa_latao * 0.70
massa_zinco = massa_latao * 0.30
custo_total = massa_cobre * preco_cobre + massa_zinco * preco_zinco

print(f"Para produzir {massa_latao:.2f} kg de latao, serao necessarios:")
print(f" - {massa_cobre:.2f} kg de cobre")
print(f" - {massa_zinco:.2f} kg de zinco")
print(f"Custo total da producao: R$ {custo_total:.2f}")
