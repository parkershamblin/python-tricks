"""
https://youtu.be/7eeEf_rAJds?t=1101

Equivalent Python implementation compared vs C implementation.

Pros:
- much simplier
- easier to read
- more correct
- less likely to crash

Cons:
- much slower
"""
import os
import random

if not os.getcwd().endswith("python-tricks"):
    while not os.getcwd().endswith("python-tricks"):
        os.chdir("..")


def print_file_contents(filepath: str) -> None:
    """print file contents of a file path.

    Args:
        filepath (str): filepath of the file you wish to print.
    """
    with open(filepath) as f:

        read_data = f.read()

        print(read_data.lstrip())  # print contents of file

    print(
        f"{filepath} is closed: "
    )  # Check whether file has been automatically closed or not


FILEPATH = "data/randomly-generated-numbers.txt"
print_file_contents(FILEPATH )
