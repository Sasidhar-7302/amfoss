n = input()
time1 = n[8:]
h = int(n[0:2])
if time1 == 'PM':
    if h ==12:
        print(n[0:8])
    else:
        h = h + 12
        print(str(h)+n[2:8])
elif h == 12:
    print('00'+n[2:8])
else:
    print(n[0:8])

