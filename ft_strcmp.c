int ft_strmcp(char *s1, char *s2);

int ft_strmcp(char *s1, char *s2)
{
	int size_s1 = 0;
	int size_s2 = 0;
	while (s1[size_s1] != '\0')
		{
			size_s1 ++;
		}

printf("size s1 = %d \n", size_s1);
	while(s2[size_s2] != '\0')
		{
			size_s2 ++;		
		}
printf("size s2 = %d \n", size_s2);
if (size_s1 > size_s2)
	printf("1\n");
if (size_s1 < size_s2)
	printf("-1\n");
if (size_s1 == size_s2)
	printf("0\n");









}

void main()
{
char *st1 = "suee";
char *st2 = "coco";
ft_strmcp(st1, st2);


}
