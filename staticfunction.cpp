int Mahasiswa::nim = 0;

//pendefinisial prosedur - prosedur diluar class
void Mahasiswa::setID() {
    id = ++nim;
}

void Mahasiswa::printAll() {
    cout << "ID = " << id << endl;
    cout << "Nama = " << nama << endl;
    cout << endl;
}