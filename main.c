#include <stdio.h>
#include <stdlib.h>

// argv[1] �ɖ��̃t�@�C����������܂�
int main(int argc, char *argv[]) 
{
    FILE *fp;

    // �t�@�C���̓ǂݍ���
    char *filename = argv[1];
    if ((fp = fopen(filename, "r")) == NULL) {
        fprintf(stderr, "Failed to open %s.\n", filename);
        exit(EXIT_FAILURE);
    }

    //##### �������珑�������ăt�@�C����ǂݍ���ŁA���ʂ��o�͂���
    char str[1000];
    fgets(str, sizeof(str), fp);
    printf("%s", str);

    //##### �������������܂ŏ���������

    // �t�@�C������܂�
    fclose(fp);

    return 0;
}
