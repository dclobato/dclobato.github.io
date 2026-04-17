Vin = float(input("Tensao de entrada (Vin): "))
Vout = float(input("Tensao de saida desejada (Vout): "))

relacao = (Vin - Vout) / Vout

print(f"A relacao entre R1 e R2 para o divisor de tensao e {relacao:.2f}")
