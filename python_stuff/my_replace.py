import pandas as pd
import numpy as np
import pdb

d = {'col1': [1, 2, 5, 6], 'col2': [3, 4, 7, 8]}
df = pd.DataFrame(data=d)

dict = {1:2, 2:5}
d2 = {'col1': [1, 2, 5, 6], 'col2': [3, 4, 7, 8]}

# df_new = df.replace({'col1': dict})
df_new = df.copy()
df_new['col1'] = df['col1'].map(dict)

pdb.set_trace()
