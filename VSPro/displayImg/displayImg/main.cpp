#include <opencv2/opencv.hpp>
using namespace cv;

#define  INPUT_IMAGE  "��ԭͼ��" 
#define  ERODE_IMAGE  "����ʴͼ��" 
#define  BLUR_IMAGE  "����ֵ�˲���" 
#define  CANNY_IMAGE  "��canny��⡿"

int main( )
{
	Mat inImg;

	inImg = imread("G:\\OpenCV3-ë����\\OpenCV3-examples\\src\\��1����һ��\\��3��ͼ��ʴ\\3_ͼ��ʴ\\1.jpg");

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