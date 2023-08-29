total_cabecas = int(input())
total_patas = int(input())

quantidade_coelhos = (total_patas - (2 * total_cabecas)) // 2
quantidade_gansos = total_cabecas - quantidade_coelhos

print(f"No cercado existem {quantidade_coelhos} coelhos e {quantidade_gansos} gansos.")
