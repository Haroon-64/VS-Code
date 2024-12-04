import string
def create_matrix(key):
    matrix = [[0 for i in range (5)] for j in range(5)]
    added = []
    row,col =0,0
    for letter in key:
            if letter not in added:
                matrix[row][col] = letter
                added.append(letter)
            else:
                continue
            if (col==4):
                col = 0
                row += 1
            else:
                col += 1

    for letter in string.ascii_lowercase:
        if letter == 'j': 
            continue
        if letter not in added:  
            added.append(letter)
    
    index = 0
    for i in range(5):
        for j in range(5):
            matrix[i][j] = added[index]
            index+=1
    return matrix

def find_position(table, char):
  """Find the row and column of a character in the Playfair matrix."""
  for row in range(len(table)):
    if char in table[row]:
      return row, table[row].index(char)
  return None

def encrypt_bigram(table, bigram):
  row1, col1 = find_position(table, bigram[0])
  row2, col2 = find_position(table, bigram[1])
  
  if row1 == row2:  # Same row
    return table[row1][(col1 + 1) % 5] + table[row2][(col2 + 1) % 5]
  elif col1 == col2:  # Same column
    return table[(row1 + 1) % 5][col1] + table[(row2 + 1) % 5][col2]
  else:  # Rectangle
    return table[row1][col2] + table[row2][col1]
  

plaintext = input("enter text\n")
plaintext = ''.join(filter(str.isalpha, plaintext))
keyword = input("enter keyword\n")

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
  bigrams.append([nonRepeat[i], nonRepeat[i + 1]])
  i += 2  

for bigram in bigrams:
  ciphertext += encrypt_bigram(table, bigram)


print(ciphertext)