.name ""
.comment""
l2:
	sti r1, 0, r16
	and r1, %0, r1
live:
	live %1
	zjmp %:live
