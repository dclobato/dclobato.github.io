hdl = float(input("HDL (mg/dL): "))
ldl = float(input("LDL (mg/dL): "))

r = hdl / ldl

print(f"Razao HDL/LDL: {r:.1f}")

if r >= 0.4:
    print("Risco cardiovascular baixo")
elif r > 0.3:
    print("Risco cardiovascular moderado")
else:
    print("Risco cardiovascular elevado")
