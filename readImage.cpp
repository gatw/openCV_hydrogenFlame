#include <opencv2/core.hpp>
#include <opencv2/imgcodecs.hpp>
#include <opencv2/highgui.hpp>

#include <iostream>


int main()
{
    std::string imgPath = cv::samples::findFile("6222.png");
    cv::Mat img = cv::imread(imgPath, cv::IMREAD_GRAYSCALE);
    if(img.empty())
    {
        std::cout << "problem reading the image ..." << imgPath<< std::endl;
        return 1;
    }
    
    cv::imshow("Display window", img);
    int keyPress = cv::waitKey(0);

    if(keyPress = 'w')
    {
        cv::imwrite("6222.png", img);
    }
        
    return 0;
}
