ifconfig | grep "ether " | tr -d '\t| ' | sed "s/ether//"
