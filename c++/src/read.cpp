#include <rapidcsv.h>
#include "opencv2/opencv.hpp"
#define CVPLOT_HEADER_ONLY
#include <CvPlot/cvplot.h>

#include <iostream>
#include <string>
#include <vector>

auto main() -> int
{
    rapidcsv::Document doc(std::string(RESOURCEPATH) + "/uncertain.csv", rapidcsv::LabelParams(0, -1));

    /*std::vector<float> col = doc.GetColumn<float>("x_values");
    std::cout << "Read " << col.size() << " values." << std::endl;

    std::vector<float> col = doc.GetColumn<float>("y_values");
    std::cout << "Read " << col.size() << " values." << std::endl;*/
    auto x_values = doc.GetColumn<double>("x values");
    auto y_values = doc.GetColumn<double>("y values");


    


    // create the plot for the values
    auto axes = CvPlot::plot(x_values, y_values, "r.");
    //axes.create<CvPlot::Series>(std::vector<double>{veca1(0), veca2(0)}, std::vector<double>{veca1(1), veca2(1)}, "-g");
    //axes.create<CvPlot::Series>(std::vector<double>{vecb1(0), vecb2(0)}, std::vector<double>{vecb1(1), vecb2(1)}, "-b");
    

    // set some settings to the axes
    axes.title("uncertain point with ellipse");
    axes.xLabel("x");
    axes.yLabel("y");
    axes.setFixedAspectRatio();

    // render the image
    cv::Mat mat = axes.render(600, 800);
    // write image to file
    cv::imwrite("uncertain.png", mat);

    return 0;
}
