#include "rclcpp/rclcpp.hpp"
#include "std_msgs/msg/int64.hpp"

class NumberPublisher : public rclcpp::Node
{
public:
    NumberPublisher(): Node("number_publisher"), number_(1)
    {
        publisher_ = this->create_publisher<std_msgs::msg::Int64>("number", 10);
        number_timer_ = this->create_wall_timer(std::chrono::seconds(1), std::bind(&NumberPublisher::publishNumber, this));
        RCLCPP_INFO(this->get_logger(), "First node in CPP in ROS2"); 
    }
private:
    void publishNumber()
    {
        auto msg = std_msgs::msg::Int64();
        msg.data = number_;
        publisher_->publish(msg);
    }
    int number_;
    rclcpp::Publisher<std_msgs::msg::Int64>::SharedPtr publisher_;
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