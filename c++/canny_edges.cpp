#include "opencv2/opencv.hpp"

auto main() -> int
{
    cv::Mat image = cv::imread(std::string(IMGPATH) + "/tisch.jpg", 0);
   
    // initialize a 120X350 matrix with 3 channels of black pixels:

    //cv::Mat image_gray;


    
    cv::Mat edges;
    cv::Canny(image, edges, 100, 255);
    
    // write text on the matrix:
    cv::putText(edges, "Canny Edges", cv::Point(15, 70), cv::FONT_HERSHEY_PLAIN, 3, cv::Scalar(255, 255, 255), 4);

    // write the resulting image to file
    cv::imwrite(std::string(OUTPATH) + "/opencv_canny.jpg", edges);

    return 0;
}