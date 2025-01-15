from setuptools import find_packages, setup

package_name = 'python_pkg'

setup(
    name=package_name,
    version='0.0.0',
    packages=find_packages(exclude=['test']),
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='fra',
    maintainer_email='ros.master.ai@gmail.com',
    description='TODO: Package description',
    license='TODO: License declaration',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
            "node_python = python_pkg.node_python:main",
            "publisher_py = python_pkg.publisher_py:main",
            "subscriber_py = python_pkg.subscriber_py:main",
            "server_py = python_pkg.server_py:main"
        ],
    },
)
