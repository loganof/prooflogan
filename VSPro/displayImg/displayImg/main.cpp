#include <opencv2/opencv.hpp>
using namespace cv;

#define  INPUT_IMAGE  "¡¾Ô­Í¼¡¿" 
#define  ERODE_IMAGE  "¡¾¸¯Ê´Í¼¡¿" 
#define  BLUR_IMAGE  "¡¾¾ùÖµÂË²¨¡¿" 
#define  CANNY_IMAGE  "¡¾canny¼ì²â¡¿"

int main( )
{
	Mat inImg;

	inImg = imread("G:\\OpenCV3-Ã«ÐÇÔÆ\\OpenCV3-examples\\src\\¡¾1¡¿µÚÒ»ÕÂ\\¡¾3¡¿Í¼Ïñ¸¯Ê´\\3_Í¼Ïñ¸¯Ê´\\1.jpg");

	if (!inImg.data)return -1;

	namedWindow(INPUT_IMAGE,0);
	resizeWindow(INPUT_IMAGE, inImg.rows/2, inImg.cols/2);
	moveWindow(INPUT_IMAGE, 0, 0);
	imshow(INPUT_IMAGE, inImg);

	Mat element = getStructuringElement(MORPH_RECT, Size(15, 15));
	Mat erodeImg;
	erode(inImg, erodeImg, element);
	namedWindow(ERODE_IMAGE, 0);
	resizeWindow(ERODE_IMAGE, inImg.rows/2, inImg.cols/2);
	moveWindow(ERODE_IMAGE, inImg.rows/2, 0);
	imshow(ERODE_IMAGE, erodeImg);

	Mat blurImg;
	blur(inImg, blurImg, Size(7, 7));
	namedWindow(BLUR_IMAGE, 0);
	resizeWindow(BLUR_IMAGE, inImg.rows/2, inImg.cols/2);
	moveWindow(BLUR_IMAGE, inImg.rows, 0);
	imshow(BLUR_IMAGE, blurImg);

	Mat canImg;
	Canny(blurImg, canImg, 3, 9, 3);
	namedWindow(CANNY_IMAGE, 0);
	resizeWindow(CANNY_IMAGE, inImg.rows/2, inImg.cols/2);
	moveWindow(CANNY_IMAGE,inImg.rows * 3 / 2, 0);
	imshow(CANNY_IMAGE, canImg);

	waitKey(0);
	return 0;
}