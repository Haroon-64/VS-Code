import string
def create_matrix(key):
    key = key.lower()
    key = ''.join([char for char in key if char.isalpha()]).replace('j', 'i')
    added = []
    for letter in key:
        if letter not in added:
            added.append(letter)

    # Add remaining letters (excluding 'j')
    for letter in string.ascii_lowercase:
        if letter == 'j':
            continue
        if letter not in added:
            added.append(letter)

    # Create the 5x5 matrix
    matrix = []
    index = 0
    for row in range(5):
        current_row = []
        for col in range(5):
            current_row.append(added[index])
            index += 1
        matrix.append(current_row)
    return matrix

def find_position(table, char):
  """Find the row and column of a character in the Playfair matrix."""
  for row in range(5):
    for col in range(5):
      if table[row][col] == char:
        return row, col
  return None

def encrypt(table, bigram):
  row1, col1 = find_position(table, bigram[0])
  row2, col2 = find_position(table, bigram[1])
  
  if row1 == row2:  # Same row
    return table[row1][(col1 + 1) % 5] + table[row2][(col2 + 1) % 5]
  elif col1 == col2:  # Same column
    return table[(row1 + 1) % 5][col1] + table[(row2 + 1) % 5][col2]
  else:  # Rectangle
    return table[row1][col2] + table[row2][col1]
  
def decrypt(table,bigram):
  row1,col1 = find_position(table,bigram[0])
  row2,col2 = find_position(table,bigram[1])

  if row1 == row2:
    return table[row1][(col1 - 1) % 5] + table[row2][(col2 - 1) % 5]
  elif col1 == col2:  # Same column
    return table[(row1 - 1) % 5][col1] + table[(row2 - 1) % 5][col2]
  else:  # Rectangle
    return table[row1][col2] + table[row2][col1]

plaintext = input("Enter plaintext: ").lower()
plaintext = ''.join([char for char in plaintext if char.isalpha()]).replace('j', 'i')
keyword = input("Enter keyword: ").lower()

table = create_matrix(keyword)

ciphertext = ""

nonRepeat = ""
i = 0

while i < len(plaintext):
  if i + 1 < len(plaintext) and plaintext[i] == plaintext[i + 1]:
    nonRepeat += plaintext[i] + "x"
    i += 2  
  else:
    nonRepeat += plaintext[i]
    i += 1  

# Ensure even length 
if len(nonRepeat) % 2 != 0:
  nonRepeat += "x"

# Create bigrams
bigrams = []
i = 0
while i < len(nonRepeat) - 1:
    bigrams.append(nonRepeat[i:i+2])
    i += 2

# Encrypt bigrams
ciphertext = ""
for bigram in bigrams:
    ciphertext += encrypt(table, bigram)

print("Encrypted text:", ciphertext)

bigrams2 = []
i = 0
while i < len(ciphertext) - 1:
    bigrams2.append(ciphertext[i:i+2])
    i += 2

decrypted_text = ""
for bigram in bigrams2:
    decrypted_text += decrypt(table, bigram)

print("Decrypted text:", decrypted_text)