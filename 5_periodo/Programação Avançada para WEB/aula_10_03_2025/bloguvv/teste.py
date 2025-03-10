import hashlib as hl

mensg1 = "Ola mundo!"

hash_md5 = hl.mds(mensg1.encode())
print(hash_md5.hexdigest())

hash_sha1 = hl.sha1(mensg1.encode())
print(hash_sha1.hexdigest())

hash_sha256 = hl.sha256(mensg1.encode())
print(hash_sha256.hexdigest())