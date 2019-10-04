from PIL import Image
import pytsseract
im=Image.open("test.png")
text=pytesseract.image_to_string(im,lang="eng")
print(text)
