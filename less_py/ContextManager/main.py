# Работа с файлами

value = "Information for data.txt file"

with open("data.txt", "w") as f:
    f.write(value)

with open("data.txt", "r") as f:
    read = f.read()
print(f'В файле data.txt - {read}')