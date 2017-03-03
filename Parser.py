
# ---------------------------------------------------------------------------------------------
# RoSi - 03.03.2017	-
# Purpose : extract resource consumption from lst files and memory map of Sensor project
# ---------------------------------------------------------------------------------------------


import re
import os 
import csv


MAP_MEMORY_FILE = "Sensor2185.map"
PROJECT_LOC = "..\\..\\Debug\\";
AppConResourceConsumption =list();


resultFile = open(PROJECT_LOC+"ResourceConsumption.csv",'w' , newline='')
writer = csv.writer(resultFile)
writer.writerow(('          FILE         ','     RAM     ','     FLASH     '))

def getFileFromPath(arg_path):	
	location = arg_path.rfind("\\")	+ 1
	return arg_path[location:]


def processFile(arg_file):
	file = open(arg_file , 'r')	
	line = file.readline()

	CODE_USAGE = 0;
	DATA_USAGE = 0;
		
	
	while line:							
		m = re.search(r'^\s*(\d+\s*\d*)\s+bytes\s+of\s+(CODE|DATA)\s+memory' , line);
		
		if m:	
			amount_str = str(m.group(1));
			amount = int(amount_str.replace(" ",""));
			area = str(m.group(2));			

			if(area == "CODE"):
				CODE_USAGE = amount;
			if(area == "DATA"):
				DATA_USAGE = amount;
			
		line = file.readline()
	file.close()

	print(getFileFromPath(arg_file)+" "+" CODE : "+str(CODE_USAGE)+" DATA :"+str(DATA_USAGE));
	AppConResourceConsumption.append((getFileFromPath(arg_file),DATA_USAGE,CODE_USAGE));
	
	
def processMapFile(arg_file):
	file = open(arg_file , 'r')	
	line = file.readline()

	RO_CODE_MEMORY = ""
	RO_DATA_MEMORY = ""
	RW_DATA_MEMORY = ""
		
	
	while line:							
		m = re.search(r'^\s*(\d+\s*\d+)\s+bytes\s+of\s+(readonly|readwrite)\s+.*' , line);
		
		if m:									
			writer.writerow(('Total ',m.group(0)));
		line = file.readline()
	file.close()	

	
def run():
	for subdir, dirs, files in os.walk(PROJECT_LOC):
		for file in files:			
			filepath = subdir + os.sep + file

			if filepath.endswith(".lst"):
				processFile(filepath)				
		
	AppConResourceConsumption.sort(key=lambda k: k[1] , reverse = True);	
	for f , d , c in AppConResourceConsumption:
		writer.writerow(("          "+f+"          " , d , c));

	
        
        
	for subdir, dirs, files in os.walk(PROJECT_LOC):
		for file in files:			
			filepath = subdir + os.sep + file

			if filepath.endswith(".map"):
				processMapFile(filepath)
				break;

	resultFile.close();

run()
