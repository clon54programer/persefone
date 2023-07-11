extends KinematicBody2D


func _ready():
	pass

export (int) var run_speed = 100
export (int) var jump_speed = -400
export (int) var gravity = 1200

var velocity = Vector2()
var jumping = false

#esta funcion maneja los inout
func get_input():
	velocity.x = 0
	var right = Input.is_action_pressed("derecha")
	var left = Input.is_action_pressed("izquierda")
	var jump = Input.is_action_just_pressed("jump")

	if jump and is_on_floor():
		jumping = true
		velocity.y = jump_speed
		$AnimatedRight.play("Jump")
	if right:
		velocity.x += run_speed
		$AnimatedRight.play("run")
	if left:
		velocity.x -= run_speed
		$AnimatedRight.play("run")
	else:
		$AnimatedRight.play("default")

func _physics_process(delta):
	get_input()
	velocity.y += gravity * delta # esta linea hace que al sprite le afecte la gravedad
	
	# es ray casting, es decir no deja hacer doble ssalto o un flappy beard
	if jumping and is_on_floor():
		jumping = false
	velocity = move_and_slide(velocity, Vector2(0, -1))
