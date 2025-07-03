from setuptools import setup, find_packages

package_name = 'roeg'

setup(
    name=package_name,
    version='0.0.0',
    packages=find_packages(include=[package_name, package_name + '.*']),
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='Jun Kim',
    maintainer_email='kim3722@purdue.edu',
    description='Racingline Optimization with Grip Estimation',
    license='Apache License 2.0',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
            'get_friction_map = roeg.friction_reading:main'
        ],
    },
)