extends Control

onready var titulo = get_node("MarginContainer/Nombre/titulo")
onready var inicio = get_node("MarginContainer/Botones/iniciar")
onready var salir = get_node("MarginContainer/Botones/Salir")

func _ready():
	titulo.rect_position.x = 20 
	
	inicio.rect_position.x = 60
	inicio.rect_position.y = 74
	
	salir.rect_global_position.x = 60
	salir.rect_global_position.y = 142
	#salir.rect_position.x = 60
	#salir.rect_position.y = 142 
	
	pass


func _on_Salir_pressed():
	get_tree().quit()
	pass # Replace with function body.


func _on_iniciar_pressed():
	get_tree().change_scene("res://niveles/Tutorial.tscn")
	pass # Replace with function body.
