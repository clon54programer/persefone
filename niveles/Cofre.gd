extends Area2D



func _ready():
	pass





func _on_Cofre_body_entered(body):
	print_debug("ganastes")
	$Sprite/AnimationPlayer.play("cofre")
	get_tree().change_scene("res://niveles/ganastes.tscn")
	pass # Replace with function body.
