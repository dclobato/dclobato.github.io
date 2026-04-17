bandeirada = float(input("Valor da bandeirada: "))
valor_por_250m = float(input("Valor a cada 250m: "))
distancia_km = float(input("Distancia percorrida (km): "))

total = bandeirada + (distancia_km * 1000 / 250) * valor_por_250m
print(f"O valor total da corrida e R$ {total:.2f}")
