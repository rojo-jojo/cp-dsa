vals = [{"name": 5}, {"name":7}, {"name":13}]
print("Max is ", max(vals, key=lambda x:x["name"]))