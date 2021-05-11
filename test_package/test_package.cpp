#include <ktx.h>

#include <iostream>

// taken from: https://www.khronos.org/ktx/documentation/libktx/index.html

int main(int argc, char **argv)
{
    if (argc < 2) {
        std::cerr << "Need at least one argument\n";
        return 1;
    }

    ktxTexture* texture;
    KTX_error_code result;
    ktx_size_t offset;
    ktx_uint8_t* image;
    ktx_uint32_t level, layer, faceSlice;
    result = ktxTexture_CreateFromNamedFile(argv[1],
                                            KTX_TEXTURE_CREATE_LOAD_IMAGE_DATA_BIT,
                                            &texture);

    return 0;
}
