dist = float(input("Distancia a percorrer (km): "))
consumog = float(input("Consumo com gasolina (km/l): "))
consumoe = float(input("Consumo com etanol (km/l): "))
precog = float(input("Preco da gasolina (R$): "))
precoe = float(input("Preco do etanol (R$): "))

custog = (dist / consumog) * precog
custoe = (dist / consumoe) * precoe

if custog < custoe:
    print("Gasolina e mais vantajosa")
    print(f"Custo: {custog:.2f}")
else:
    print("Etanol e mais vantajoso")
    print(f"Custo: {custoe:.2f}")
