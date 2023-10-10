## Databases

1. Menampilkan daftar database:
   ```sql
   SHOW DATABASES;
   ```

2. Membuat database baru:
   ```sql
   CREATE DATABASE learn_sql;
   ```

3. Menggunakan database tertentu:
   ```sql
   USE learn_sql;
   ```

## Tables

4. Menampilkan jenis storage engine yang tersedia:
   ```sql
   SHOW ENGINES;
   ```

5. Membuat tabel baru:
   ```sql
   CREATE TABLE games (
      id INT NOT NULL,
      title VARCHAR(100) NOT NULL,
      price INT(50),
      stock INT(100)
   ) ENGINE=InnoDB;
   ```

6. Mengubah struktur tabel:
   ```sql
   ALTER TABLE games
   ADD COLUMN description VARCHAR(100);
   
   ALTER TABLE games
   DROP COLUMN description;
   
   ALTER TABLE games
   MODIFY title VARCHAR(200) AFTER/FIRST price;
   
   ALTER TABLE games
   MODIFY id INT NOT NULL;
   ```

7. Menambahkan nilai default pada kolom:
   ```sql
   CREATE TABLE games (
      id INT NOT NULL,
      title VARCHAR(100) NOT NULL,
      price INT(50) NOT NULL DEFAULT 0,
      stock INT(100) NOT NULL DEFAULT 0
   ) ENGINE=InnoDB;
   
   ALTER TABLE games
   MODIFY price INT(50) NOT NULL DEFAULT 0;
   
   ALTER TABLE games
   ADD COLUMN release_date TIMESTAMP NOT NULL DEFAULT CURRENT_TIMESTAMP;
   ```

8. Memasukkan data ke dalam tabel:
   ```sql
   INSERT INTO games (id, title) VALUES (1, "Counter Strike");
   ```

9. Mengosongkan tabel (tanpa menghapus struktur):
   ```sql
   TRUNCATE games;
   ```

10. Menghapus tabel secara permanen:
    ```sql
    DROP TABLE games;
    ```

11. Mengambil ID terakhir (hanya untuk kolom auto increment):
    ```sql
    SELECT LAST_INSERT_ID();
    ```

## Data Types

12. Jenis Data Angka:
   - TINYINT, SMALLINT, MEDIUMINT, INT, BIGINT

13. Jenis Data Desimal:
   - DECIMAL(N, M)

14. Jenis Data Teks:
   - CHAR(N), VARCHAR(N), TEXT

15. Jenis Data ENUM:
   - ENUM('value1', 'value2')

16. Jenis Data Tanggal dan Waktu:
   - DATE, DATETIME, TIMESTAMP, TIME, YEAR

## Studi Kasus

17. Membuat tabel games:
    ```sql
    CREATE TABLE games (
       id VARCHAR(10) NOT NULL,
       title VARCHAR(100) NOT NULL,
       description TEXT,
       price INT UNSIGNED NOT NULL,
       quantity INT UNSIGNED NOT NULL DEFAULT 0,
       created_at TIMESTAMP NOT NULL DEFAULT CURRENT_TIMESTAMP
    ) ENGINE=InnoDB;
    ```

18. Memasukkan data tunggal:
    ```sql
    INSERT INTO games (id, title, price, quantity)
    VALUES ("P0001", "Counter Strike", 15000, 100);
    ```

19. Memasukkan beberapa data:
    ```sql
    INSERT INTO games (id, title, price, quantity)
    VALUES ("P0003", "Counter Strike", 25000, 100),
           ("P0004", "minecraft", 25000, 100),
           ("P0005", "Terraria", 15000, 100);
    ```

20. Memilih data:
    ```sql
    SELECT * FROM games;
    SELECT id, title, description, price FROM games;
    SELECT title, price, quantity, id FROM games;
    ```

21. Menetapkan Primary Key:
    ```sql
    ALTER TABLE games
    ADD PRIMARY KEY (id);
    ```

22. Memperbarui data:
    ```sql
    UPDATE games
    SET category = "Adventure"
    WHERE id = "P0005";

    UPDATE games
    SET category = "Adventure",
    description = "This's a fun game :v"
    WHERE id = "P0004";
    ```

23. Menghapus data:
    ```sql
    DELETE FROM games
    WHERE id = "P0002";
    ```

24. Menggunakan alias:
    ```sql
    SELECT
       id AS kode,
       title AS "judul game",
       description AS deskripsi,
       price AS harga,
       quantity AS jumlah
    FROM games;
    ```

## Operator WHERE

25. Operator Perbandingan:
    - =, <>, <, <=, >, >=

26. Operator Logika:
    - AND, OR

27. Operator LIKE:
    - LIKE 'pattern'

28. Operator BETWEEN:
    - BETWEEN value1 AND value2

29. Operator IN:
    - IN (value1, value2)

30. Mengurutkan data:
    ```sql
    SELECT * FROM games
    ORDER BY price ASC;
    
    SELECT * FROM games
    ORDER BY price ASC, id DESC;
    ```

31. Membatasi jumlah data:
    ```sql
    SELECT * FROM games
    LIMIT 5;
    
    SELECT * FROM games
    LIMIT 5 OFFSET 5;
    ```

32. Menghapus data duplikat:
    ```sql
    SELECT DISTINCT category FROM games;
    ```

## Fungsi Numerik

33. Operator Aritmatika:
    - %, *, +, -, -n, /, DIV

34. Menghitung harga dalam ribu:
    ```sql
    SELECT
       id,
       name,
       price,
       price DIV 1000 AS "price in k"
    FROM games;
    ```

## Auto Increment

35. Membuat kolom dengan auto increment:
    ```sql
    CREATE TABLE games (
       id VARCHAR(10) NOT NULL AUTO_INCREMENT,
       title VARCHAR(100) NOT NULL,
       description TEXT,
       price INT UNSIGNED NOT NULL,
       quantity INT UNSIGNED NOT NULL DEFAULT 0,
       created_at TIMESTAMP NOT NULL DEFAULT CURRENT_TIMESTAMP
    ) ENGINE=InnoDB;
    ```

## Fungsi Aggregat

36. Menghitung total data:
    ```sql
    SELECT COUNT(id) AS "total produk" FROM games;
    ```

37. Menghitung rata-rata harga:
    ```sql
    SELECT AVG(price) AS "rata-rata" FROM games;
    ```

38. Menemukan harga maksimum:
    ```sql
    SELECT MAX(price) AS "harga termahal" FROM games;
    ```

39. Menemukan harga minimum:
    ```sql
    SELECT MIN(price) AS "harga termurah" FROM games;
    ```

40. Mengelompokkan data dengan GROUP BY:
    ```sql
    SELECT category, COUNT(id) AS "total produk" FROM games
    GROUP BY category;
    ```

## Index

41. Membuat indeks:
    ```sql
    CREATE INDEX idx_title ON games(title);
    ```

Ini adalah cheat sheet SQL yang singkat dan padat untuk membantu Anda memahami dasar-dasar SQL dan
