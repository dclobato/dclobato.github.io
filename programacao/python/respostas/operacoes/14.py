import math

raio = float(input("Raio da base do cilindro (cm): "))
altura = float(input("Altura do cilindro (cm): "))
volume = math.pi * raio * raio * altura
print(f"A capacidade da lata cilindrica e {volume:.2f} cm^3")
