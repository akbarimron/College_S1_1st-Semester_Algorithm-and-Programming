import numpy as np
import pandas as pd

#kode k-means clustering KELOMPOK 1


# 1. Data: Nama, UTBK, rata-rata tingkat kesulitan (dari sheet referensi)
data = [
    # Nama,                UTBK,     rata_kesulitan
    ["Rizki Rafli",               3.00, 2.1666666667],
    ["Dzaky Prima Yoga",          3.29, 2.5],
    ["Randi aditiya",             3.00, 1.9166666667],
    ["Duan Jhon Steven Sinaga",   3.00, 3.0],
    ["Muhammad Romdhom Indra Galuh", 3.14, 2.5],
    ["Azmi Muhammad Rizqi",       3.14, 2.5],
    ["Nayla Tiani Putri",         2.86, 3.5833333333],
    ["Dhea Rizki Amalia",         2.29, 3.1666666667],
    ["Aura Putri",                3.43, 3.5],
    ["Najmi Nur Layaliani",       2.14, 2.5],
    ["Belva Risma Aydina",        3.00, 2.5],
    ["Rifa Nur Habibah",          3.00, 2.5833333333],
    ["Kaisya Azzahra Salsabila",  2.86, 3.0833333333],
    ["tyas",                      3.71, 3.0],
    ["Gusti",                     2.86, 2.75],
    ["Foza satria gumilar",       2.43, 3.25],
    ["Ryan Yanuar Pradana",       3.00, 2.8333333333],
    ["Muhammad Mirza Fayzul Haq", 3.29, 2.75],
    ["Reybano Ivander",           3.29, 2.3333333333],
    ["Raihan Wira Saputra",       2.29, 2.8333333333],
    ["Adi Saputra",               2.71, 3.25],
    ["Nopsandi Natanael",         2.86, 3.0],
    ["Graceta Ulina Sinaga",      3.00, 3.0],
    ["Rianti Agustini",           3.00, 4.0],
    ["Repa Pitriani",             3.00, 3.0],
    ["Willsoon Tulus Parluhutan Simanjuntak", 3.14, 2.5833333333],
    ["Kayla Emira Qonitah",       2.86, 2.4166666667],
    ["Faiq wijaksana",            2.71, 3.0],
    ["Haura Agnia Ramadhani Amnun", 2.86, 2.75],
    ["Sofie",                     3.14, 3.1666666667],
    ["Muhamad Syamil Nathan Rahadiansyah", 3.00, 3.0],
    ["Fakhira Zaafarani H",       3.14, 3.0],
    ["Hanif Habiburrahman",       4.00, 3.4166666667],
    ["Tsalis Sholeh Al Akbar",    2.86, 2.6666666667],
    ["Siti Maulida Rahmah",       2.86, 2.75],
    ["Joy Christine Sijabat",     3.00, 3.4166666667],
    ["Salsabila Ramadhani Hasan", 3.14, 2.9166666667],
    ["Siti Agisna Wahyuni",       2.86, 2.6666666667],
    ["Muhammad Raditya Santosa",  2.86, 2.5],
    ["Bhismart Sopian Sihombing", 2.43, 2.9166666667],
]

# 2. Masukkan ke DataFrame
df = pd.DataFrame(data, columns=["Nama", "UTBK", "rata_kesulitan"])

# 3. Ambil fitur numerik untuk clustering
X = df[["UTBK", "rata_kesulitan"]].values

# 4. Inisialisasi centroid secara acak dari data
np.random.seed(42)
initial_centroids_idx = np.random.choice(len(X), 3, replace=False)
centroids = X[initial_centroids_idx]

# 5. Fungsi jarak Euclidean
def euclidean_distance(a, b):
    return np.sqrt(np.sum((a - b) ** 2, axis=1))

# 6. Iterasi K-Means sebanyak 3 kali
for i in range(3):
    # a. Assign cluster
    clusters = []
    for x in X:
        distances = euclidean_distance(centroids, x)
        cluster = np.argmin(distances)
        clusters.append(cluster)
    clusters = np.array(clusters)

    # b. Update centroid
    new_centroids = []
    for k in range(3):
        cluster_points = X[clusters == k]
        if len(cluster_points) > 0:
            new_centroid = cluster_points.mean(axis=0)
        else:
            new_centroid = centroids[k]
        new_centroids.append(new_centroid)
    centroids = np.array(new_centroids)

    # c. Cetak hasil setiap iterasi
    print(f"Iterasi {i+1}")
    for idx, c in enumerate(centroids):
        print(f"  Centroid {idx+1}: UTBK={c[0]:.3f}, Kesulitan={c[1]:.3f}")
    print()

# 7. Simpan hasil cluster ke DataFrame
df['Cluster'] = clusters

# 8. Tampilkan hasil akhir: Nama, UTBK, rata_kesulitan, dan Cluster
print(df[["Nama", "UTBK", "rata_kesulitan", "Cluster"]])
