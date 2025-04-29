 167  gcc  all_in_one.c -o main
  168  cd documents/IEEE
  169  gcc  all_in_one.c -o main
  170  ./main > output.txt
  171  ./main < numbers.txt > output.txt 2> err.txt
