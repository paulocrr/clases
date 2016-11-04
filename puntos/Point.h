class Point{
private:
    float x;
    float y;
public:
    Point();
    Point(Point &a);
    Point(float x1,float y1);
    float getX();
    float getY();
    void setX(float x1);
    void setY(float y1);
    void print_Point();
    void modify_Point(float x1, float y1);


};

class ArrayPoint{
private:
    Point *ptr_puntos;
    int siz;
public:
    ArrayPoint();
    ArrayPoint(Point points[],int tam);
    ArrayPoint(ArrayPoint &pv);
    void Push_back(Point p);
    void Insert(Point p, int pos);
    void Delete(int pos);
    void Clear();
    void print_arr();
    int getSize();
    Point* get(int pos);
};
