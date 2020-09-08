#ifndef BOX_H_
#define BOX_H_

class Box 
{
  private:
      double length; // longitud
      double width; // ancho
      double height; // alto

      double volume; // volumen
      double area; 
      void setVolume(double v);
      void setArea(double a);


  public:
    Box();
    ~Box();

    /**
    *Allow get length value the Box
    *@return double
    */
    double getLength();
    /**
    *Allow get width value the Box
    *@return double
    */
    double getWidth();
    /**
    *Allow get height value the Box
    *@return double
    */
    double getHeight();
    /**
    *Allow get length value the Box
    *@return double
    */
    void setLength(double l);
    /**
     * @brief Set the Width object
     * 
     * @param w 
     */
    void setWidth(double w);

    /**
    *Allow set height value the Box
    *@return double
    */
    void setHeight(double h);
    /**
    *Allow get volume value the Box
    *@return double
    */
    double getVolume();
    /**
    *Allow get area value the Box
    *@return double
    */
    double getArea();

};

#endif