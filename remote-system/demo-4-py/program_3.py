from array import array
import os

with open("outputs") as f:
    content = f.readlines()
os.remove("outputs")

output_file = open('outputs.zip', 'wb')
float_array = array('d', content)

float_array.tofile(output_file)
output_file.close()
