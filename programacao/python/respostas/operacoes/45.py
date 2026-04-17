colesterol_total = float(input("Colesterol total (mg/dL): "))
hdl = float(input("HDL (mg/dL): "))
ldl = float(input("LDL (mg/dL): "))

triglicerideos = (colesterol_total - hdl - ldl) * 5
print(f"A estimativa de triglicerideos e: {triglicerideos:.2f} mg/dL")
