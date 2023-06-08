"hola mundo"
'hola mundo'
'Este texto utiliza ""'
"Esta 'palabra ests escrita en comillas simples'"
"Esta \"palabra\" se encuentra es crita  en comillas dobles "
'Esta \'palabra \' se encuentra en comillas dobles'
#print() -- permite  una introduccion que permite mostrar correctamente el valor de una cadena(u otros valorte)
"una cadena"
'otra cadena'
'otra cadena mas'
print("una cadena")
print('otra cadena')
print('Otra cadena mas')
#Asepta caracteres especiales como tabulaciones /t o saltos de linea /n
print("un texto\t una tabulacion")
proint("un texto \nnueva linea")
#Direccion de archivo Para evitar los caracteres especiales se deve indicar que una cadena  es cruda (RAW)
print("C:\nombre\temporales")
print(r"C:\nombre\temporal")
print("""una linea
      otra linea
      otra linea \tuna tablulacion""")
##tambien podemos asignar cadenas  a variable s la forma de mostrsrlas e s con la funcion print 
c = "Esta es una cadena \ncon dos lineas"
print(c)
 ## operaciones
 ## Se pueden utilizar mas cadenas 
 c2= "una cadena"
 c1 = " Otra cadena "
 print("Una cadena"+c2)
 diez_espacios = ""*10
 print(diez_espacios + "un texto a dies espacios ")
 #los indices nos permiten posisionarnos en un caracter especificos 
 #representa  un numero [Indice, empezando desde el 0  indica el caracter de primera pocicion  y asi sucesivamente]
 palabra = "Python"
 palabra[0] #caracter en la pocicon 
 palabra[3]
 
 #palabra[-1] el indice negativo  hace referencia a la ultima poscicion el -2 al penultimo yasi 
 #sucesivamente
 palabra[-0]
 palabra [-2 ]
 palabra [-6 ]
 palabra [5]
 
#slicing en cadenas 
# es una capacidad en las cadenas que devuelve un subconjunto  utilizando indices [inicio: fin ]
#- El primer indice indica donde comienza la cadena  
# el segundo indice acaba la subcadena  (se excluye caracter
palabra = "python"
palabra [0:2]
palabra [0:]
palabra [:2]

palabra = "N" + palabra