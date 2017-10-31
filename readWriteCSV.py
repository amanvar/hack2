import collections
import csv
from collections import defaultdict


columns = defaultdict(list) 
# reading sample.csv into a list of dict

with open('sample.csv') as f:
    reader = csv.DictReader(f) 
    for row in reader: 
        for (k,v) in row.items(): 
            columns[k].append(v)


# Writing to an output.csv file with col1, col2, col3,...

f=open('outTry5.csv', 'w')
fieldnames=['col1', 'col2', 'col3']
writer = csv.DictWriter(f, fieldnames=fieldnames)
writer.writeheader() 
writer.writerow({'col1':str(columns['col1']), 'col2':str(columns['col2']), 'col3':str(columns['col3'])})
f.close()