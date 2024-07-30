import sys
import argparse
#x=sys.argv[1]
#print(x)     #print the list of command line arguments  name, arguments

#using argparse
parser = argparse.ArgumentParser() #create an object of ArgumentParser
parser.add_argument("echo",choices={"a"}, help="echo the string you use here")  #add argument to the parser  #help is optional  #echo is the name of the argument   
args = parser.parse_args()  
print(args.echo)