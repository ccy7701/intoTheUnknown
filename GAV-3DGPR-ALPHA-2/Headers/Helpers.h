#ifndef HELPERS_H
#define HELPERS_H

#include <cstring>

const char* BASE_BITMAP_PATH = "Resources/Bitmaps/";
const char* BASE_OBJECT_PATH = "Resources/Objects/";

char* GetBitmapPath(const char* file_name) {
	size_t path_length = strlen(BASE_BITMAP_PATH) + strlen(file_name) + 1;
	char* full_path = new char[path_length];

	strcpy(full_path, BASE_BITMAP_PATH);
	strcat(full_path, file_name);

	return full_path;
}

char* GetObjectPath(const char* file_name) {
	size_t path_length = strlen(BASE_OBJECT_PATH) + strlen(file_name) + 1;
	char* full_path = new char[path_length];

	strcpy(full_path, BASE_OBJECT_PATH);
	strcat(full_path, file_name);

	return full_path;
}

#endif