import sys 

##variables Globales##
my_int = 0
my_str = ""
my_float = 0.0
my_bool = True ##False
my_list = [] ##pueden incluirse listas de numeros o variables otra forma es poner list()

if __name__ == "__main__":

    my_int = int( sys.argv[1] )
    my_str = str( sys.argv[2])
    my_float =float( sys.argv[3] )
    my_bool = bool( sys.argv[4] ) ##False
    my_list = sys.argv ##list

    print ( my_int *2 ,my_str*2 ,my_float, my_bool, my_list )
     
    