from setuptools import find_packages
from setuptools import setup

setup(
    name='tracking_actions',
    version='0.0.0',
    packages=find_packages(
        include=('tracking_actions', 'tracking_actions.*')),
)
