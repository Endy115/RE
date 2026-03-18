import hashlib
from Crypto.Cipher import AES

CONST = b"753a13ad4a45f9df5a7e92f220dcd647bc71a0e4"

def derive_key(user: bytes):
    h = hashlib.md5(CONST + user).hexdigest()
    key = h[5:21].encode()   # 16 bytes
    return key


def try_key(s):
    key = derive_key(s)
    print("keylen =", len(key))
    aes = AES.new(key, AES.MODE_ECB)
    pt = aes.decrypt(cipher)
    return pt
