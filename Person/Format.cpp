for (int i = 0; i < picture->getHeight(); i++)
{
    for (int j = 0; j < picture->getWidth(); j++)
    {
        if (contadorRGB == 0)
        {

            // int pixel = picture->getPixel(i,j);??
            algoritmoDeConversion = (((picture->getPixel(i, j)) * 0.393) + ((picture->getPixel(i, j + 1)) * 0.769) + ((picture->getPixel(i, j + 2)) * 0.189));

            picture->setPixel(i, j, algoritmoDeConversion);

            contadorRGB++;
        }
        else if (contadorRGB == 1)
        {

            algoritmoDeConversion = (((picture->getPixel(i, j - 1)) * 0.349) + ((picture->getPixel(i, j)) * 0.686) + ((picture->getPixel(i, j + 1)) * 0.168));
            picture->setPixel(i, j, algoritmoDeConversion);
            contadorRGB++; //modo ir al baño, ya vuelvo XDDD
        }
        else if (contadorRGB == 2)
        {
            algoritmoDeConversion = (((picture->getPixel(i, j - 2)) * 0.272) + ((picture->getPixel(i, j - 1)) * 0.534) + ((picture->getPixel(i, j)) * 0.131));
            picture->setPixel(i, j, algoritmoDeConversion);
            contadorRGB = 0;
        } //Espera organizo esto
    }
}