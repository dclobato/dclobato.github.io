import math

N = int(input("Numero de lados do poligono: "))
R = float(input("Raio da circunferencia: "))

p = 2 * N * R * math.sin(math.pi / N)

print(f"O perimetro do poligono regular e {p:.2f}")
