import os
import pandas as pd

Path = 'path_of_root'
dataframe = pd.DataFrame()

for subfolder in os.listdir(Path):
    files = os.listdir(Path + subfolder)
    for file in files:
        if os.path.isfile(os.path.join(Path + subfolder, file)):
            file_path = os.path.join(Path + subfolder, file)
            file_name = os.path.splitext(os.path.basename(file_path))
            Path = os.path.splitext(os.path.basename(file_path))[0]
            x = [[file_path, file_name, subfolder,Path]]
            x=pd.DataFrame(x)
            dataframe = pd.concat([dataframe, x])
dataframe = dataframe.drop(columns=[3])
dataframe = dataframe.set_axis(['path', 'filename', 'kind'], axis='columns')  #column names

dataframe["filname"]= dataframe["filname"].str.slice(2,-2)  # if names are in form ('name')