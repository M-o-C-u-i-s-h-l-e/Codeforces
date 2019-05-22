st = [-1]
Max = Count = 0
for i, c in enumerate(input()):
	if c == '(':
		st.append(i)
	else:
		if len(st) > 1:
			st.pop()
			temp = i - st[-1]
			if temp > Max:
				Max = temp
				Count = 1
			elif temp == Max:
				Count += 1
		else:
			st[0] = i
if Max:
	print(Max, Count)
else:
	print(0, 1)
