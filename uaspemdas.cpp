/**
 * @file uaspemdas.cpp
 * @author your name (you@domain.com)
 * @brief UAS PEMDAS
 * @version 0.1
 * @date 2024-06-24
 * @details
 * Program ini menunjukkan implementasi 4 pilar OOP:
 * 1. Encapsulation (Enkapsulasi)
 * 2. Inheritance (Pewarisan)
 * 3. Polymorphism (Polimorfisme)
 * 4. Abstraction (Abstraksi)
 * @copyright Copyright (c) 2024
 * 
 */
#include <iostream>
using namespace std;

class MataKuliah {
private:
    float presensi;
    int activity;
    int exercise;
    int tugasakhir;

public:

    MataKuliah() {
        presensi = 0.0;
        activity = 0;
        exercise = 0;
        tugasakhir = 0;
    }

    virtual void namaMataKuliah() {    //polimorphi
        cout << "Nama Mata Kuliah" << endl;
    }
    
    void setPresensi(float nilai) {
        this -> presensi = nilai;
    }

    float getPresensi() {
        return presensi;
    }

    void setActivity(int nilai) {
       this -> activity = nilai;
    }

    int getActivity() const {
        return activity;
    }

    void setExercise(int nilai) {
       this -> exercise = nilai;
    }

    int getExercise() const {
        return exercise;
    }

    void setTugasAkhir(int nilai) {
        this -> tugasakhir = nilai;
    }

    int getTugasAkhir() const {
        return tugasakhir;
    }

};

class Pemrograman : public MataKuliah {
public:
    void namaMataKuliah() override {
        cout << "Anda memilih Mata Kuliah Pemrograman\n";
    }

    void inputNilai() {
        cout << "Masukkan nilai mata kuliah pemrograman: ";
        int nilai;
        cin >> nilai;
        setTugasAkhir(nilai);
    }

    void hitungNilaiAkhir() {
        int NilaiAkhir = getTugasAkhir();
        if (NilaiAkhir >= 75) {
            cout << "Selamat Anda lolos" << endl;
        } else {
            cout << "Anda tidak lolos" << endl;
        }
    }
};


int main() {
    Pemrograman pemrograman;
    pemrograman.namaMataKuliah();
    pemrograman.inputNilai();
    pemrograman.hitungNilaiAkhir();

    return 0;
}
