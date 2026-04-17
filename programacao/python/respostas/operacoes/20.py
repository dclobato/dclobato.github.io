R1 = float(input("Raio do primeiro cabo (mm): "))
R2 = float(input("Raio do segundo cabo (mm): "))

D_min = 2 * R1 + 2 * R2
D_final = 1.1 * D_min

print(f"O menor diametro do conduite necessario e {D_final:.2f} mm")
