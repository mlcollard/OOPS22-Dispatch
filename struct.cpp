struct S {
    int field1;
    int field2;
};

void f() {
    S s;
    s.field1 = 0;
    s.field2 = 1;
}

int main() {

    f();

    return 0;
}
