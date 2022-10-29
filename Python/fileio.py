text = input("say something ")

with open("pythonio.txt","a") as file:
	file.write(f"{text}\n")
	
with open("pythonio.txt") as file:
	lines = []
	for line in file:
		lines.append(line.rstrip())

##sort file itself
with open("pythonio.txt") as file:
	for line in sorted(file, reverse=True):
		print("hello", line.rstrip() )

##sort lines list	
# for line in sorted(lines):
# 	print(f"hello {line}")

