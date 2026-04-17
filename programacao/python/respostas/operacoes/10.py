distancia_km = float(input("Distancia percorrida (km): "))
tempo_minutos = float(input("Tempo necessario (minutos): "))
velocidade_ms = (distancia_km * 1000) / (tempo_minutos * 60)
print(f"A velocidade media e {velocidade_ms:.2f} m/s")
