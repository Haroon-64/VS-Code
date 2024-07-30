def find_key_by_value(dictionary, value):
    for key, val in dictionary.items():
        if val == value:
            return key
    return None  # Return None if the value is not found in the dictionary

my_dict = {"name": "John", "age": 30, "city": "New York"}

value_to_find = "John"
key = find_key_by_value(my_dict, value_to_find)

if key is not None:
    print(f"The key for value '{value_to_find}' is '{key}'")
else:
    print(f"The value '{value_to_find}' was not found in the dictionary")
