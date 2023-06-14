#include <rapidcsv.h>
#include "opencv2/opencv.hpp"

#include <iostream>
#include <string>
#include <vector>
#include <armadillo>

auto main() -> int
{
    //rapidcsv::Document doc(std::string(RESOURCEPATH) + "/uncertain.csv", rapidcsv::LabelParams(0, 0));

    std::vector<float> col = doc.GetColumn<float>("Close");
    std::cout << "Read " << col.size() << " uncertain." << std::endl;

    auto volume = doc.GetCell<int64_t>("x values", "");
    std::cout << "x values" << volume << " on 2017-02-22." << std::endl;
    auto axes = CvPlot::plot(std::vector<double>{volume}, "-o");

    return 0;
}