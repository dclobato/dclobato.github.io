import math

R = 6371.0
h = float(input("Altura do observador (metros): "))

h = h / 1000.0
d = math.sqrt(2 * h * R + h**2)

print(f"A distancia ate o horizonte e {d:.2f} km ({d * 1000:.0f} metros)")
