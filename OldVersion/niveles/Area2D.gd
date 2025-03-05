extends Area2D


func _ready():
	pass



func _on_Area2D_body_entered(body):
	print_debug("gracias")
	get_tree().quit()
	pass # Replace with function body.
