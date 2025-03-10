import hashlib as hl
import secrets as s


salt = s.token_hex(16)


password = "bolinhas"

hash_pass = hl.sha256((password + salt).encode())
print(hash_pass.hexdigest()) 