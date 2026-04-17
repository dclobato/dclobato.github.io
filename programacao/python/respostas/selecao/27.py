vp = float(input("Valor a investir: "))
taxa1 = float(input("Taxa 1 (% ao periodo): "))
prazo1 = float(input("Prazo 1: "))
taxa2 = float(input("Taxa 2 (% ao periodo): "))
prazo2 = float(input("Prazo 2: "))

vf1 = vp * (1 + taxa1 / 100.0) ** prazo1
vf2 = vp * (1 + taxa2 / 100.0) ** prazo2

print(f"Aplicacao 1: {vf1:.2f}")
print(f"Aplicacao 2: {vf2:.2f}")

if vf1 > vf2:
    print("Aplicacao 1 e melhor")
else:
    print("Aplicacao 2 e melhor")
