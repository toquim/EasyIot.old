#include <Arduino.h>
unsigned char node_html[] = {
  0x1f, 0x8b, 0x08, 0x08, 0x0d, 0xde, 0xe0, 0x64, 0x00, 0x03, 0x6e, 0x6f,
  0x64, 0x65, 0x2e, 0x6d, 0x69, 0x6e, 0x2e, 0x68, 0x74, 0x6d, 0x6c, 0x00,
  0xbd, 0x58, 0xcd, 0x6e, 0xe3, 0x36, 0x10, 0x7e, 0x15, 0x42, 0xbd, 0xb4,
  0x07, 0x39, 0xfe, 0x49, 0x82, 0x36, 0xb1, 0x0d, 0xa4, 0x49, 0xb3, 0x35,
  0xb0, 0xd9, 0xba, 0xf9, 0x41, 0x81, 0x5e, 0x16, 0x14, 0x49, 0x59, 0x84,
  0x29, 0x52, 0x4b, 0x52, 0xb6, 0xd3, 0x53, 0xdf, 0xa1, 0xa7, 0x1e, 0x17,
  0x3d, 0xec, 0x83, 0xf8, 0x4d, 0xfa, 0x24, 0x1d, 0x4a, 0x96, 0x2c, 0x47,
  0x72, 0xba, 0xb6, 0x93, 0x1c, 0x2c, 0x50, 0xa4, 0x3c, 0xf3, 0xcd, 0x37,
  0x1f, 0x39, 0x23, 0xf5, 0x29, 0x9f, 0x21, 0x22, 0xb0, 0x31, 0x03, 0x2f,
  0x50, 0x0b, 0x04, 0x3f, 0x3f, 0xd1, 0x3c, 0xc6, 0xfa, 0xd1, 0x1b, 0xf6,
  0x37, 0x17, 0xfd, 0x88, 0x61, 0xca, 0x34, 0xcc, 0x47, 0xbd, 0xea, 0xb4,
  0xe5, 0x56, 0x30, 0x98, 0x35, 0x09, 0x96, 0xc5, 0xbc, 0xc0, 0x72, 0xe2,
  0x4b, 0x45, 0x61, 0xfe, 0xc3, 0xf2, 0xaf, 0xfe, 0x91, 0x5b, 0x1b, 0xf6,
  0x8f, 0xa2, 0x1e, 0x5c, 0xc0, 0xea, 0xb0, 0x1f, 0x2a, 0x1d, 0xc3, 0x95,
  0x33, 0x41, 0x0d, 0xb3, 0x88, 0xd3, 0x81, 0x17, 0x86, 0x1e, 0xa2, 0xdc,
  0xe0, 0x40, 0x30, 0xb8, 0x2b, 0x46, 0x75, 0x18, 0x81, 0xa2, 0x4f, 0xc0,
  0x11, 0x25, 0xfc, 0x98, 0xfa, 0xa7, 0xc8, 0x0d, 0x16, 0xc6, 0xef, 0x74,
  0x37, 0xd7, 0x9d, 0x33, 0x7f, 0xa2, 0x55, 0x9a, 0xc0, 0xbc, 0xc0, 0x01,
  0x13, 0x08, 0xa6, 0x06, 0x9e, 0x03, 0x38, 0xa2, 0x8d, 0xd0, 0x71, 0xec,
  0xa0, 0xab, 0x98, 0x95, 0xd8, 0xb3, 0xff, 0x0d, 0x51, 0x9f, 0xcb, 0x24,
  0xb5, 0x1b, 0x96, 0x89, 0x92, 0x56, 0x2b, 0xe1, 0xa1, 0x18, 0x2f, 0x04,
  0x93, 0x13, 0x1b, 0x0d, 0xbc, 0x5e, 0xdb, 0x43, 0xf6, 0x31, 0x61, 0x03,
  0xcf, 0xb2, 0x85, 0xf5, 0x90, 0x33, 0x58, 0x3a, 0xcc, 0xc2, 0x2d, 0xc6,
  0x89, 0xc0, 0x84, 0x45, 0x4a, 0x00, 0xb5, 0x03, 0x8f, 0x2d, 0xce, 0xd0,
  0x94, 0x5b, 0x12, 0x31, 0xe9, 0x21, 0xcd, 0x3e, 0xa5, 0x5c, 0x33, 0x5a,
  0x70, 0x96, 0xa1, 0x74, 0x7f, 0x15, 0x81, 0xf0, 0x49, 0xc4, 0x13, 0x0f,
  0x19, 0xfb, 0x28, 0xc0, 0x6e, 0x80, 0xc9, 0xd4, 0xc5, 0x27, 0x29, 0x80,
  0x11, 0x4a, 0x9f, 0xa1, 0x6f, 0x7a, 0xbd, 0xde, 0xf9, 0x6a, 0x3c, 0x8f,
  0xb8, 0x65, 0xe7, 0x09, 0xa6, 0x94, 0xcb, 0xc9, 0x19, 0xea, 0x26, 0x0b,
  0xd4, 0x69, 0xc3, 0xa5, 0x18, 0x9c, 0x07, 0x4a, 0x83, 0x77, 0x5f, 0x63,
  0xca, 0x53, 0x73, 0x86, 0x4e, 0x60, 0xca, 0x1b, 0xb6, 0x5a, 0xad, 0x32,
  0xf6, 0xcc, 0x7d, 0x7e, 0x3d, 0x50, 0x13, 0x86, 0x91, 0x54, 0x73, 0x0b,
  0x09, 0xbc, 0x63, 0x93, 0x54, 0x63, 0xb9, 0xfc, 0x82, 0x1b, 0xe4, 0xf1,
  0xb5, 0x29, 0x3f, 0xde, 0x35, 0xe5, 0x98, 0x10, 0x66, 0xcc, 0x58, 0x71,
  0x69, 0xc7, 0xf0, 0xe0, 0x1c, 0x22, 0x6f, 0x82, 0x99, 0x94, 0x6b, 0x63,
  0x2c, 0xf0, 0x4c, 0x63, 0xe4, 0x9e, 0x2e, 0xc4, 0x80, 0x2e, 0xc6, 0x4f,
  0xf5, 0x80, 0x53, 0xab, 0x88, 0x8a, 0x13, 0xc1, 0x2c, 0xe4, 0x43, 0x39,
  0x2d, 0x37, 0x4a, 0x24, 0xd7, 0x44, 0x69, 0x7e, 0xa5, 0x8b, 0x26, 0x54,
  0x59, 0xa6, 0x1b, 0x17, 0x6a, 0x8a, 0x31, 0x69, 0xc2, 0x74, 0x25, 0x9c,
  0x2d, 0xf9, 0xda, 0x9b, 0xb3, 0x84, 0x3f, 0x98, 0x2c, 0xc9, 0x35, 0x9e,
  0x52, 0x98, 0xcf, 0xf7, 0xca, 0x83, 0xe5, 0x82, 0xff, 0x81, 0xa9, 0xd2,
  0x5b, 0x76, 0xcc, 0x6e, 0x0c, 0x55, 0x77, 0x4d, 0xe1, 0x3f, 0x67, 0xa4,
  0xb8, 0xa9, 0xb1, 0x80, 0x69, 0xcc, 0xe5, 0xab, 0x44, 0xbf, 0xbf, 0x52,
  0x5e, 0x58, 0x26, 0x15, 0x28, 0x05, 0x19, 0x7b, 0xca, 0x62, 0x8f, 0xcd,
  0xfc, 0xdb, 0xc8, 0xbf, 0x1e, 0xbd, 0xc9, 0x26, 0x35, 0x86, 0x03, 0xde,
  0xbb, 0xbb, 0xd1, 0xd5, 0xae, 0xc7, 0x6e, 0xb7, 0xe7, 0x35, 0x71, 0x5c,
  0xd7, 0xd4, 0x9c, 0x87, 0xdc, 0x39, 0xc8, 0x79, 0xcc, 0x1c, 0xd6, 0x09,
  0x8c, 0x59, 0xea, 0x9e, 0x7b, 0x79, 0x4d, 0x39, 0xab, 0x1f, 0xe1, 0x28,
  0xd4, 0xcc, 0x1e, 0xae, 0xa9, 0x46, 0x4e, 0x2a, 0x51, 0xe6, 0x6e, 0xaa,
  0x2c, 0x9d, 0xb6, 0x9f, 0x61, 0x29, 0xd9, 0x50, 0x58, 0x15, 0xe9, 0x16,
  0x85, 0x25, 0xfb, 0x1d, 0x3c, 0xd5, 0x7c, 0x5b, 0x6c, 0x39, 0x19, 0x01,
  0x49, 0x57, 0x3f, 0x5f, 0xd6, 0x8e, 0xd6, 0xc6, 0xf8, 0x56, 0x85, 0x6f,
  0xce, 0xa9, 0x8d, 0xce, 0xd0, 0x31, 0x54, 0xb1, 0x02, 0x3f, 0xd4, 0x4e,
  0x32, 0x05, 0x3d, 0xae, 0x32, 0x5b, 0x98, 0x5e, 0x31, 0xb2, 0xbe, 0x9f,
  0x61, 0x91, 0x3a, 0x51, 0xe8, 0x94, 0x6d, 0x47, 0xfe, 0x1a, 0xba, 0x1e,
  0x7d, 0x5d, 0x84, 0xcd, 0x9a, 0x75, 0xc8, 0x8b, 0xbc, 0xb8, 0x71, 0x25,
  0xab, 0x9d, 0x93, 0x86, 0x0c, 0x75, 0x7e, 0xe8, 0xb6, 0x3a, 0xa7, 0xdf,
  0xb7, 0x3a, 0xad, 0x6e, 0xdb, 0xdb, 0x68, 0x24, 0x5e, 0xaf, 0x75, 0x28,
  0x7b, 0x94, 0x18, 0x13, 0xe8, 0x23, 0x36, 0xbb, 0x88, 0x46, 0x1a, 0xff,
  0xfd, 0xf3, 0xef, 0x03, 0x36, 0xd0, 0x3b, 0x6c, 0xd9, 0x1c, 0x3f, 0xee,
  0xb8, 0x2f, 0xde, 0xcd, 0xd7, 0x4c, 0xba, 0xf1, 0x0e, 0x4c, 0x9e, 0x1c,
  0xbf, 0xf9, 0x91, 0x20, 0x99, 0x8d, 0xb1, 0x99, 0x7a, 0xc3, 0x9b, 0xe5,
  0x67, 0x43, 0x30, 0x1c, 0x09, 0x94, 0xa1, 0x5b, 0x46, 0xf7, 0xed, 0x4f,
  0x5d, 0x88, 0x6b, 0x2e, 0x6e, 0x9c, 0xe9, 0x92, 0x8d, 0xfc, 0xae, 0x46,
  0x40, 0xf7, 0xe4, 0xa4, 0x55, 0xfc, 0xda, 0x87, 0x97, 0x93, 0x9b, 0x5f,
  0xef, 0xef, 0xdf, 0xa4, 0x9a, 0xc4, 0x9f, 0xac, 0xfd, 0x08, 0xcd, 0xf2,
  0xf0, 0x47, 0xad, 0xa6, 0x4c, 0xa3, 0xd1, 0x18, 0x1d, 0xa1, 0xab, 0x0f,
  0x77, 0x3b, 0xe8, 0xc5, 0x99, 0x18, 0x25, 0x57, 0xd2, 0x6c, 0x6e, 0xcb,
  0x0a, 0x9f, 0xc7, 0xed, 0x9c, 0xbf, 0xc2, 0xd9, 0x73, 0xfa, 0xe9, 0x3d,
  0x65, 0xef, 0xa5, 0x82, 0x5c, 0x77, 0x63, 0x07, 0x75, 0x6a, 0x8d, 0x44,
  0x34, 0xd4, 0x8b, 0x35, 0x37, 0x0f, 0x85, 0xf1, 0x6d, 0xf4, 0xf4, 0xaa,
  0xf4, 0x94, 0x50, 0xea, 0x24, 0x71, 0x1c, 0xbf, 0x12, 0x37, 0x95, 0x2a,
  0xf5, 0x7a, 0xf5, 0xd6, 0x79, 0x5a, 0x37, 0x64, 0xd5, 0x8a, 0xdb, 0xad,
  0x97, 0xd7, 0x06, 0x46, 0x4b, 0x8a, 0xd6, 0x4f, 0x35, 0xd7, 0x5c, 0x03,
  0x5e, 0xe5, 0x64, 0x4b, 0xe5, 0x5d, 0x5d, 0x8b, 0x97, 0x6b, 0x37, 0xcc,
  0xde, 0xb6, 0x0f, 0x7c, 0x75, 0x4b, 0x13, 0x0a, 0x07, 0xad, 0x37, 0xbc,
  0xb8, 0x7f, 0xb8, 0x78, 0x3f, 0xfa, 0xfd, 0xe2, 0x76, 0xcb, 0x6b, 0x3d,
  0x02, 0x42, 0x58, 0xce, 0x0f, 0x70, 0xc0, 0x6c, 0xa4, 0x20, 0xaa, 0xf1,
  0x2f, 0x77, 0xf7, 0x10, 0x32, 0xb1, 0x5c, 0xc9, 0x81, 0x77, 0xb4, 0xb2,
  0x85, 0x98, 0x24, 0x39, 0x2d, 0x71, 0x2a, 0x2c, 0x4f, 0xb0, 0xb6, 0x19,
  0x56, 0x1f, 0x56, 0xf1, 0x73, 0x6f, 0xfe, 0x35, 0x5d, 0xec, 0x20, 0x87,
  0x90, 0xeb, 0x78, 0x8e, 0x35, 0x1b, 0xb9, 0x6c, 0x5e, 0xf3, 0x2d, 0xdf,
  0x2e, 0xd8, 0xdc, 0x0f, 0xb3, 0xb5, 0x9f, 0x0c, 0xd8, 0x8f, 0xe0, 0xdc,
  0x50, 0x28, 0xe4, 0xd0, 0x5c, 0x70, 0xad, 0x10, 0xc5, 0x48, 0xaa, 0x19,
  0x46, 0x33, 0xc8, 0xc4, 0xf2, 0x1f, 0xb5, 0x45, 0x28, 0xd9, 0x47, 0x8d,
  0x9a, 0xb3, 0x95, 0x54, 0x0a, 0x06, 0xf2, 0xf0, 0x73, 0x57, 0x4d, 0x59,
  0x6c, 0x3a, 0x1b, 0x43, 0xa5, 0x6c, 0x96, 0xb9, 0x20, 0xb5, 0x56, 0xc9,
  0x95, 0x0d, 0x93, 0x06, 0x31, 0xb7, 0xe5, 0x0b, 0x45, 0x60, 0x25, 0x82,
  0x5f, 0xe5, 0x73, 0x4e, 0x2d, 0x48, 0x2e, 0xa1, 0x1d, 0x12, 0x22, 0x0b,
  0xd4, 0x77, 0xb1, 0x40, 0x72, 0xa0, 0x3f, 0xc9, 0x66, 0xb1, 0x2e, 0xc3,
  0x2d, 0xc3, 0xcb, 0xdd, 0xad, 0x05, 0xf6, 0xac, 0xaa, 0xf2, 0xd5, 0x0d,
  0x84, 0xf9, 0x8d, 0x87, 0x94, 0x24, 0x82, 0x93, 0x29, 0xa0, 0x50, 0x98,
  0x5e, 0xb1, 0x10, 0x43, 0xf2, 0xcd, 0xb7, 0xdf, 0xd5, 0xa0, 0x03, 0x71,
  0x12, 0xfa, 0x8e, 0x26, 0xe8, 0x9a, 0x81, 0xb2, 0xfd, 0x10, 0x04, 0xa5,
  0x5c, 0x6c, 0x97, 0x58, 0x6b, 0x36, 0x01, 0xcc, 0x97, 0x4a, 0x86, 0xdc,
  0x7d, 0x58, 0x58, 0x7e, 0x81, 0xc4, 0xb8, 0x22, 0x79, 0xbd, 0xfc, 0x1c,
  0x68, 0x4e, 0xf0, 0xd3, 0x28, 0xd0, 0xff, 0x60, 0xd3, 0x2c, 0x00, 0x9a,
  0x1b, 0x50, 0x51, 0xf0, 0xdf, 0xfc, 0x36, 0x0c, 0xa0, 0x2c, 0x48, 0xd8,
  0x1b, 0xde, 0x32, 0x2e, 0x39, 0xe1, 0x58, 0xd7, 0xa9, 0xcb, 0x69, 0xa9,
  0x24, 0xf7, 0x3f, 0xed, 0x16, 0x18, 0xeb, 0x83, 0x13, 0x00, 0x00
};
unsigned int node_html_len = 1199;
