#include <Arduino.h>
unsigned char node_html[] PROGMEM = {
  0x1f, 0x8b, 0x08, 0x08, 0xf7, 0xb6, 0x71, 0x65, 0x00, 0x03, 0x6e, 0x6f,
  0x64, 0x65, 0x2e, 0x6d, 0x69, 0x6e, 0x2e, 0x68, 0x74, 0x6d, 0x6c, 0x00,
  0xad, 0x57, 0xcd, 0x6e, 0xe3, 0x36, 0x10, 0x7e, 0x15, 0x82, 0xa7, 0xf6,
  0xa0, 0xd8, 0xb1, 0x37, 0x8b, 0xb6, 0xb0, 0x0d, 0x6c, 0x63, 0x64, 0xeb,
  0x43, 0xb6, 0xee, 0x3a, 0x41, 0xcf, 0x94, 0x34, 0xb2, 0x08, 0x53, 0xa4,
  0x96, 0xa4, 0xe2, 0xa4, 0xaf, 0xd1, 0x27, 0x58, 0xf4, 0xb0, 0x0f, 0xe2,
  0x17, 0xeb, 0x50, 0x3f, 0x8e, 0x6c, 0xc9, 0x3f, 0x4a, 0x7c, 0xb0, 0x20,
  0x0d, 0xcd, 0xe1, 0xf7, 0x33, 0x1a, 0x8a, 0xa3, 0x90, 0x3f, 0x91, 0x40,
  0x30, 0x63, 0xc6, 0xd4, 0x57, 0xcf, 0x04, 0x7f, 0x5e, 0xaa, 0x79, 0xc2,
  0xf4, 0x0b, 0x9d, 0x8c, 0x76, 0x07, 0xbd, 0x18, 0x58, 0x08, 0x1a, 0xe3,
  0xf1, 0xb0, 0x1e, 0xb6, 0xdc, 0x0a, 0xc0, 0xa8, 0x49, 0x99, 0xac, 0xe2,
  0x82, 0xc9, 0xa5, 0x27, 0x55, 0x88, 0xf1, 0x2f, 0x9b, 0x7f, 0x47, 0x3d,
  0x37, 0x36, 0x19, 0xf5, 0xe2, 0x21, 0x5e, 0x30, 0xeb, 0x64, 0x14, 0x29,
  0x9d, 0xe0, 0x95, 0x83, 0x08, 0x0d, 0x58, 0xc2, 0xc3, 0x31, 0x8d, 0x22,
  0x4a, 0x42, 0x6e, 0x98, 0x2f, 0x00, 0x9f, 0xaa, 0xbb, 0x26, 0x0c, 0x5f,
  0x85, 0x7b, 0xe0, 0x5c, 0x32, 0x6f, 0xa9, 0x55, 0x96, 0x62, 0x5c, 0x30,
  0x1f, 0x04, 0xc1, 0xd0, 0x98, 0x3a, 0x00, 0xb3, 0xb0, 0x15, 0x1a, 0x4b,
  0x1c, 0x34, 0x95, 0xc0, 0x16, 0x5b, 0x3e, 0x6f, 0x42, 0x46, 0x5c, 0xa6,
  0x99, 0xdd, 0xc9, 0x1c, 0x28, 0x69, 0xb5, 0x12, 0x94, 0x24, 0xec, 0x59,
  0x80, 0x5c, 0xda, 0x78, 0x4c, 0x87, 0x7d, 0x4a, 0xec, 0x4b, 0x0a, 0x63,
  0x6a, 0xe1, 0xd9, 0xd2, 0x9c, 0x40, 0xb9, 0x1c, 0x49, 0x05, 0x0b, 0x20,
  0x56, 0x02, 0xc5, 0x1a, 0x53, 0x78, 0xfe, 0x8d, 0xac, 0xb8, 0x0d, 0x62,
  0x90, 0x94, 0x68, 0xf8, 0x96, 0x71, 0x0d, 0x61, 0xa5, 0x42, 0x71, 0x7d,
  0xa7, 0xcc, 0x06, 0x82, 0x4c, 0x73, 0x8b, 0x9a, 0x2c, 0x60, 0x99, 0x69,
  0x26, 0x37, 0x3f, 0x58, 0x8b, 0xe2, 0x6f, 0x56, 0x91, 0x05, 0x01, 0x18,
  0x33, 0x57, 0x5c, 0xda, 0x39, 0xfe, 0x71, 0xad, 0x74, 0xab, 0xa4, 0xe9,
  0x76, 0x6c, 0xce, 0x04, 0x7b, 0xd2, 0x8c, 0xb8, 0x7f, 0x57, 0xfa, 0x92,
  0x4f, 0xf3, 0x7d, 0x89, 0x59, 0x66, 0x55, 0xa0, 0x92, 0x54, 0x80, 0x45,
  0x19, 0x95, 0xb3, 0xbf, 0x55, 0xf5, 0x42, 0xe6, 0x6d, 0xfa, 0x5c, 0xea,
  0x36, 0x4c, 0x4d, 0xdd, 0x4d, 0x96, 0x82, 0xae, 0x61, 0x6e, 0x08, 0x71,
  0x90, 0x72, 0xca, 0x1f, 0x4d, 0xee, 0x41, 0x83, 0x66, 0x86, 0xf1, 0xa2,
  0x7a, 0x1e, 0x2d, 0x17, 0xfc, 0x1f, 0x16, 0x2a, 0x7d, 0xa0, 0x86, 0xba,
  0x11, 0x7c, 0xad, 0xa3, 0x6a, 0xf5, 0x26, 0x21, 0x16, 0x26, 0x5c, 0x76,
  0x24, 0xf2, 0x76, 0xcf, 0x2e, 0x6a, 0x58, 0x0d, 0xc8, 0xb9, 0x46, 0xbd,
  0xe1, 0xed, 0xf8, 0x7b, 0xe6, 0xdd, 0xcd, 0x2e, 0x52, 0xf5, 0x6b, 0x1e,
  0xf1, 0xc5, 0x62, 0x36, 0xc5, 0xb7, 0x0a, 0xaf, 0x5d, 0xdb, 0xc3, 0x60,
  0x48, 0xdb, 0xe4, 0xda, 0x77, 0x7a, 0xbb, 0x48, 0x53, 0x92, 0x04, 0x32,
  0x37, 0xda, 0xc5, 0xec, 0x3c, 0x1b, 0x04, 0x1a, 0xec, 0xfb, 0xbd, 0x3e,
  0x45, 0xf0, 0x63, 0xff, 0x08, 0xc1, 0x5d, 0xeb, 0x6b, 0xb0, 0x0e, 0x38,
  0x9f, 0x9e, 0xe5, 0x7c, 0xe9, 0x5d, 0x8d, 0x70, 0x18, 0x07, 0x28, 0xc1,
  0xf4, 0x8f, 0xdb, 0x5a, 0x6f, 0x29, 0x86, 0xcb, 0x69, 0x66, 0xed, 0x3a,
  0x2f, 0x4e, 0x2a, 0x48, 0x3d, 0x31, 0x91, 0x39, 0xfd, 0x75, 0x06, 0x94,
  0xb8, 0x97, 0xb8, 0x4c, 0x91, 0xc3, 0x2c, 0xee, 0x0a, 0x02, 0xd8, 0xad,
  0x83, 0x15, 0xae, 0x49, 0x31, 0x61, 0x5d, 0x48, 0x23, 0x38, 0x22, 0x27,
  0x28, 0xbd, 0xcc, 0xc1, 0xee, 0x48, 0x77, 0x89, 0x8a, 0x9b, 0x61, 0x6c,
  0xd6, 0xe8, 0x94, 0x67, 0x75, 0x8d, 0x72, 0x7a, 0xdd, 0xa4, 0xeb, 0x9b,
  0x16, 0xc5, 0xaf, 0x7f, 0x1d, 0x5c, 0x5d, 0x7f, 0xfc, 0xe5, 0xea, 0xfa,
  0x6a, 0xd0, 0xef, 0x5a, 0x5d, 0x9f, 0xd7, 0x74, 0xf2, 0x99, 0x59, 0x58,
  0xb3, 0x97, 0xb3, 0x30, 0x56, 0xb8, 0x70, 0x5e, 0x17, 0x5c, 0x37, 0x1f,
  0xba, 0x02, 0xbb, 0x67, 0x66, 0xd5, 0xba, 0xcf, 0x83, 0x4d, 0xf2, 0xa1,
  0xfb, 0xcd, 0x77, 0x13, 0x30, 0x2c, 0xfa, 0x10, 0xc8, 0x57, 0x08, 0xdf,
  0x5a, 0xf6, 0x0e, 0x79, 0x45, 0x2a, 0x5f, 0xb3, 0xc9, 0x63, 0x70, 0x73,
  0x73, 0x55, 0xfd, 0xfa, 0x67, 0x55, 0x74, 0x1d, 0x75, 0x10, 0xf3, 0xb2,
  0x1e, 0x85, 0x2f, 0xbc, 0x84, 0x05, 0x74, 0x72, 0xb5, 0xc5, 0xda, 0xbd,
  0x1f, 0xde, 0xff, 0xf5, 0xf0, 0x70, 0x91, 0x76, 0x98, 0x7c, 0xb3, 0x76,
  0x96, 0x4e, 0xa5, 0xa1, 0x93, 0xdf, 0xb5, 0x5a, 0xe1, 0x4b, 0x30, 0x9b,
  0x93, 0x1e, 0x99, 0x7e, 0x59, 0x74, 0x2e, 0xd6, 0x9a, 0x9c, 0x1f, 0xfa,
  0x05, 0xd7, 0xd7, 0xec, 0xc7, 0xea, 0x62, 0xd8, 0xa9, 0x5e, 0x5d, 0xce,
  0xc7, 0xed, 0x66, 0xfd, 0xae, 0x8d, 0xbc, 0x95, 0xd2, 0x89, 0xf6, 0xbe,
  0xf7, 0xad, 0x58, 0xb1, 0xdc, 0x22, 0x6a, 0x12, 0xe5, 0x2c, 0xe9, 0xca,
  0xef, 0x72, 0x7b, 0xfb, 0xc9, 0x7e, 0x3f, 0x68, 0x36, 0xf7, 0x16, 0x05,
  0x2a, 0x9a, 0xa7, 0xf6, 0x7a, 0x83, 0x0b, 0xc8, 0xe5, 0x81, 0xbe, 0xdf,
  0xab, 0x8e, 0x05, 0xee, 0x36, 0x3f, 0x27, 0xbc, 0xf7, 0x20, 0x02, 0x6b,
  0x2f, 0xe2, 0x6e, 0xec, 0x93, 0xcd, 0x98, 0xf3, 0x7a, 0xf3, 0x63, 0xf3,
  0x9f, 0x72, 0xbd, 0xe0, 0x8e, 0xeb, 0x64, 0xcd, 0x34, 0xb4, 0x7c, 0x30,
  0xfb, 0x99, 0xb5, 0x4a, 0x96, 0xac, 0x8b, 0x07, 0x4a, 0x94, 0x0c, 0x04,
  0x0f, 0x56, 0x63, 0xea, 0x3e, 0xe5, 0xc1, 0xd8, 0xc7, 0x34, 0xc4, 0x7e,
  0xf8, 0xd3, 0xcf, 0x05, 0x75, 0xdf, 0x4a, 0xcf, 0xa9, 0xe2, 0x65, 0x79,
  0x78, 0xfb, 0x7d, 0x84, 0x71, 0xe2, 0xc6, 0xca, 0xa3, 0x15, 0x89, 0xb9,
  0x3b, 0x19, 0x8d, 0x7a, 0x45, 0xd6, 0xe2, 0x34, 0x84, 0xbb, 0x8a, 0x80,
  0xc2, 0x01, 0x54, 0x1e, 0x6c, 0xac, 0x30, 0xe1, 0xfc, 0xcf, 0xc5, 0x03,
  0x0a, 0x1d, 0x58, 0xae, 0xe4, 0x98, 0xf6, 0xaa, 0xb4, 0x20, 0x83, 0x02,
  0x56, 0x92, 0x09, 0xcb, 0x53, 0xa6, 0x6d, 0x2e, 0x94, 0x87, 0xa3, 0xec,
  0xe0, 0x81, 0xa9, 0x30, 0x3a, 0x3f, 0x69, 0x95, 0xa4, 0x67, 0x2e, 0x72,
  0xe7, 0x84, 0x29, 0x77, 0xc3, 0x2a, 0x7f, 0x91, 0xbc, 0x90, 0xec, 0x68,
  0xe7, 0xd8, 0xd1, 0xc8, 0x64, 0x7e, 0xc2, 0xed, 0x21, 0xd2, 0x6d, 0xc6,
  0x70, 0x69, 0x2c, 0x13, 0x22, 0x37, 0xc7, 0x7b, 0xc2, 0xb2, 0x40, 0x9a,
  0xb8, 0x01, 0xe6, 0x51, 0xa6, 0x49, 0xc4, 0x71, 0x23, 0xe6, 0x5a, 0x6d,
  0xcd, 0xa9, 0xf4, 0xaa, 0xea, 0xa4, 0x38, 0x44, 0xee, 0x97, 0x88, 0x79,
  0x31, 0x16, 0x12, 0x2f, 0x52, 0xca, 0xe6, 0x55, 0x72, 0xdc, 0x48, 0xa1,
  0x58, 0x38, 0x85, 0x88, 0xa1, 0x92, 0xc6, 0xf9, 0xb8, 0x87, 0x3e, 0x44,
  0x9c, 0xed, 0x27, 0x01, 0x0d, 0x58, 0xa2, 0x5e, 0x84, 0xe6, 0x28, 0xc7,
  0xee, 0x96, 0x69, 0x0d, 0x4b, 0x44, 0x7d, 0xab, 0x64, 0xc4, 0xdd, 0x41,
  0xec, 0xb5, 0xc8, 0x36, 0xdf, 0x7d, 0xcd, 0x03, 0xb6, 0xcf, 0x83, 0x9c,
  0xac, 0x31, 0x1f, 0x39, 0xb4, 0x80, 0x42, 0xf3, 0x24, 0x97, 0xcb, 0x03,
  0xa8, 0x2c, 0xd6, 0x03, 0x9d, 0x7c, 0x05, 0x2e, 0x79, 0xc0, 0x99, 0x3e,
  0xae, 0x5e, 0xfe, 0xf0, 0x3f, 0x1c, 0xf7, 0xcc, 0xd0, 0x07, 0x10, 0x00,
  0x00
};
unsigned int node_html_len = 1045;
