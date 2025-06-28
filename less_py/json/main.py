import json

my_dict = dict()

key = "Key"
value_for_json = "Value"
my_dict[key] = value_for_json

file = open("data2.json", "w")
json.dump(my_dict, file)

file = open("data2.json", "r")
file_read = json.load(file)
print(file_read)

file.close() # Обязательно надо закрывать