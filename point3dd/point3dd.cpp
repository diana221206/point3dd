

#include <iostream>

int main()
{
    class Point3D {
    public:
        Point3D();
        Point3D(double x, double y, double z);
        ~Point3D();

        double getX() const;
        double getY() const;
        double getZ() const;

        void setX(double x);
        void setY(double y);
        void setZ(double z);

    private:
        double m_x;
        double m_y;
        double m_z;
    };

}

