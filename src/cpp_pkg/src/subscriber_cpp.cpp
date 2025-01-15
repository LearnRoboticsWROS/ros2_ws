#include "rclcpp/rclcpp.hpp"
#include "std_msgs/msg/int64.hpp"

class NumberSubscriber : public rclcpp::Node
{
public:
    NumberSubscriber(): Node("number_subscriber"), number_counter_(0)
    {
        subscriber_ = this->create_subscription<std_msgs::msg::Int64>("number", 10, std::bind(&NumberSubscriber::callbackSubscriber, this, std::placeholders::_1));
        RCLCPP_INFO(this->get_logger(), "First subscriber in CPP in ROS2"); 
    }
private:
    void callbackSubscriber(const std_msgs::msg::Int64::SharedPtr msg)
    {
        number_counter_ += msg->data;
        RCLCPP_INFO(this->get_logger(), "Counter: %d", number_counter_); 
    }
    int number_counter_;
    rclcpp::Subscription<std_msgs::msg::Int64>::SharedPtr subscriber_;
};


int main(int argc, char **argv)
{
    rclcpp::init(argc, argv);
    auto node = std::make_shared<NumberSubscriber>();
    rclcpp::spin(node);
    rclcpp::shutdown();
    return 0;
}