class Y;

class X {
private:
    Y *y;
};

class Y {
private:
    X x;
};

int main() {
    return 0;
}
