keys = ["fruits", "colors", "numbers"]
values = ["apple", "red", 1]

my_dict = {key: [value] for key, value in zip(keys, values)}

# Accessing values in the dictionary
fruits_list = my_dict["fruits"]
colors_list = my_dict["colors"]
numbers_list = my_dict["numbers"]

print(my_dict)
