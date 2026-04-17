import math

x1 = float(input("Latitude do primeiro ponto (graus): "))
y1 = float(input("Longitude do primeiro ponto (graus): "))
x2 = float(input("Latitude do segundo ponto (graus): "))
y2 = float(input("Longitude do segundo ponto (graus): "))

x1_rad = math.radians(x1)
y1_rad = math.radians(y1)
x2_rad = math.radians(x2)
y2_rad = math.radians(y2)

R = 6371.01
d = R * math.acos(
    math.sin(x1_rad) * math.sin(x2_rad)
    + math.cos(x1_rad) * math.cos(x2_rad) * math.cos(y1_rad - y2_rad)
)

print(f"A distancia entre os pontos e {d:.2f} km")
