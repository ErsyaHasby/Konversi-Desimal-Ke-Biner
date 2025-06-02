#include "adtstack.h"
#include <stddef.h> // For NULL definition

// Menambahkan elemen ke stack
void Push(address *top, int data)
{
    AddAwal(top, data); // Ubah dari Tambah_Awal ke AddAwal
}

// Menghapus elemen dari stack
int Pop(address *top)
{
    if (*top == NULL)
        return -1; // Stack kosong
    int data = (*top)->info;
    hapusNodeAwal(top); // Ubah dari Hapus_NodeAwal ke hapusNodeAwal
    return data;
}

// Menampilkan isi stack
void Tampil_Stack(address top)
{
    TampilList(top); // Ubah dari Tampil_List ke TampilList
}

// Mengecek apakah stack kosong
int Is_Empty(address top)
{
    return top == NULL;
}
