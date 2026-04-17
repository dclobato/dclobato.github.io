import math

distancia_km = float(input("Distancia (km): "))
frequencia_mhz = float(input("Frequencia (MHz): "))
fspl = 32.5 + 20 * math.log10(distancia_km) + 20 * math.log10(frequencia_mhz)
print(f"A perda no espaco livre e {fspl:.2f} dB")
