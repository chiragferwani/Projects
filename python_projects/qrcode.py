from PIL import Image
import qrcode
img = qrcode.make("https://vpnsneakweb.vercel.app/VPNSneak.apk")
img.save("qrcode.jpg")