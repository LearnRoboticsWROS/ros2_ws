#include "rclcpp/rclcpp.hpp"

class NumberPublisher : public rclcpp::Node
{
public:
    NumberPublisher(): Node("number_publisher"), number_(1)
    {
        number_timer_ = this->create_wall_timer(std::chrono::seconds(1), std::bind(&NumberPublisher::printNumber, this));
        RCLCPP_INFO(this->get_logger(), "First node in CPP in ROS2"); 
    }
private:
    void printNumber()
    {
        RCLCPP_INFO(this->get_logger(), "%d", number_);
    }
    int number_;
    rclcpp::TimerBase::SharedPtr number_timer_;
};

int main(int argc, char **argv)
{
    rclcpp::init(argc, argv);
    auto node = std::make_shared<NumberPublisher>();

    rclcpp::spin(node);
    rclcpp::shutdown();
    return 0;

}