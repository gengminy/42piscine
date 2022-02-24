#include <stdio.h>
#include <string.h>
int ft_strlen(char *str);
int main(void)
{
    char text1[] = "Hello 42 SEOUsadsadsaL!!";
    char text2[] = "Hello 42 SEOUsdvsdvsdfvsdL!!";
    char text3[] = "Hello 42 seouasdvcdsval!!";
    char text4[] = "Hello 42 SasdvasdvEOUL!!";
    char text5[] = "Hello 42 vasdvsdvEOUL!!";
    char text6[] = "Hello 42 ssadvsdavasdvasdeoul!!";
    char text7[] = "sdvcdsvsd234qw3rwerwdfddsafdsafds";
    char text8[] = "gL204XluoTO34zxczxcrZJgssgCf7p9pIJhma7QQ9IaWWpe4";
    char text9[] = "EpZgQyGMVwRask5wJIwjase4dfsacA!@###^ZEpZgQyGMVwRask5wJIwjase4dfsacA!@###^ZEpZgQyGMVwRask5wJIwjase4dfsacA!@###^ZEpZgQyGMVwRask5wJIwjase4dfsacA!@###^ZEpZgQyGMVwRask5wJIwjase4dfsacA!@###^ZEpZgQyGMVwRask5wJIwjase4dfsacA!@###^ZEpZgQyGMVwRask5wJIwjase4dfsacA!@###^ZEpZgQyGMVwRask5wJIwjase4dfsacA!@###^ZEpZgQyGMVwRask5wJIwjase4dfsacA!@###^ZEpZgQyGMVwRask5wJIwjase4dfsacA!@###^ZEpZgQyGMVwRask5wJIwjase4dfsacA!@###^ZEpZgQyGMVwRask5wJIwjase4dfsacA!@###^Z";
    char text10[] = "\200\128\3";

	printf("Your: %d\t\tCStdLib: %lu\n", ft_strlen(text1), strlen(text1));
	printf("Your: %d\t\tCStdLib: %lu\n", ft_strlen(text2), strlen(text2));
	printf("Your: %d\t\tCStdLib: %lu\n", ft_strlen(text3), strlen(text3));
	printf("Your: %d\t\tCStdLib: %lu\n", ft_strlen(text4), strlen(text4));
	printf("Your: %d\t\tCStdLib: %lu\n", ft_strlen(text5), strlen(text5));
	printf("Your: %d\t\tCStdLib: %lu\n", ft_strlen(text6), strlen(text6));
	printf("Your: %d\t\tCStdLib: %lu\n", ft_strlen(text7), strlen(text7));
	printf("Your: %d\t\tCStdLib: %lu\n", ft_strlen(text8), strlen(text8));
	printf("Your: %d\t\tCStdLib: %lu\n", ft_strlen(text9), strlen(text9));
	printf("Your: %d\t\t\tCStdLib: %lu\n", ft_strlen(text10), strlen(text10));
    return 0;
}
