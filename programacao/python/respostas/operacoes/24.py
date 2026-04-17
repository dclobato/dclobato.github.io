import math

largura = float(input("Largura do terreno (m): "))
profundidade = float(input("Profundidade do terreno (m): "))

diagonal = math.sqrt(largura**2 + profundidade**2)

print(
    f"A maior distancia que pode ser percorrida em linha reta e {diagonal:.2f} metros"
)
