from PIL import Image
import qrcode
img = qrcode.make("https://www.youtube.com/channel/UC3zPELPks5o4Y4_l21VT44Q")
img.save("qrcode.jpg")