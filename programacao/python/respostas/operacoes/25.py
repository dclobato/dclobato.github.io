total_eleitores = int(input("Total de eleitores: "))
votos_brancos = int(input("Total de votos brancos: "))
votos_nulos = int(input("Total de votos nulos: "))

percentual_brancos = votos_brancos / total_eleitores * 100
percentual_nulos = votos_nulos / total_eleitores * 100

print(f"Percentual de votos brancos: {percentual_brancos:.2f}%")
print(f"Percentual de votos nulos: {percentual_nulos:.2f}%")
