# test.csv file has data with column names: User_ID,Description,Browser_Used,Device_Used
# this script write the data into this fiormat: "{"Device_Used": "Device_Used", "Browser_Used": "Browser_Used", "Description": "Description", "Used_ID": "User_ID"}"
# '\n' is added at the end just to make the "file.json" bit more uderstandable


import csv
import json
import requests

url = 'http://text-processing.com/api/sentiment/'

csvfile = open('test.csv', 'r')
jsonfile = open('file.json', 'w')

fieldnames = ("Used_ID", "Description", 'Browser_Used' ,'Device_Used')
reader = csv.DictReader( csvfile, fieldnames)
for row in reader:
    json.dump(row, jsonfile)
    jsonfile.write('\n')
