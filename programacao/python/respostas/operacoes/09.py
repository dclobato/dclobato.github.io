consumo = float(input("Consumo do veiculo (km/l): "))
velocidade_media = float(input("Velocidade media (km/h): "))
tempo_viagem = float(input("Tempo de viagem (horas): "))

distancia = velocidade_media * tempo_viagem
litros_gastos = distancia / consumo

print(
    f"A quantidade de litros de combustivel gastos na viagem e {litros_gastos:.2f} litros"
)
