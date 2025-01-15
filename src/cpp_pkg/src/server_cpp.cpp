#include "rclcpp/rclcpp.hpp"
#include "std_msgs/msg/int64.hpp"
#include "custom_interface/srv/reset_counter.hpp"

class NumberSubscriber : public rclcpp::Node
{
public:
    NumberSubscriber(): Node("number_subscriber"), number_counter_(0)
    {
        subscriber_ = this->create_subscription<std_msgs::msg::Int64>("number", 10, std::bind(&NumberSubscriber::callbackSubscriber, this, std::placeholders::_1));
        reset_counter_service_ = this->create_service<custom_interface::srv::ResetCounter>(
            "reset_counter", std::bind(&NumberSubscriber::callbackResetCounter, this, std::placeholders::_1, std::placeholders::_2));
        RCLCPP_INFO(this->get_logger(), "First subscriber in CPP in ROS2"); 
    }
private:
    void callbackSubscriber(const std_msgs::msg::Int64::SharedPtr msg)
    {
        number_counter_ += msg->data;
        RCLCPP_INFO(this->get_logger(), "Counter: %d", number_counter_); 
    }

    void callbackResetCounter(const custom_interface::srv::ResetCounter::Request::SharedPtr request,
                              const custom_interface::srv::ResetCounter::Response::SharedPtr response)
    {
        if (request->reset_value >=0)
        {
            number_counter_ = request->reset_value;
            RCLCPP_INFO(this->get_logger(), "Counter: %d", number_counter_);
            response->success = true;
        }
        else
        {
            response->success = false;
        }
    }

    int number_counter_;
    rclcpp::Subscription<std_msgs::msg::Int64>::SharedPtr subscriber_;
    rclcpp::Service<custom_interface::srv::ResetCounter>::SharedPtr reset_counter_service_;
};


int main(int argc, char **argv)
{
    rclcpp::init(argc, argv);
    auto node = std::make_shared<NumberSubscriber>();
    rclcpp::spin(node);
    rclcpp::shutdown();
    return 0;
}