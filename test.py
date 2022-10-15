mystring = "table_11_hello"
mystring = "table_10_hello"

a = mystring.encode()
b = mystring.encode()
print(a)
print(b)

print(a > b)
print(b == a)


# my_str = "table_10_hello"
# my_str_as_bytes = str.encode(my_str)
# print(my_str_as_bytes)
# print(type(my_str_as_bytes)) # ensure it is byte representation
# my_decoded_str = my_str_as_bytes.decode()
# print(my_decoded_str)
# print(type(my_decoded_str)) # ensure it is string representation
