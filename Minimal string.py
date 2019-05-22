s = input()
c = ['z'] * (len(s) + 1)
for i in range(len(s)-1, -1, -1):
	c[i] = min(c[i+1], s[i])
st = list()
i = 0
while len(st) > 0 or i < len(s):
	if len(st) > 0 and st[len(st)-1] <= c[i]:
		print(st[len(st)-1], end = "")
		st.pop()
	else:
		st.append(s[i])
		i += 1
print()
