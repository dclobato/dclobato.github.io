triglicerideos = float(input("Triglicerideos (mg/dL): "))
hdl = float(input("HDL (mg/dL): "))

razao = triglicerideos / hdl

print(f"Razao: {razao:.1f}")

if razao < 2.0:
    print("Baixo risco")
elif razao <= 3.0:
    print("Risco moderado")
else:
    print("Alto risco")
