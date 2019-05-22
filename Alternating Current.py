s = input()
st = list()
for i in range(len(s)):
	if len(st) == 0:
		st.append(s[i])
	else:
		if st[len(st)-1] == s[i]:
			st.pop()
		else:
			st.append(s[i])
if len(st) == 0:
	print("Yes")
else:
	print("No")
